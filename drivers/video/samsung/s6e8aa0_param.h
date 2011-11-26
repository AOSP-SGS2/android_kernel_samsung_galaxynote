#ifndef __S6E8AA0_PARAM_H__
#define __S6E8AA0_PARAM_H__

#define GAMMA_PARAM_SIZE	26
#define ACL_PARAM_SIZE	ARRAY_SIZE(SEQ_ACL_CUTOFF_50)
#define ELVSS_PARAM_SIZE	ARRAY_SIZE(SEQ_ELVSS_47)

enum {
	ACL_STATUS_0P = 0,
	ACL_STATUS_20P,
	ACL_STATUS_33P,
	ACL_STATUS_43P,
	ACL_STATUS_45P_80CD,
	ACL_STATUS_45P,
	ACL_STATUS_48P,
	ACL_STATUS_50P,
	ACL_STATUS_52P,
	ACL_STATUS_53P,
	ACL_STATUS_55P_230CD,
	ACL_STATUS_55P_240CD,
	ACL_STATUS_55P_260CD,
	ACL_STATUS_55P_290CD,
	ACL_STATUS_MAX
};

enum {
	ELVSS_32 = 0,
	ELVSS_34,
	ELVSS_38,
	ELVSS_47,
	ELVSS_STATUS_MAX,
};

enum {
	GAMMA_2_2_30CD = 0,
	GAMMA_2_2_40CD,
	GAMMA_2_2_50CD,
	GAMMA_2_2_60CD,
	GAMMA_2_2_70CD,
	GAMMA_2_2_80CD,
	GAMMA_2_2_90CD,
	GAMMA_2_2_100CD,
	GAMMA_2_2_110CD,
	GAMMA_2_2_120CD,
	GAMMA_2_2_130CD,
	GAMMA_2_2_140CD,
	GAMMA_2_2_150CD,
	GAMMA_2_2_160CD,
	GAMMA_2_2_170CD,
	GAMMA_2_2_180CD,
	GAMMA_2_2_190CD,
	GAMMA_2_2_200CD,
	GAMMA_2_2_210CD,
	GAMMA_2_2_220CD,
	GAMMA_2_2_230CD,
	GAMMA_2_2_240CD,
	GAMMA_2_2_250CD,
	GAMMA_2_2_260CD,
	GAMMA_2_2_270CD,
	GAMMA_2_2_280CD,
	GAMMA_2_2_290CD = 26,
	GAMMA_2_2_MAX
};


static const unsigned char SEQ_APPLY_LEVEL_2_KEY[] = {
	0xFC,
	0x5A, 0x5A
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11
};

static const unsigned char SEQ_PANEL_CONDITION_SET[] = {
	0xF8,
	0x25, 0x34, 0x00, 0x00, 0x00, 0x95, 0x00, 0x3C, 0x7D, 0x08,
	0x27, 0x00, 0x00, 0x10, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x02, 0x08, 0x08, 0x23, 0x63, 0xC0, 0xC1,
	0x01, 0x81, 0xC1, 0x00, 0xC8, 0xC1, 0xD3, 0x01
};

static const unsigned char SEQ_DISPLAY_CONDITION_SET[] = {
	0xF2,
	0x80, 0x03, 0x0D
};

static const unsigned char SEQ_GAMMA_UPDATE[] = {
	0xF7, 0x03
};

static const unsigned char SEQ_ETC_SOURCE_CONTROL[] = {
	0xF6,
	0x00, 0x02, 0x00
};

static const unsigned char SEQ_ETC_PENTILE_CONTROL[] = {
	0xB6,
	0x0C, 0x02, 0x03, 0x32, 0xFF,
	0x44, 0x44, 0xC0, 0x00
};

static const unsigned char SEQ_ETC_POWER_CONTROL[] = {
	0xF4,
	0xCF, 0x0A, 0x12, 0x10, 0x19,
	0x33, 0x03
};

static const unsigned char SEQ_ELVSS_CONTROL[] = {
	0xB1,
	0x04, 0x00
};

static const unsigned char SEQ_ELVSS_NVM_SETTING[] = {
	0xD9,
	0x14, 0x40, 0x0C, 0xCB, 0xCE,
	0x6E, 0xC4, 0x0F, 0x40, 0x41,
	0xD9, 0x00, 0x00, 0x00
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28
};

static const unsigned char SEQ_STANDBY_ON[] = {
	0x01
};


static const unsigned char SEQ_ACL_ON[] = {
	0xC0, 0x01,
};

static const unsigned char SEQ_ACL_OFF[] = {
	0xC0, 0x00,
};

static const unsigned char SEQ_ACL_CUTOFF_20[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00,
	0x00, 0x03, 0x1F, 0x00, 0x00,
	0x04, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x04, 0x06,
	0x09, 0x0C, 0x0F, 0x11, 0x14,
	0x17, 0x19, 0x1C
};

static const unsigned char SEQ_ACL_CUTOFF_33[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00,
	0x00, 0x03, 0x1F, 0x00, 0x00,
	0x04, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x05, 0x0A,
	0x0E, 0x13, 0x17, 0x1B, 0x20,
	0x24, 0x29, 0x2D
};

