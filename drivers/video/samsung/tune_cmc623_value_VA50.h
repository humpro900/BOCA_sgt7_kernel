#pragma once

#define SCR_C8_VA50	0x0000	//kb R	SCR
#define SCR_C9_VA50	0x0000	//gc R
#define SCR_CA_VA50	0xffff //rm R
#define SCR_CB_VA50	0xffe8 //yw R
#define SCR_CC_VA50	0x0030 //kb G
#define SCR_CD_VA50	0xffff //gc G
#define SCR_CE_VA50	0x0808 //rm G
#define SCR_CF_MSB16_VA50	0xff00	//yw G
#define SCR_D0_VA50	0x00ff //kb B
#define SCR_D1_VA50	0x00ff //gc B
#define SCR_D2_VA50	0x00ff //rm B
#define SCR_D3_VA50	0x00ff //yw B
#define SCR_CC_DMB_VA50	0x0000 //kb G

#if (SCR_CF_MSB16_VA50&0xff)
#error "SCR_CF_MSB16 can't have lower 8bit"
#endif

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
mDNIe_data_type cmc623_Video_VA50[]= 
{
//start
0x0000,0x0000,	//BANK 0
0x0001,0x0060,	//SCR LABC
0x002c,0x0fff,	//DNR bypass 0x003C
0x002d,0x1900,	//DNR bypass 0x0a08
0x002e,0x0000,	//DNR bypass 0x1010
0x002f,0x0fff,	//DNR bypass 0x0400
0x003A,0x000D,	//HDTR DE CS
0x003B,0x03ff,	//DE SHARPNESS
0x003C,0x0000,	//NOISE LEVEL
0x0042,0x0000,	//DE TH (MAX DIFF)
0x00c8,SCR_C8_VA50,	//kb R	SCR
0x00c9,SCR_C9_VA50,	//gc R
0x00ca,SCR_CA_VA50,	//rm R
0x00cb,SCR_CB_VA50,	//yw R
0x00cc,SCR_CC_VA50,	//kb G
0x00cd,SCR_CD_VA50,	//gc G
0x00ce,SCR_CE_VA50,	//rm G
0x00d0,SCR_D0_VA50,	//kb B
0x00d1,SCR_D1_VA50,	//gc B
0x00d2,SCR_D2_VA50,	//rm B
0x00d3,SCR_D3_VA50,	//yw B

	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_Video_CABC_VA50[]= 
{
//start
0x0000,0x0000,	//BANK 0
0x0001,0x0070,	//SCR LABC CABC
0x002c,0x0fff,	//DNR bypass 0x003C
0x002d,0x1900,	//DNR bypass 0x0a08
0x002e,0x0000,	//DNR bypass 0x1010
0x002f,0x0fff,	//DNR bypass 0x0400
0x003A,0x000D,	//HDTR DE CS
0x003B,0x03ff,	//DE SHARPNESS
0x003C,0x0000,	//NOISE LEVEL
0x0042,0x0000,	//DE TH (MAX DIFF)
0x0072,0x0000,	//CABC Dgain
0x0073,0x0000,
0x0074,0x0000,
0x0075,0x0000,
0x007C,0x0002,	//Dynamic LCD
0x00c8,SCR_C8_VA50,	//kb R	SCR
0x00c9,SCR_C9_VA50,	//gc R
0x00ca,SCR_CA_VA50,	//rm R
0x00cb,SCR_CB_VA50,	//yw R
0x00cc,SCR_CC_VA50,	//kb G
0x00cd,SCR_CD_VA50,	//gc G
0x00ce,SCR_CE_VA50,	//rm G
0x00d0,SCR_D0_VA50,	//kb B
0x00d1,SCR_D1_VA50,	//gc B
0x00d2,SCR_D2_VA50,	//rm B
0x00d3,SCR_D3_VA50,	//yw B

	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_Camera_VA50[]= 
{
//start
0x0000,0x0000,	//BANK 0
0x0001,0x0060,	//SCR LABC
0x002c,0x0fff,	//DNR bypass 0x003C
0x002d,0x1900,	//DNR bypass 0x0a08
0x002e,0x0000,	//DNR bypass 0x1010
0x002f,0x0fff,	//DNR bypass 0x0400
0x003A,0x000D,	//HDTR DE CS
0x003B,0x03ff,	//DE SHARPNESS
0x003C,0x0000,	//NOISE LEVEL
0x0042,0x0000,	//DE TH (MAX DIFF)
0x00c8,SCR_C8_VA50,	//kb R	SCR
0x00c9,SCR_C9_VA50,	//gc R
0x00ca,SCR_CA_VA50,	//rm R
0x00cb,SCR_CB_VA50,	//yw R
0x00cc,SCR_CC_VA50,	//kb G
0x00cd,SCR_CD_VA50,	//gc G
0x00ce,SCR_CE_VA50,	//rm G
0x00d0,SCR_D0_VA50,	//kb B
0x00d1,SCR_D1_VA50,	//gc B
0x00d2,SCR_D2_VA50,	//rm B
0x00d3,SCR_D3_VA50,	//yw B

	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_Camera_CABC_VA50[]= 
{
	{0x0000,0x0000},	//BANK 0
	{0x0001,0x0070},	//SCR LABC CABC
	{0x002c,0x0fff},	//DNR bypass {0x003C
	{0x002d,0x1900},	//DNR bypass {0x0a08
	{0x002e,0x0000},	//DNR bypass {0x1010
	{0x002f,0x0fff},	//DNR bypass {0x0400
	{0x003A,0x000D},	//HDTR DE CS
	{0x003B,0x03ff},	//DE SHARPNESS
	{0x003C,0x0000},	//NOISE LEVEL
	//{0x003F,0x00d0},	//CS GAIN
	{0x0042,0x0000},	//DE TH (MAX DIFF)
	{0x0072,0x0000},	//CABC Dgain
	{0x0073,0x0000},
	{0x0074,0x0000},
	{0x0075,0x0000},
	//{0x0076,0x3e43},	//PowerLUT 3C50
	//{0x0077,0x3a48},	//PowerLUT 2D64
	//{0x0078,0x3e3b},	//PowerLUT 3C32
	//{0x0079,0x3633},	//PowerLUT 1E00
	//{0x007a,0x3b00},	//PowerLUT 3200
	{0x007C,0x0002},	//Dynamic LCD
	//{0x00b4,0x5640},	//CABC PWM
{0x00c8,SCR_C8_VA50},	//kb R	SCR
{0x00c9,SCR_C9_VA50},	//gc R
{0x00ca,SCR_CA_VA50},	//rm R
{0x00cb,SCR_CB_VA50},	//yw R
{0x00cc,SCR_CC_VA50},	//kb G
{0x00cd,SCR_CD_VA50},	//gc G
{0x00ce,SCR_CE_VA50},	//rm G
{0x00d0,SCR_D0_VA50},	//kb B
{0x00d1,SCR_D1_VA50},	//gc B
{0x00d2,SCR_D2_VA50},	//rm B
{0x00d3,SCR_D3_VA50},	//yw B
	//{0x0000,0x0001},	//BANK 1
	//{0x0020,0x0000},	//GAMMA CABC
	//{0x0021,0x2400},
	//{0x0022,0x2400},
	//{0x0023,0x2400},
	//{0x0024,0x2400},
	//{0x0025,0x2400},
	//{0x0026,0x2400},
	//{0x0027,0x2400},
	//{0x0028,0x2400},
	//{0x0029,0x2400},
	//{0x002A,0x2400},
	//{0x002B,0x2400},
	//{0x002C,0x2400},
	//{0x002D,0x2400},
	//{0x002E,0x2400},
	//{0x002F,0x2400},
	//{0x0030,0x2400},
	//{0x0031,0x2400},
	//{0x0032,0x2400},
	//{0x0033,0x2400},
	//{0x0034,0x2400},
	//{0x0035,0x2400},
	//{0x0036,0x184b},
	//{0x0037,0x06cf},
	//{0x0038,0xFF00},
	//{0x0020,0x0001},
	//{0x0000,0x0000},	//BANK 0

	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_UI_VA50[]= 
{
//start
0x0000,0x0000,	//BANK 0
0x0001,0x0060,	//SCR LABC
0x002c,0x0fff,	//DNR bypass 0x003C
0x002d,0x1900,	//DNR bypass 0x0a08
0x002e,0x0000,	//DNR bypass 0x1010
0x002f,0x0fff,	//DNR bypass 0x0400
0x003A,0x0009,	//HDTR (DE D) CS
0x003B,0x03ff,	//DE SHARPNESS
0x003C,0x0000,	//NOISE LEVEL
0x0042,0x0000,	//DE TH (MAX DIFF)
0x00c8,SCR_C8_VA50,	//kb R	SCR
0x00c9,SCR_C9_VA50,	//gc R
0x00ca,SCR_CA_VA50,	//rm R
0x00cb,SCR_CB_VA50,	//yw R
0x00cc,SCR_CC_VA50,	//kb G
0x00cd,SCR_CD_VA50,	//gc G
0x00ce,SCR_CE_VA50,	//rm G
0x00d0,SCR_D0_VA50,	//kb B
0x00d1,SCR_D1_VA50,	//gc B
0x00d2,SCR_D2_VA50,	//rm B
0x00d3,SCR_D3_VA50,	//yw B

	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_UI_CABC_VA50[]= 
{
//start
0x0000,0x0000,	//BANK 0
0x0001,0x0070,	//SCR LABC CABC
0x002c,0x0fff,	//DNR bypass 0x003C
0x002d,0x1900,	//DNR bypass 0x0a08
0x002e,0x0000,	//DNR bypass 0x1010
0x002f,0x0fff,	//DNR bypass 0x0400
0x003A,0x0009,	//HDTR (DE D) CS
0x003B,0x03ff,	//DE SHARPNESS
0x003C,0x0000,	//NOISE LEVEL
0x0042,0x0000,	//DE TH (MAX DIFF)
0x0072,0x0000,	//CABC Dgain
0x0073,0x0000,
0x0074,0x0000,
0x0075,0x0000,
0x007C,0x0002,	//Dynamic LCD
0x00c8,SCR_C8_VA50,	//kb R	SCR
0x00c9,SCR_C9_VA50,	//gc R
0x00ca,SCR_CA_VA50,	//rm R
0x00cb,SCR_CB_VA50,	//yw R
0x00cc,SCR_CC_VA50,	//kb G
0x00cd,SCR_CD_VA50,	//gc G
0x00ce,SCR_CE_VA50,	//rm G
0x00d0,SCR_D0_VA50,	//kb B
0x00d1,SCR_D1_VA50,	//gc B
0x00d2,SCR_D2_VA50,	//rm B
0x00d3,SCR_D3_VA50,	//yw B

	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_VT_VA50[]= 
{
//start
0x0000,0x0000,	//BANK 0
0x0001,0x0060,	//SCR LABC
0x002c,0x0fff,	//DNR bypass,dir_th   0x003c
0x002d,0x19ff,	//DNR dir_num,decont7 0x0a08
0x002e,0xff16,	//DNR decont5,mask_th 0x1010
0x002F,0x0000,	//DNR block_th        0x0400
0x003A,0x000D,	//HDTR DE CS
0x003B,0x03ff,	//DE SHARPNESS
0x003C,0x0000,	//NOISE LEVEL
0x0042,0x0000,	//DE TH (MAX DIFF)
0x00c8,SCR_C8_VA50,	//kb R	SCR
0x00c9,SCR_C9_VA50,	//gc R
0x00ca,SCR_CA_VA50,	//rm R
0x00cb,SCR_CB_VA50,	//yw R
0x00cc,SCR_CC_VA50,	//kb G
0x00cd,SCR_CD_VA50,	//gc G
0x00ce,SCR_CE_VA50,	//rm G
0x00d0,SCR_D0_VA50,	//kb B
0x00d1,SCR_D1_VA50,	//gc B
0x00d2,SCR_D2_VA50,	//rm B
0x00d3,SCR_D3_VA50,	//yw B

	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_VT_CABC_VA50[]= 
{
//start
0x0000,0x0000,	//BANK 0
0x0001,0x0070,	//SCR LABC CABC
0x002c,0x0fff,	//DNR bypass,dir_th 0x003c
0x002d,0x19ff,	//DNR dir_num,decont7 0x0a08
0x002e,0xff16,	//DNR decont5,mask_th 0x1010
0x002F,0x0000,	//DNR block_th 0x0400
0x003A,0x000D,	//HDTR DE CS
0x003B,0x03ff,	//DE SHARPNESS
0x003C,0x0000,	//NOISE LEVEL
0x0042,0x0000,	//DE TH (MAX DIFF)
0x0072,0x0000,	//CABC Dgain
0x0073,0x0000,
0x0074,0x0000,
0x0075,0x0000,
0x007C,0x0002,	//Dynamic LCD
0x00c8,SCR_C8_VA50,	//kb R	SCR
0x00c9,SCR_C9_VA50,	//gc R
0x00ca,SCR_CA_VA50,	//rm R
0x00cb,SCR_CB_VA50,	//yw R
0x00cc,SCR_CC_VA50,	//kb G
0x00cd,SCR_CD_VA50,	//gc G
0x00ce,SCR_CE_VA50,	//rm G
0x00d0,SCR_D0_VA50,	//kb B
0x00d1,SCR_D1_VA50,	//gc B
0x00d2,SCR_D2_VA50,	//rm B
0x00d3,SCR_D3_VA50,	//yw B

	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_DMB_VA50[]= 
{
0x0000,0x0000,	//BANK 0
0x0001,0x0060,	//SCR LABC
0x002c,0x003c,	//DNR bypass,dir_th   0x003c
0x002d,0x0a08,	//DNR dir_num,decont7 0x0a08
0x002e,0x1010,	//DNR decont5,mask_th 0x1010
0x002F,0x0400,	//DNR block_th        0x0400
0x003A,0x000D,	//HDTR DE CS
0x003B,0x03ff,	//DE SHARPNESS
0x003C,0x0000,	//NOISE LEVEL
0x0042,0x0000,	//DE TH (MAX DIFF)
0x00c8,SCR_C8_VA50,	//kb R	SCR
0x00c9,SCR_C9_VA50,	//gc R
0x00ca,SCR_CA_VA50,	//rm R
0x00cb,SCR_CB_VA50,	//yw R
0x00cc,SCR_CC_DMB_VA50,	//kb G
0x00cd,SCR_CD_VA50,	//gc G
0x00ce,SCR_CE_VA50,	//rm G
0x00d0,SCR_D0_VA50,	//kb B
0x00d1,SCR_D1_VA50,	//gc B
0x00d2,SCR_D2_VA50,	//rm B
0x00d3,SCR_D3_VA50,	//yw B

	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_DMB_CABC_VA50[]= 
{
//start
0x0000,0x0000,	//BANK 0
0x0001,0x0070,	//SCR LABC CABC
0x002c,0x003c,	//DNR bypass,dir_th   0x003c
0x002d,0x0a08,	//DNR dir_num,decont7 0x0a08
0x002e,0x1010,	//DNR decont5,mask_th 0x1010
0x002F,0x0400,	//DNR block_th        0x0400
0x003A,0x000D,	//HDTR DE CS
0x003B,0x03ff,	//DE SHARPNESS
0x003C,0x0000,	//NOISE LEVEL
0x0042,0x0000,	//DE TH (MAX DIFF)
0x0072,0x0000,	//CABC Dgain
0x0073,0x0000,
0x0074,0x0000,
0x0075,0x0000,
0x007C,0x0002,	//Dynamic LCD
0x00c8,SCR_C8_VA50,	//kb R	SCR
0x00c9,SCR_C9_VA50,	//gc R
0x00ca,SCR_CA_VA50,	//rm R
0x00cb,SCR_CB_VA50,	//yw R
0x00cc,SCR_CC_DMB_VA50,	//kb G
0x00cd,SCR_CD_VA50,	//gc G
0x00ce,SCR_CE_VA50,	//rm G
0x00d0,SCR_D0_VA50,	//kb B
0x00d1,SCR_D1_VA50,	//gc B
0x00d2,SCR_D2_VA50,	//rm B
0x00d3,SCR_D3_VA50,	//yw B
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_GALLERY_VA50[]= 
{
//start
0x0000,0x0000,	//BANK 0
0x0001,0x0060,	//SCR LABC
0x002c,0x0fff,	//DNR bypass 0x003C
0x002d,0x1900,	//DNR bypass 0x0a08
0x002e,0x0000,	//DNR bypass 0x1010
0x002f,0x0fff,	//DNR bypass 0x0400
0x003A,0x000D,	//HDTR DE CS
0x003B,0x03ff,	//DE SHARPNESS
0x003C,0x0000,	//NOISE LEVEL
0x0042,0x0000,	//DE TH (MAX DIFF)
0x00c8,SCR_C8_VA50,	//kb R	SCR
0x00c9,SCR_C9_VA50,	//gc R
0x00ca,SCR_CA_VA50,	//rm R
0x00cb,SCR_CB_VA50,	//yw R
0x00cc,SCR_CC_VA50,	//kb G
0x00cd,SCR_CD_VA50,	//gc G
0x00ce,SCR_CE_VA50,	//rm G
0x00d0,SCR_D0_VA50,	//kb B
0x00d1,SCR_D1_VA50,	//gc B
0x00d2,SCR_D2_VA50,	//rm B
0x00d3,SCR_D3_VA50,	//yw B

	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_GALLERY_CABC_VA50[]= 
{
//start
0x0000,0x0000,	//BANK 0
0x0001,0x0070,	//SCR LABC CABC
0x002c,0x0fff,	//DNR bypass 0x003C
0x002d,0x1900,	//DNR bypass 0x0a08
0x002e,0x0000,	//DNR bypass 0x1010
0x002f,0x0fff,	//DNR bypass 0x0400
0x003A,0x000D,	//HDTR DE CS
0x003B,0x03ff,	//DE SHARPNESS
0x003C,0x0000,	//NOISE LEVEL
0x0042,0x0000,	//DE TH (MAX DIFF)
0x0072,0x0000,	//CABC Dgain
0x0073,0x0000,
0x0074,0x0000,
0x0075,0x0000,
0x007C,0x0002,	//Dynamic LCD
0x00c8,SCR_C8_VA50,	//kb R	SCR
0x00c9,SCR_C9_VA50,	//gc R
0x00ca,SCR_CA_VA50,	//rm R
0x00cb,SCR_CB_VA50,	//yw R
0x00cc,SCR_CC_VA50,	//kb G
0x00cd,SCR_CD_VA50,	//gc G
0x00ce,SCR_CE_VA50,	//rm G
0x00d0,SCR_D0_VA50,	//kb B
0x00d1,SCR_D1_VA50,	//gc B
0x00d2,SCR_D2_VA50,	//rm B
0x00d3,SCR_D3_VA50,	//yw B

	{END_SEQ,0x0000},
};

////////////////////////////////////////////////////////////////////////////////////////////////
mDNIe_data_type cmc623_White_VA50[]=
{
	{0x00cf,SCR_CF_MSB16_VA50|0xe0},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xe4},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xe8},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xec},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xf0},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xf4},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xf8},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xfc},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xff},	//yw G
};

mDNIe_data_type cmc623_White_CABC_VA50[]=
{
	{0x00cf,SCR_CF_MSB16_VA50|0xe0},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xe4},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xe8},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xec},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xf0},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xf4},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xf8},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xfc},	//yw G
	{0x00cf,SCR_CF_MSB16_VA50|0xff},	//yw G
};

