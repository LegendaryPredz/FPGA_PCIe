#ifndef _V_LETTERBOX_TOP_H_
#define _V_LETTERBOX_TOP_H_

#include "hls_video.h"
#include "ap_int.h"

typedef unsigned char      U8;
typedef unsigned short     U16;
typedef unsigned int       U32;

typedef signed char        I8;
typedef signed short       I16;
typedef signed int         I32;

//define video formats
#define format_RGB                (0)
#define format_YCbCr444           (1)
#define format_YCbCr422           (2)

//define video components
#define Y_R_CH                    (0)
#define Cb_G_CH                   (1)
#define Cr_B_CH                   (2)

//File I/O
#define SRC_IMAGE            "PhGuywalking_128x128"
#define OUTPUT_IMAGE_GOLDEN  "PhGuywalking_128x128_CModelOut"
#define OUTPUT_IMAGE_HLS     "PhGuywalking_128x128_hlsOut"

typedef ap_uint<MAX_DATA_WIDTH> PIXEL_TYPE;
typedef hls::Scalar<NUM_VIDEO_COMPONENTS, PIXEL_TYPE> YUV_PIXEL;
typedef hls::Scalar<NUM_VIDEO_COMPONENTS*SAMPLES_PER_CLOCK, PIXEL_TYPE>  YUV_MULTI_PIXEL;

typedef hls::stream<ap_axiu<BITS_PER_CLOCK,1,1,1> >                       V_LETTERBOX_AXI_STREAM_IN;
typedef hls::stream<ap_axiu<BITS_PER_CLOCK,1,1,1> >                       V_LETTERBOX_AXI_STREAM_OUT;
typedef hls::stream<YUV_MULTI_PIXEL>                                      V_LETTERBOX_STREAM_MULTIPIX;

//HW Registers
typedef struct
{
  U16 width;
  U16 height;
  U16 video_format;
  U16 col_start;
  U16 col_end;
  U16 row_start;
  U16 row_end;
  U16 Y_R_value;
  U16 Cb_G_value;
  U16 Cr_B_value;
}V_LETTERBOX_HW_STRUCT_REG;

// top level function for HW synthesis
extern void v_letterbox(V_LETTERBOX_AXI_STREAM_IN& s_axis_video,
                        U16 &height,
                        U16 &width,
                        U16 &video_format,
                        U16 &col_start,
                        U16 &col_end,
                        U16 &row_start,
                        U16 &row_end,
                        U16 &Y_R_value,
                        U16 &Cb_G_value,
                        U16 &Cr_B_value,
                        V_LETTERBOX_AXI_STREAM_OUT& m_axis_video
);

#endif
