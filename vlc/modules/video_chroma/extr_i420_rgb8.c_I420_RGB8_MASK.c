
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {TYPE_1__* p; int * V_PIXELS; int * U_PIXELS; int * Y_PIXELS; } ;
typedef TYPE_6__ picture_t ;
struct TYPE_15__ {int i_x_offset; int i_visible_width; int i_y_offset; int i_visible_height; } ;
struct TYPE_16__ {TYPE_4__ video; } ;
struct TYPE_13__ {int i_y_offset; int i_visible_height; scalar_t__ i_visible_width; scalar_t__ i_x_offset; } ;
struct TYPE_14__ {TYPE_2__ video; } ;
struct TYPE_18__ {TYPE_5__ fmt_in; TYPE_3__ fmt_out; TYPE_8__* p_sys; } ;
typedef TYPE_7__ filter_t ;
struct TYPE_19__ {int* p_offset; int * p_base; } ;
typedef TYPE_8__ filter_sys_t ;
struct TYPE_12__ {int i_pitch; int i_visible_pitch; scalar_t__ p_pixels; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,scalar_t__,int,int*,int*,int*) ;

void FUNC_3( filter_t *VAR_0, picture_t *VAR_1, picture_t *VAR_2 )
{
    filter_sys_t *VAR_3 = VAR_0->p_sys;


    uint8_t *VAR_4 = (uint8_t*)VAR_2->p->p_pixels;
    uint8_t *VAR_5 = VAR_1->Y_PIXELS;
    uint8_t *VAR_6 = VAR_1->U_PIXELS;
    uint8_t *VAR_7 = VAR_1->V_PIXELS;

    bool VAR_8;
    int VAR_9;
    unsigned int VAR_10, VAR_11;
    unsigned int VAR_12;
    int VAR_13;
    int VAR_14;
    unsigned int VAR_15 = (VAR_0->fmt_in.video.i_x_offset + VAR_0->fmt_in.video.i_visible_width) / 2;


    uint8_t * VAR_16 = VAR_3->p_base;


    int * VAR_17 = VAR_3->p_offset;
    int * VAR_18;

    const int VAR_19 = VAR_1->p[0].i_pitch
                                 - VAR_1->p[0].i_visible_pitch
                                 - VAR_0->fmt_in.video.i_x_offset;
    const int VAR_20 = VAR_1->p[1].i_pitch
                                 - VAR_1->p[1].i_visible_pitch
                                 - ( VAR_0->fmt_in.video.i_x_offset / 2 );


    static const int VAR_21[4] = { 0x0, 0x8, 0x2, 0xa };
    static const int VAR_22[4] = { 0xc, 0x4, 0xe, 0x6 };
    static const int VAR_23[4] = { 0x3, 0xb, 0x1, 0x9 };
    static const int VAR_24[4] = { 0xf, 0x7, 0xd, 0x5 };

    static const int VAR_25[4] = { 0x0, 0x10, 0x4, 0x14 };
    static const int VAR_26[4] = { 0x18, 0x8, 0x1c, 0xc };
    static const int VAR_27[4] = { 0x6, 0x16, 0x2, 0x12 };
    static const int VAR_28[4] = { 0x1e, 0xe, 0x1a, 0xa };

    FUNC_2( (VAR_0->fmt_in.video.i_x_offset + VAR_0->fmt_in.video.i_visible_width),
               (VAR_0->fmt_in.video.i_y_offset + VAR_0->fmt_in.video.i_visible_height),
               (VAR_0->fmt_out.video.i_x_offset + VAR_0->fmt_out.video.i_visible_width),
               (VAR_0->fmt_out.video.i_y_offset + VAR_0->fmt_out.video.i_visible_height),
               &VAR_8, &VAR_9, VAR_17 );

    VAR_13 = VAR_2->p->i_pitch - VAR_2->p->i_visible_pitch;




    VAR_14 = ( VAR_9 == 1 ) ?
                    (VAR_0->fmt_out.video.i_y_offset + VAR_0->fmt_out.video.i_visible_height) :
                    (VAR_0->fmt_in.video.i_y_offset + VAR_0->fmt_in.video.i_visible_height);
    for( VAR_11 = 0, VAR_12 = 0; VAR_11 < (VAR_0->fmt_in.video.i_y_offset + VAR_0->fmt_in.video.i_visible_height); VAR_11++ )
    {

        FUNC_1( 420 );
        FUNC_0( 420 );
    }

    VAR_5 += VAR_19;
    if( VAR_11 % 2 )
    {
        VAR_6 += VAR_20;
        VAR_7 += VAR_20;
    }
}