#if 0
mDNIe_data_type cmc623_White_0_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x00cf,SCR_CF_MSB16_VA50|0xf0},	//yw G

	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_White_Plus_1_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x00cf,SCR_CF_MSB16_VA50|0xf8},	//yw G
	
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_White_Plus_2_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x00cf,SCR_CF_MSB16_VA50|0xff},	//yw G
	
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_White_Minus_1_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x00cf,SCR_CF_MSB16_VA50|0xe8},	//yw G
	
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_White_Minus_2_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x00cf,SCR_CF_MSB16_VA50|0xe0},	//yw G
	
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_White_0_CABC_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x00cf,SCR_CF_MSB16_VA50|0xf0},	//yw G

	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_White_Plus_1_CABC_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x00cf,SCR_CF_MSB16_VA50|0xf8},	//yw G
	
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_White_Plus_2_CABC_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x00cf,SCR_CF_MSB16_VA50|0xff},	//yw G
	
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_White_Minus_1_CABC_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x00cf,SCR_CF_MSB16_VA50|0xe8},	//yw G
	
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_White_Minus_2_CABC_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x00cf,SCR_CF_MSB16_VA50|0xe0},	//yw G
	
	{END_SEQ,0x0000},
};
#endif

//////////////////////////////////////////////////
mDNIe_data_type cmc623_Saturation_VA50[]=
{
	{0x003F,0x0000},	//CS GAIN
	{0x003F,0x0028},	//CS GAIN
	{0x003F,0x0050},	//CS GAIN
	{0x003F,0x0078},	//CS GAIN
	{0x003F,0x00a0},	//CS GAIN
	{0x003F,0x00f8},	//CS GAIN
	{0x003F,0x0150},	//CS GAIN
	{0x003F,0x01a8},	//CS GAIN
	{0x003F,0x0200},	//CS GAIN
};

