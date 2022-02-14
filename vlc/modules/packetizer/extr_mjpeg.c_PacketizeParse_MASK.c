
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_12__ {scalar_t__ i_frame_rate_base; scalar_t__ i_frame_rate; } ;
struct TYPE_13__ {TYPE_3__ video; } ;
struct TYPE_10__ {scalar_t__ i_height; scalar_t__ i_width; scalar_t__ i_visible_width; scalar_t__ i_visible_height; } ;
struct TYPE_11__ {TYPE_1__ video; } ;
struct TYPE_14__ {TYPE_4__ fmt_in; TYPE_2__ fmt_out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_15__ {int i_next_block_flags; int date; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_16__ {int* p_buffer; int i_buffer; scalar_t__ i_dts; scalar_t__ i_pts; int i_flags; scalar_t__ i_length; } ;
typedef TYPE_7__ block_t ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static block_t *FUNC_4( void *VAR_2, bool *VAR_3, block_t *VAR_4 )
{
    decoder_t *VAR_5 = VAR_2;
    decoder_sys_t *VAR_6 = VAR_5->p_sys;

    const uint8_t *VAR_7 = &VAR_4->p_buffer[2];
    size_t VAR_8 = VAR_4->i_buffer - 2;

    while( VAR_8 > 4 && VAR_7[0] == 0xFF )
    {
        size_t VAR_9 = 2 + FUNC_0( &VAR_7[2] );
        if( VAR_9 > VAR_8 )
            break;
        if( VAR_7[1] == 0xC0 && VAR_8 > 9 )
        {
            uint16_t VAR_10 = FUNC_0( &VAR_7[5] );
            uint16_t VAR_11 = FUNC_0( &VAR_7[7] );
            if( VAR_10 && VAR_11 &&
                (VAR_5->fmt_out.video.i_height != VAR_10 ||
                 VAR_5->fmt_out.video.i_width != VAR_11) )
            {
                VAR_5->fmt_out.video.i_width =
                VAR_5->fmt_out.video.i_visible_width = VAR_11;
                VAR_5->fmt_out.video.i_height =
                VAR_5->fmt_out.video.i_visible_height = VAR_10;
            }
            break;
        }
        VAR_8 -= VAR_9;
        VAR_7 += VAR_9;
    }

    if( VAR_4->i_dts == VAR_1 )
        VAR_4->i_dts = VAR_4->i_pts;
    else if( VAR_4->i_pts == VAR_1 )
        VAR_4->i_pts = VAR_4->i_dts;

    vlc_tick_t VAR_12 = FUNC_1( &VAR_6->date );
    if( VAR_4->i_dts != VAR_1 )
    {
        FUNC_3( &VAR_6->date, VAR_4->i_dts );
    }
    else if( VAR_5->fmt_in.video.i_frame_rate &&
             VAR_5->fmt_in.video.i_frame_rate_base )
    {
        FUNC_2( &VAR_6->date, 1 );
        VAR_4->i_dts = VAR_4->i_pts = FUNC_1( &VAR_6->date );
    }

    if( VAR_12 != VAR_1 && VAR_4->i_dts != VAR_1 )
        VAR_4->i_length = VAR_4->i_dts - VAR_12;

    *VAR_3 = 1;

    VAR_4->i_flags = VAR_6->i_next_block_flags | VAR_0;
    VAR_6->i_next_block_flags = 0;

    return VAR_4;
}
