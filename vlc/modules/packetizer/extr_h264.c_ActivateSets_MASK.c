
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_22__ {scalar_t__ i_sar_num; scalar_t__ i_sar_den; int i_time_scale; scalar_t__ b_valid; int i_num_units_in_tick; } ;
struct TYPE_27__ {TYPE_3__ vui; int i_level; int i_profile; } ;
typedef TYPE_8__ h264_sequence_parameter_set_t ;
typedef int h264_picture_parameter_set_t ;
struct TYPE_23__ {scalar_t__ i_sar_num; scalar_t__ i_sar_den; int i_frame_rate; int color_range; int space; int transfer; int primaries; int i_frame_rate_base; int i_visible_height; int i_visible_width; int i_height; int i_width; } ;
struct TYPE_26__ {scalar_t__ i_extra; int * p_extra; TYPE_4__ video; int i_level; int i_profile; } ;
struct TYPE_20__ {scalar_t__ primaries; } ;
struct TYPE_21__ {TYPE_1__ video; } ;
struct TYPE_28__ {TYPE_7__ fmt_out; TYPE_2__ fmt_in; TYPE_10__* p_sys; } ;
typedef TYPE_9__ decoder_t ;
struct TYPE_19__ {int i_divider_num; int i_divider_den; } ;
struct TYPE_17__ {TYPE_6__* pps; TYPE_5__* sps; TYPE_14__ dts; TYPE_8__ const* p_active_sps; int const* p_active_pps; } ;
typedef TYPE_10__ decoder_sys_t ;
struct TYPE_18__ {size_t i_buffer; int p_buffer; } ;
typedef TYPE_11__ block_t ;
struct TYPE_25__ {TYPE_11__* p_block; int const* p_pps; } ;
struct TYPE_24__ {TYPE_11__* p_block; TYPE_8__ const* p_sps; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_14__*,int,int ) ;
 int FUNC_1 (TYPE_8__ const*,int *,int *,int *,int *) ;
 int FUNC_2 (TYPE_8__ const*,int *,int *,int *,int *) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (int *,int ,size_t) ;

__attribute__((used)) static void FUNC_5( decoder_t *VAR_3, const h264_sequence_parameter_set_t *VAR_4,
                                            const h264_picture_parameter_set_t *VAR_5 )
{
    decoder_sys_t *VAR_6 = VAR_3->p_sys;

    VAR_6->p_active_pps = VAR_5;
    VAR_6->p_active_sps = VAR_4;

    if( VAR_4 )
    {
        VAR_3->fmt_out.i_profile = VAR_4->i_profile;
        VAR_3->fmt_out.i_level = VAR_4->i_level;

        (void) FUNC_2( VAR_4, &VAR_3->fmt_out.video.i_width,
                                      &VAR_3->fmt_out.video.i_height,
                                      &VAR_3->fmt_out.video.i_visible_width,
                                      &VAR_3->fmt_out.video.i_visible_height );

        if( VAR_4->vui.i_sar_num != 0 && VAR_4->vui.i_sar_den != 0 )
        {
            VAR_3->fmt_out.video.i_sar_num = VAR_4->vui.i_sar_num;
            VAR_3->fmt_out.video.i_sar_den = VAR_4->vui.i_sar_den;
        }

        if( !VAR_3->fmt_out.video.i_frame_rate ||
            !VAR_3->fmt_out.video.i_frame_rate_base )
        {


            if(VAR_4->vui.b_valid &&
               VAR_4->vui.i_num_units_in_tick > 0 &&
               VAR_4->vui.i_time_scale > 1 )
            {
                FUNC_0( &VAR_6->dts, VAR_4->vui.i_time_scale,
                                          VAR_4->vui.i_num_units_in_tick );
            }

            VAR_3->fmt_out.video.i_frame_rate = VAR_6->dts.i_divider_num >> 1;
            VAR_3->fmt_out.video.i_frame_rate_base = VAR_6->dts.i_divider_den;
        }

        if( VAR_3->fmt_in.video.primaries == VAR_0 &&
            VAR_4->vui.b_valid )
        {
            FUNC_1( VAR_4, &VAR_3->fmt_out.video.primaries,
                                  &VAR_3->fmt_out.video.transfer,
                                  &VAR_3->fmt_out.video.space,
                                  &VAR_3->fmt_out.video.color_range );
        }

        if( VAR_3->fmt_out.i_extra == 0 && VAR_5 )
        {
            const block_t *VAR_7 = ((void*)0);
            const block_t *VAR_8 = ((void*)0);
            for( size_t VAR_9=0; VAR_9<=VAR_2 && !VAR_7; VAR_9++ )
                if( VAR_4 == VAR_6->sps[VAR_9].p_sps )
                    VAR_7 = VAR_6->sps[VAR_9].p_block;

            for( size_t VAR_10=0; VAR_10<=VAR_1 && !VAR_8; VAR_10++ )
                if( VAR_5 == VAR_6->pps[VAR_10].p_pps )
                    VAR_8 = VAR_6->pps[VAR_10].p_block;

            if( VAR_7 && VAR_8 )
            {
                size_t VAR_11 = VAR_8->i_buffer + VAR_7->i_buffer;
                VAR_3->fmt_out.p_extra = FUNC_3( VAR_11 );
                if( VAR_3->fmt_out.p_extra )
                {
                    uint8_t*VAR_12 = VAR_3->fmt_out.p_extra;
                    VAR_3->fmt_out.i_extra = VAR_11;
                    FUNC_4( &VAR_12[0], VAR_7->p_buffer, VAR_7->i_buffer );
                    FUNC_4( &VAR_12[VAR_7->i_buffer], VAR_8->p_buffer,
                            VAR_8->i_buffer );
                }
            }
        }
    }
}