mDNIe_data_type cmc623_Saturation_CABC_VA50[]=
{
	{0x003F,0x0000},	//CS GAIN
	{0x003F,0x0028},	//CS GAIN
	{0x003F,0x0050},	//CS GAIN
	{0x003F,0x0078},	//CS GAIN
	{0x003F,0x00a0},	//CS GAIN
	{0x003F,0x00f8},	//CS GAIN
	{0x003F,0x0150},	//CS GAIN
	{0x003F,0x01a8},	//CS GAIN
	{0x003F,0x0200},	//CS GAIN
};

#if 0
mDNIe_data_type cmc623_Saturation_0_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x003F,0x00a0},	//CS GAIN

	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_Saturation_Plus_1_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x003F,0x0150},	//CS GAIN
	
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_Saturation_Plus_2_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x003F,0x0200},	//CS GAIN
	
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_Saturation_Minus_1_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x003F,0x0050},	//CS GAIN
	
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_Saturation_Minus_2_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x003F,0x0000},	//CS GAIN
	
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_Saturation_0_CABC_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x003F,0x00a0},	//CS GAIN

	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_Saturation_Plus_1_CABC_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x003F,0x0150},	//CS GAIN
	
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_Saturation_Plus_2_CABC_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x003F,0x0200},	//CS GAIN
	
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_Saturation_Minus_1_CABC_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x003F,0x0050},	//CS GAIN
	
	{END_SEQ,0x0000},
};

