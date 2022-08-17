#ifndef _V_CSC_TOP_H_
#define _V_CSC_TOP_H_

#include "hls_video.h"
#include "ap_int.h"

typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;

typedef signed char I8;
typedef signed short I16;
typedef signed int I32;

// Offsets
#define OFFSET_WIDTH          MAX_DATA_WIDTH+2
typedef ap_int<OFFSET_WIDTH> OFFSET_TYPE;

// Coefficients
#define COEF_PRECISION        16
#define COEF_FRACTIONAL_BITS  12

//define video formats
#define format_RGB                (0)
#define format_YCbCr444           (1)
#define format_YCbCr422           (2)
#define format_YCbCr420           (3)

//define video components
#define Y_R_CH                    (0)
#define Cb_G_CH                   (1)
#define Cr_B_CH                   (2)

#define MIN_PIXELS (64)

#define CLAMP(a,lo,hi)    ((a)<(lo)?(lo) :((a)>(hi) ? (hi) : (a)))

//unsigned arbitrary precision types
typedef ap_uint<MAX_DATA_WIDTH> PIXEL_TYPE;
typedef hls::Scalar<3, PIXEL_TYPE> RGB_PIXEL;
typedef hls::Scalar<3 * SAMPLES_PER_CLOCK, PIXEL_TYPE> RGB_MULTI_PIXEL;
typedef hls::Scalar<3, PIXEL_TYPE> YUV_PIXEL;
typedef hls::Scalar<3 * SAMPLES_PER_CLOCK, PIXEL_TYPE> YUV_MULTI_PIXEL;
typedef hls::Scalar<1, PIXEL_TYPE> Y_PIXEL;
typedef hls::Scalar<SAMPLES_PER_CLOCK, PIXEL_TYPE> Y_MULTI_PIXEL;
typedef hls::Scalar<1, PIXEL_TYPE> C_PIXEL;
typedef hls::Scalar<SAMPLES_PER_CLOCK, PIXEL_TYPE> C_MULTI_PIXEL;

typedef ap_uint<SAMPLES_PER_CLOCK * MAX_DATA_WIDTH> Y_MEM_PIXEL_TYPE;

typedef hls::stream<ap_axiu<BITS_PER_CLOCK, 1, 1, 1> > V_CSC_AXI_STREAM_IN;
typedef hls::stream<ap_axiu<BITS_PER_CLOCK, 1, 1, 1> > V_CSC_AXI_STREAM_OUT;
typedef hls::stream<RGB_MULTI_PIXEL> V_CSC_STREAM_MULTIPIX;

//HW Registers
typedef struct
{
	U8 InVideoFormat;
	U8 OutVideoFormat;
	U16 width;
	U16 height;
#if (ENABLE_WINDOW==1)
  U16 ColStart;
  U16 ColEnd;
  U16 RowStart;
  U16 RowEnd;
#endif
	I16 K11;
	I16 K12;
	I16 K13;
	I16 K21;
	I16 K22;
	I16 K23;
	I16 K31;
	I16 K32;
	I16 K33;
	OFFSET_TYPE ROffset;
	OFFSET_TYPE GOffset;
	OFFSET_TYPE BOffset;
	PIXEL_TYPE ClampMin;
	PIXEL_TYPE ClipMax;
#if (ENABLE_WINDOW==1)
  I16 K11_2;
  I16 K12_2;
  I16 K13_2;
  I16 K21_2;
  I16 K22_2;
  I16 K23_2;
  I16 K31_2;
  I16 K32_2;
  I16 K33_2;
  OFFSET_TYPE ROffset_2;
  OFFSET_TYPE GOffset_2;
  OFFSET_TYPE BOffset_2;
  PIXEL_TYPE ClampMin_2;
  PIXEL_TYPE ClipMax_2;
#endif
} V_CSC_HW_STRUCT_REG;

// top level function for HW synthesis
extern void v_csc(V_CSC_AXI_STREAM_IN &s_axis_video, U8 &InVideoFormat, U8 &OutVideoFormat,
		U16 &width, U16 &height,
#if (ENABLE_WINDOW==1)
		          U16 &ColStart,
		          U16 &ColEnd,
		          U16 &RowStart,
		          U16 &RowEnd,
#endif
		I16 &K11, I16 &K12, I16 &K13, I16 &K21, I16 &K22, I16 &K23, I16 &K31, I16 &K32, I16 &K33,
		OFFSET_TYPE &ROffset, OFFSET_TYPE &GOffset, OFFSET_TYPE &BOffset, PIXEL_TYPE &ClampMin,
		PIXEL_TYPE &ClipMax,
#if (ENABLE_WINDOW==1)
				  I16 &K11_2,
				  I16 &K12_2,
				  I16 &K13_2,
				  I16 &K21_2,
				  I16 &K22_2,
				  I16 &K23_2,
				  I16 &K31_2,
				  I16 &K32_2,
				  I16 &K33_2,
				  OFFSET_TYPE &ROffset_2,
				  OFFSET_TYPE &GOffset_2,
				  OFFSET_TYPE &BOffset_2,
				  PIXEL_TYPE &ClampMin_2,
				  PIXEL_TYPE &ClipMax_2,
#endif
		V_CSC_AXI_STREAM_OUT &m_axis_video);

#endif