static const unsigned char SEQ_ACL_CUTOFF_43[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00,
	0x00, 0x03, 0x1F, 0x00, 0x00,
	0x04, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x07, 0x0D,
	0x13, 0x19, 0x20, 0x26, 0x2C,
	0x32, 0x38, 0x3E
};

static const unsigned char SEQ_ACL_CUTOFF_45_80CD[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00,
	0x00, 0x03, 0x1F, 0x00, 0x00,
	0x04, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x07, 0x0E,
	0x14, 0x1B, 0x21, 0x27, 0x2E,
	0x34, 0x3B, 0x41
};

static const unsigned char SEQ_ACL_CUTOFF_45[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00,
	0x00, 0x03, 0x1F, 0x00, 0x00,
	0x04, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x07, 0x0E,
	0x14, 0x1A, 0x21, 0x27, 0x2D,
	0x33, 0x3A, 0x40
};

static const unsigned char SEQ_ACL_CUTOFF_48[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00,
	0x00, 0x03, 0x1F, 0x00, 0x00,
	0x04, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x08, 0x0F,
	0x16, 0x1D, 0x24, 0x2A, 0x31,
	0x38, 0x3F, 0x46
};

static const unsigned char SEQ_ACL_CUTOFF_50[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00,
	0x00, 0x03, 0x1F, 0x00, 0x00,
	0x04, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x08, 0x0F,
	0x17, 0x1E, 0x25, 0x2C, 0x33,
	0x3B, 0x42, 0x49
};

static const unsigned char SEQ_ACL_CUTOFF_52[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00,
	0x00, 0x03, 0x1F, 0x00, 0x00,
	0x04, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x09, 0x10,
	0x18, 0x1F, 0x27, 0x2F, 0x36,
	0x3E, 0x45, 0x4D
};

static const unsigned char SEQ_ACL_CUTOFF_53[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00,
	0x00, 0x03, 0x1F, 0x00, 0x00,
	0x04, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x09, 0x11,
	0x18, 0x20, 0x28, 0x30, 0x38,
	0x3F, 0x47, 0x4F
};

static const unsigned char SEQ_ACL_CUTOFF_55_230CD[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00,
	0x00, 0x03, 0x1F, 0x00, 0x00,
	0x04, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x09, 0x11,
	0x19, 0x21, 0x2A, 0x32, 0x3A,
	0x42, 0x4A, 0x52
};

static const unsigned char SEQ_ACL_CUTOFF_55_240CD[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00,
	0x00, 0x03, 0x1F, 0x00, 0x00,
	0x04, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x09, 0x11,
	0x1A, 0x22, 0x2A, 0x32, 0x3A,
	0x43, 0x4B, 0x53
};

static const unsigned char SEQ_ACL_CUTOFF_55_260CD[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00,
	0x00, 0x03, 0x1F, 0x00, 0x00,
	0x04, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x09, 0x12,
	0x1A, 0x22, 0x2B, 0x33, 0x3B,
	0x43, 0x4C, 0x54
};

static const unsigned char SEQ_ACL_CUTOFF_55_290CD[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00,
	0x00, 0x03, 0x1F, 0x00, 0x00,
	0x04, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x09, 0x12,
	0x1A, 0x23, 0x2B, 0x33, 0x3C,
	0x44, 0x4D, 0x55
};

static const unsigned char *ACL_CUTOFF_TABLE[ACL_STATUS_MAX] = {
	SEQ_ACL_OFF,
	SEQ_ACL_CUTOFF_20,
	SEQ_ACL_CUTOFF_33,
	SEQ_ACL_CUTOFF_43,
	SEQ_ACL_CUTOFF_45_80CD,
	SEQ_ACL_CUTOFF_45,
	SEQ_ACL_CUTOFF_48,
	SEQ_ACL_CUTOFF_50,
	SEQ_ACL_CUTOFF_52,
	SEQ_ACL_CUTOFF_53,
	SEQ_ACL_CUTOFF_55_230CD,
	SEQ_ACL_CUTOFF_55_240CD,
	SEQ_ACL_CUTOFF_55_260CD,
	SEQ_ACL_CUTOFF_55_290CD
};

static const unsigned char SEQ_ELVSS_32[] = {
	0xB1,
	0x04, 0x9F
};

static const unsigned char SEQ_ELVSS_34[] = {
	0xB1,
	0x04, 0x9D
};

static const unsigned char SEQ_ELVSS_38[] = {
	0xB1,
	0x04, 0x99
};

static const unsigned char SEQ_ELVSS_47[] = {
	0xB1,
	0x04, 0x90
};

static const unsigned char *ELVSS_TABLE[ELVSS_STATUS_MAX] = {
	SEQ_ELVSS_32,
	SEQ_ELVSS_34,
	SEQ_ELVSS_38,
	SEQ_ELVSS_47,
};


#endif /* __S6E8AA0_PARAM_H__ */