mDNIe_data_type cmc623_Saturation_Minus_2_CABC_VA50[]=
{
	{0x0000,0x0000},	//BANK 0
	{0x003F,0x0000},	//CS GAIN
	
	{END_SEQ,0x0000},
};
#endif

//////////////////////////////////////////////////
mDNIe_data_type cmc623_Black_Minus_4_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x0c00,
	0x0022,0x0c00,
	0x0023,0x0c00,
	0x0024,0x0c00,
	0x0025,0x0c00,
	0x0026,0x0c00,
	0x0027,0x0c00,
	0x0028,0x0c00,
	0x0029,0x0c00,
	0x002A,0x0c00,
	0x002B,0x0c00,
	0x002C,0x0c00,
	0x002D,0x0c00,
	0x002E,0x0c00,
	0x002F,0x0c00,
	0x0030,0xae3f,
	0x0031,0xae3f,
	0x0032,0xae3f,
	0x0033,0xae3f,
	0x0034,0xa315,
	0x0035,0xa315,
	0x0036,0xa315,
	0x0037,0xa315,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Minus_3_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x1000,
	0x0022,0x1000,
	0x0023,0x1000,
	0x0024,0x1000,
	0x0025,0x1000,
	0x0026,0x1000,
	0x0027,0x1000,
	0x0028,0x1000,
	0x0029,0x1000,
	0x002A,0x1000,
	0x002B,0x1000,
	0x002C,0x1000,
	0x002D,0x1000,
	0x002E,0x1000,
	0x002F,0x1000,
	0x0030,0xaa30,
	0x0031,0xaa30,
	0x0032,0xaa30,
	0x0033,0xaa30,
	0x0034,0xa315,
	0x0035,0xa315,
	0x0036,0xa315,
	0x0037,0xa315,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Minus_2_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x1200,
	0x0022,0x1200,
	0x0023,0x1200,
	0x0024,0x1200,
	0x0025,0x1200,
	0x0026,0x1200,
	0x0027,0x1200,
	0x0028,0x1200,
	0x0029,0x1200,
	0x002A,0x1200,
	0x002B,0x1200,
	0x002C,0x1200,
	0x002D,0x1200,
	0x002E,0xa620,
	0x002F,0xa620,
	0x0030,0xa620,
	0x0031,0xa620,
	0x0032,0xa620,
	0x0033,0xa620,
	0x0034,0xa315,
	0x0035,0xa315,
	0x0036,0xa315,
	0x0037,0xa315,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Minus_1_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x1500,
	0x0022,0x1500,
	0x0023,0x1500,
	0x0024,0x1500,
	0x0025,0x1500,
	0x0026,0x1500,
	0x0027,0x1500,
	0x0028,0x1500,
	0x0029,0x1500,
	0x002A,0x1500,
	0x002B,0x1500,
	0x002C,0x1500,
	0x002D,0xa315,
	0x002E,0xa315,
	0x002F,0xa315,
	0x0030,0xa315,
	0x0031,0xa315,
	0x0032,0xa315,
	0x0033,0xa315,
	0x0034,0xa315,
	0x0035,0xa315,
	0x0036,0xa315,
	0x0037,0xa315,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_0_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x1a00,
	0x0022,0x1a00,
	0x0023,0x1a00,
	0x0024,0x1a00,
	0x0025,0x1a00,
	0x0026,0x1a00,
	0x0027,0x1a00,
	0x0028,0x1a00,
	0x0029,0x1a00,
	0x002A,0x1a00,
	0x002B,0x1a00,
	0x002C,0x1a00,
	0x002D,0x1a00,
	0x002E,0x1a00,
	0x002F,0x1a00,
	0x0030,0x1a00,
	0x0031,0x1a00,
	0x0032,0xa315,
	0x0033,0xa315,
	0x0034,0xa315,
	0x0035,0xa315,
	0x0036,0xa315,
	0x0037,0xa315,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Plus_1_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x1d00,
	0x0022,0x1d00,
	0x0023,0x1d00,
	0x0024,0x1d00,
	0x0025,0x1d00,
	0x0026,0x1d00,
	0x0027,0x1d00,
	0x0028,0x1d00,
	0x0029,0x1d00,
	0x002A,0x1d00,
	0x002B,0x1d00,
	0x002C,0x1d00,
	0x002D,0x1d00,
	0x002E,0x1d00,
	0x002F,0x1d00,
	0x0030,0x1d00,
	0x0031,0x1d00,
	0x0032,0x9f05,
	0x0033,0x9f05,
	0x0034,0xa315,
	0x0035,0xa315,
	0x0036,0xa315,
	0x0037,0xa315,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Plus_2_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x2000,
	0x0022,0x2000,
	0x0023,0x2000,
	0x0024,0x2000,
	0x0025,0x2000,
	0x0026,0x2000,
	0x0027,0x2000,
	0x0028,0x2000,
	0x0029,0x2000,
	0x002A,0x2000,
	0x002B,0x2000,
	0x002C,0x2000,
	0x002D,0x1c06,
	0x002E,0x1c06,
	0x002F,0x1c06,
	0x0030,0x1c06,
	0x0031,0x1c06,
	0x0032,0x1c06,
	0x0033,0x1c06,
	0x0034,0xa315,
	0x0035,0xa315,
	0x0036,0xa315,
	0x0037,0xa315,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Plus_3_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x2400,
	0x0022,0x2400,
	0x0023,0x2400,
	0x0024,0x2400,
	0x0025,0x2400,
	0x0026,0x2400,
	0x0027,0x2400,
	0x0028,0x2400,
	0x0029,0x2400,
	0x002A,0x2400,
	0x002B,0x2400,
	0x002C,0x1a0e,
	0x002D,0x1a0e,
	0x002E,0x1a0e,
	0x002F,0x1a0e,
	0x0030,0x1a0e,
	0x0031,0x1a0e,
	0x0032,0x1a0e,
	0x0033,0x1a0e,
	0x0034,0xa315,
	0x0035,0xa315,
	0x0036,0xa315,
	0x0037,0xa315,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Plus_4_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x2900,
	0x0022,0x2900,
	0x0023,0x2900,
	0x0024,0x2900,
	0x0025,0x2900,
	0x0026,0x2900,
	0x0027,0x2900,
	0x0028,0x2900,
	0x0029,0x2900,
	0x002A,0x2900,
	0x002B,0x2900,
	0x002C,0x2900,
	0x002D,0x171a,
	0x002E,0x171a,
	0x002F,0x171a,
	0x0030,0x171a,
	0x0031,0x171a,
	0x0032,0x171a,
	0x0033,0x171a,
	0x0034,0xa315,
	0x0035,0xa315,
	0x0036,0xa315,
	0x0037,0xa315,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Minus_4_CABC_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x0c00,
	0x0022,0x0c00,
	0x0023,0x0c00,
	0x0024,0x0c00,
	0x0025,0x0c00,
	0x0026,0x0c00,
	0x0027,0x0c00,
	0x0028,0x0c00,
	0x0029,0x0c00,
	0x002A,0x0c00,
	0x002B,0x0c00,
	0x002C,0x0c00,
	0x002D,0x0c00,
	0x002E,0x0c00,
	0x002F,0x0c00,
	0x0030,0xbb58,
	0x0031,0xbb58,
	0x0032,0xbb58,
	0x0033,0xbb58,
	0x0034,0x2401,
	0x0035,0x2016,
	0x0036,0x1654,
	0x0037,0x1179,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Minus_3_CABC_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x1000,
	0x0022,0x1000,
	0x0023,0x1000,
	0x0024,0x1000,
	0x0025,0x1000,
	0x0026,0x1000,
	0x0027,0x1000,
	0x0028,0x1000,
	0x0029,0x1000,
	0x002A,0x1000,
	0x002B,0x1000,
	0x002C,0x1000,
	0x002D,0x1000,
	0x002E,0x1000,
	0x002F,0x1000,
	0x0030,0xb748,
	0x0031,0xb748,
	0x0032,0xb748,
	0x0033,0xb748,
	0x0034,0x2401,
	0x0035,0x2016,
	0x0036,0x1654,
	0x0037,0x1179,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Minus_2_CABC_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x1200,
	0x0022,0x1200,
	0x0023,0x1200,
	0x0024,0x1200,
	0x0025,0x1200,
	0x0026,0x1200,
	0x0027,0x1200,
	0x0028,0x1200,
	0x0029,0x1200,
	0x002A,0x1200,
	0x002B,0x1200,
	0x002C,0x1200,
	0x002D,0x1200,
	0x002E,0xa620,
	0x002F,0xa620,
	0x0030,0xa620,
	0x0031,0xb43d,
	0x0032,0xb43d,
	0x0033,0xb43d,
	0x0034,0x2401,
	0x0035,0x2016,
	0x0036,0x1654,
	0x0037,0x1179,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Minus_1_CABC_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x1500,
	0x0022,0x1500,
	0x0023,0x1500,
	0x0024,0x1500,
	0x0025,0x1500,
	0x0026,0x1500,
	0x0027,0x1500,
	0x0028,0x1500,
	0x0029,0x1500,
	0x002A,0x1500,
	0x002B,0x1500,
	0x002C,0x1500,
	0x002D,0xa315,
	0x002E,0xa315,
	0x002F,0xa315,
	0x0030,0xb02d,
	0x0031,0xb02d,
	0x0032,0xb02d,
	0x0033,0xb02d,
	0x0034,0x2401,
	0x0035,0x2016,
	0x0036,0x1654,
	0x0037,0x1179,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_0_CABC_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x1a00,
	0x0022,0x1a00,
	0x0023,0x1a00,
	0x0024,0x1a00,
	0x0025,0x1a00,
	0x0026,0x1a00,
	0x0027,0x1a00,
	0x0028,0x1a00,
	0x0029,0x1a00,
	0x002A,0x1a00,
	0x002B,0x1a00,
	0x002C,0x1a00,
	0x002D,0x1a00,
	0x002E,0x1a00,
	0x002F,0x1a00,
	0x0030,0x1a00,
	0x0031,0xb02d,
	0x0032,0xb02d,
	0x0033,0xb02d,
	0x0034,0x2401,
	0x0035,0x2016,
	0x0036,0x1654,
	0x0037,0x1179,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Plus_1_CABC_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x1d00,
	0x0022,0x1d00,
	0x0023,0x1d00,
	0x0024,0x1d00,
	0x0025,0x1d00,
	0x0026,0x1d00,
	0x0027,0x1d00,
	0x0028,0x1d00,
	0x0029,0x1d00,
	0x002A,0x1d00,
	0x002B,0x1d00,
	0x002C,0x1d00,
	0x002D,0x1d00,
	0x002E,0x1d00,
	0x002F,0x1d00,
	0x0030,0x1d00,
	0x0031,0xac1e,
	0x0032,0xac1e,
	0x0033,0xac1e,
	0x0034,0x2401,
	0x0035,0x2016,
	0x0036,0x1654,
	0x0037,0x1179,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Plus_2_CABC_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x2000,
	0x0022,0x2000,
	0x0023,0x2000,
	0x0024,0x2000,
	0x0025,0x2000,
	0x0026,0x2000,
	0x0027,0x2000,
	0x0028,0x2000,
	0x0029,0x2000,
	0x002A,0x2000,
	0x002B,0x2000,
	0x002C,0x2000,
	0x002D,0x2000,
	0x002E,0x2000,
	0x002F,0xa80e,
	0x0030,0xa80e,
	0x0031,0xa80e,
	0x0032,0xa80e,
	0x0033,0xa80e,
	0x0034,0x2401,
	0x0035,0x2016,
	0x0036,0x1654,
	0x0037,0x1179,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Plus_3_CABC_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x2400,
	0x0022,0x2400,
	0x0023,0x2400,
	0x0024,0x2400,
	0x0025,0x2400,
	0x0026,0x2400,
	0x0027,0x2400,
	0x0028,0x2400,
	0x0029,0x2400,
	0x002A,0x2400,
	0x002B,0x2400,
	0x002C,0x2400,
	0x002D,0x2400,
	0x002E,0x2400,
	0x002F,0xa502,
	0x0030,0xa502,
	0x0031,0xa502,
	0x0032,0xa502,
	0x0033,0xa502,
	0x0034,0x2401,
	0x0035,0x2016,
	0x0036,0x1654,
	0x0037,0x1179,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};

mDNIe_data_type cmc623_Black_Plus_4_CABC_VA50[]=
{
	0x0000,0x0001,	//BANK 1
//	0x0020,0x0000,
	0x0021,0x2900,
	0x0022,0x2900,
	0x0023,0x2900,
	0x0024,0x2900,
	0x0025,0x2900,
	0x0026,0x2900,
	0x0027,0x2900,
	0x0028,0x2900,
	0x0029,0x2900,
	0x002A,0x2900,
	0x002B,0x2900,
	0x002C,0x2900,
	0x002D,0x2900,
	0x002E,0x2900,
	0x002F,0x210d,
	0x0030,0x210d,
	0x0031,0x210d,
	0x0032,0x210d,
	0x0033,0x210d,
	0x0034,0x2401,
	0x0035,0x2016,
	0x0036,0x1654,
	0x0037,0x1179,
	0x0038,0xFF00,
	0x0020,0x0001,
	0x0000,0x0000,
	
	END_SEQ,0x0000,
};



