#!/bin/bash

TOOLCHAIN="../../../prebuilt/linux-x86/toolchain/arm-eabi-4.4.0/bin/arm-eabi-"
KERNEL_PATH=$PWD
DEVICE=galaxynote

# Clean
make mrproper

# Build
cp -f $KERNEL_PATH/arch/arm/configs/c1_"$DEVICE"_defconfig $KERNEL_PATH/.config

make -j`grep 'processor' /proc/cpuinfo | wc -l` ARCH=arm CROSS_COMPILE=$TOOLCHAIN modules || exit -1

make -j`grep 'processor' /proc/cpuinfo | wc -l` ARCH=arm CROSS_COMPILE=$TOOLCHAIN zImage || exit -1

find -name '*.ko' -exec cp -av {} ../../../device/samsung/"$DEVICE"/modules/ \;

cp -r arch/arm/boot/zImage ../../../device/samsung/"$DEVICE"/kernel
