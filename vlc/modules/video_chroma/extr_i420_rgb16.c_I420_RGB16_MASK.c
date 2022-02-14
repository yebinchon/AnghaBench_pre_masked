
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
typedef int uint16_t ;
struct TYPE_17__ {TYPE_1__* p; int * V_PIXELS; int * U_PIXELS; int * Y_PIXELS; } ;
typedef TYPE_6__ picture_t ;
struct TYPE_15__ {int i_x_offset; int i_visible_width; int i_y_offset; int i_visible_height; } ;
struct TYPE_16__ {TYPE_4__ video; } ;
struct TYPE_13__ {int i_y_offset; int i_visible_height; scalar_t__ i_visible_width; scalar_t__ i_x_offset; } ;
struct TYPE_14__ {TYPE_2__ video; } ;
struct TYPE_18__ {TYPE_5__ fmt_in; TYPE_3__ fmt_out; TYPE_8__* p_sys; } ;
typedef TYPE_7__ filter_t ;
struct TYPE_19__ {int* p_offset; scalar_t__ p_buffer; int i_bytespp; int i_buffer_size; int * p_rgb16; } ;
typedef TYPE_8__ filter_sys_t ;
struct TYPE_12__ {int i_pitch; int i_visible_pitch; scalar_t__ p_pixels; } ;


 scalar_t__ FUNC_0 (scalar_t__*,int *,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;
 int FUNC_4 (int,int,scalar_t__,int,int*,unsigned int*,int*) ;

void FUNC_5( filter_t *VAR_1, picture_t *VAR_2, picture_t *VAR_3 )
{
    filter_sys_t *VAR_4 = VAR_1->p_sys;


    uint16_t *VAR_5 = (uint16_t*)VAR_3->p->p_pixels;
    uint8_t *VAR_6 = VAR_2->Y_PIXELS;
    uint8_t *VAR_7 = VAR_2->U_PIXELS;
    uint8_t *VAR_8 = VAR_2->V_PIXELS;

    bool VAR_9;
    unsigned int VAR_10;
    unsigned int VAR_11, VAR_12;

    int VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16 = (VAR_1->fmt_in.video.i_x_offset + VAR_1->fmt_in.video.i_visible_width) / 2;
    uint16_t * VAR_17;
    int VAR_18, VAR_19;
    int VAR_20, VAR_21, VAR_22;
    uint16_t * VAR_23 = VAR_4->p_rgb16;
    uint16_t * VAR_24;


    uint16_t * VAR_25;
    uint16_t * VAR_26;


    int * VAR_27 = VAR_4->p_offset;
    int * VAR_28;

    const int VAR_29 = VAR_2->p[0].i_pitch
                                 - VAR_2->p[0].i_visible_pitch
                                 - VAR_1->fmt_in.video.i_x_offset;
    const int VAR_30 = VAR_2->p[1].i_pitch
                                 - VAR_2->p[1].i_visible_pitch
                                 - ( VAR_1->fmt_in.video.i_x_offset / 2 );

    VAR_13 = VAR_3->p->i_pitch - VAR_3->p->i_visible_pitch;
    VAR_14 = (-(VAR_1->fmt_in.video.i_x_offset + VAR_1->fmt_in.video.i_visible_width)) & 7;




    FUNC_4( (VAR_1->fmt_in.video.i_x_offset + VAR_1->fmt_in.video.i_visible_width),
               (VAR_1->fmt_in.video.i_y_offset + VAR_1->fmt_in.video.i_visible_height),
               (VAR_1->fmt_out.video.i_x_offset + VAR_1->fmt_out.video.i_visible_width),
               (VAR_1->fmt_out.video.i_y_offset + VAR_1->fmt_out.video.i_visible_height),
               &VAR_9, &VAR_10, VAR_27 );

    if(VAR_9 &&
       FUNC_0(&VAR_4->p_buffer, &VAR_4->i_buffer_size,
                      VAR_1->fmt_in.video.i_x_offset +
                      VAR_1->fmt_in.video.i_visible_width,
                      VAR_4->i_bytespp))
        return;
    else VAR_25 = (uint16_t*)VAR_4->p_buffer;




    VAR_15 = ( VAR_10 == 1 ) ?
                    (VAR_1->fmt_out.video.i_y_offset + VAR_1->fmt_out.video.i_visible_height) :
                    (VAR_1->fmt_in.video.i_y_offset + VAR_1->fmt_in.video.i_visible_height);
    for( VAR_12 = 0; VAR_12 < (VAR_1->fmt_in.video.i_y_offset + VAR_1->fmt_in.video.i_visible_height); VAR_12++ )
    {
        VAR_17 = VAR_5;
        VAR_26 = VAR_9 ? VAR_25 : VAR_5;

        for ( VAR_11 = (VAR_1->fmt_in.video.i_x_offset + VAR_1->fmt_in.video.i_visible_width) / 8; VAR_11--; )
        {
            FUNC_1(2); FUNC_2(2);
            FUNC_1(2); FUNC_2(2);
            FUNC_1(2); FUNC_2(2);
            FUNC_1(2); FUNC_2(2);
        }



        if( VAR_14 )
        {
            VAR_6 -= VAR_14;
            VAR_7 -= VAR_14 >> 1;
            VAR_8 -= VAR_14 >> 1;
            VAR_26 -= VAR_14;

            FUNC_1(2); FUNC_2(2);
            FUNC_1(2); FUNC_2(2);
            FUNC_1(2); FUNC_2(2);
            FUNC_1(2); FUNC_2(2);
        }
        VAR_0;
        FUNC_3( 420, 2 );

        VAR_6 += VAR_29;
        if( VAR_12 % 2 )
        {
            VAR_7 += VAR_30;
            VAR_8 += VAR_30;
        }
    }
}
