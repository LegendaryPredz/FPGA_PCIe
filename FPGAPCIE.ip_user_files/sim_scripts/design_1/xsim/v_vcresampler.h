#ifndef _V_VCRESAMPLER_H_
#define _V_VCRESAMPLER_H_

#include "hls_video.h"
#include "ap_int.h"

typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;

typedef signed char I8;
typedef signed short I16;
typedef signed int I32;

//define video formats
#define format_YCbCr422         (2)
#define format_YCbCr420         (3)

//define video components
#define Y_CH                    (0)
#define CbCr_CH                 (1)

#define MIN_PIXELS (64)

//define resampling methods
#define DROP_REP                (0)
#define FIX_COEF                (1)
#define FIR_FILT                (2)

#define CLAMP(a,lo,hi)    ((a)<(lo)?(lo) :((a)>(hi) ? (hi) : (a)))
#define MIN_VAL           (0)
#define MAX_VAL           ((1<<MAX_DATA_WIDTH)-1)

//File I/O
//#define SRC_IMAGE            "ramp_32x32_420"
//#define OUTPUT_IMAGE_GOLDEN  "ramp_32x32_422_cmdl"
//#define OUTPUT_IMAGE_HLS     "ramp_32x32_422_hls"

typedef ap_uint<MAX_DATA_WIDTH> PIXEL_TYPE;
typedef hls::Scalar<NUM_VIDEO_COMPONENTS, PIXEL_TYPE> YUV_PIXEL;
typedef hls::Scalar<NUM_VIDEO_COMPONENTS * SAMPLES_PER_CLOCK, PIXEL_TYPE> YUV_MULTI_PIXEL;
typedef hls::Scalar<1, PIXEL_TYPE> Y_PIXEL;
typedef hls::Scalar<SAMPLES_PER_CLOCK, PIXEL_TYPE> Y_MULTI_PIXEL;
typedef hls::Scalar<1, PIXEL_TYPE> C_PIXEL;
typedef hls::Scalar<((SAMPLES_PER_CLOCK + 1) / 2), PIXEL_TYPE> Cr_MULTI_PIXEL;

typedef ap_uint<SAMPLES_PER_CLOCK * MAX_DATA_WIDTH> Y_MEM_PIXEL_TYPE;

typedef hls::stream<ap_axiu<BITS_PER_CLOCK, 1, 1, 1> > V_VCRESAMPLER_AXI_STREAM_IN;
typedef hls::stream<ap_axiu<BITS_PER_CLOCK, 1, 1, 1> > V_VCRESAMPLER_AXI_STREAM_OUT;
typedef hls::stream<YUV_MULTI_PIXEL> V_VCRESAMPLER_STREAM_MULTIPIX;

//HW Registers
typedef struct
{
	U16 width;
	U16 height;
	U8 input_video_format;
	U8 output_video_format;
	I16 coefs[2][NUM_V_TAPS];
} V_VCRESAMPLER_HW_STRUCT_REG;

// top level function for HW synthesis
extern void v_vcresampler(V_VCRESAMPLER_AXI_STREAM_IN &s_axis_video,
// V_VCRESAMPLER_HW_STRUCT_REG HwReg,
		U16 width, U16 height, U8 input_video_format, U8 output_video_format,
#if (CONVERT_TYPE == 2)
		                  I16 coefs[2][NUM_V_TAPS],
#endif
		V_VCRESAMPLER_AXI_STREAM_OUT &m_axis_video);
#endif
