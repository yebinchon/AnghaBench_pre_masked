
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


typedef void* uint8_t ;
typedef int hevc_video_parameter_set_t ;
typedef int hevc_sequence_parameter_set_t ;
typedef int hevc_picture_parameter_set_t ;
struct TYPE_11__ {unsigned int i_frame_rate; unsigned int i_frame_rate_base; unsigned int i_width; unsigned int i_height; unsigned int i_visible_width; unsigned int i_visible_height; int color_range; int space; int transfer; int primaries; } ;
struct TYPE_13__ {int i_extra; int p_extra; void* i_level; void* i_profile; TYPE_2__ video; } ;
struct TYPE_10__ {scalar_t__ primaries; scalar_t__ i_visible_width; } ;
struct TYPE_12__ {int i_profile; TYPE_1__ video; } ;
struct TYPE_14__ {TYPE_4__ fmt_out; TYPE_3__ fmt_in; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_16__ {unsigned int i_divider_den; int i_divider_num; } ;
struct TYPE_15__ {TYPE_7__ dts; int const* p_active_vps; int const* p_active_sps; int const* p_active_pps; } ;
typedef TYPE_6__ decoder_sys_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_6__*,int const*,int const*,int const*,void***,int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_7__*,int,unsigned int) ;
 int FUNC_2 (int const*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int const*,int const*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_4 (int const*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_5 (int const*,void**,void**) ;

__attribute__((used)) static void FUNC_6(decoder_t *VAR_2,
                         const hevc_picture_parameter_set_t *VAR_3,
                         const hevc_sequence_parameter_set_t *VAR_4,
                         const hevc_video_parameter_set_t *VAR_5)
{
    decoder_sys_t *VAR_6 = VAR_2->p_sys;
    VAR_6->p_active_pps = VAR_3;
    VAR_6->p_active_sps = VAR_4;
    VAR_6->p_active_vps = VAR_5;
    if(VAR_4)
    {
        if(!VAR_2->fmt_out.video.i_frame_rate || !VAR_2->fmt_out.video.i_frame_rate_base)
        {
            unsigned VAR_7, VAR_8;
            if(FUNC_3( VAR_4, VAR_5, &VAR_7, &VAR_8 ))
            {
                VAR_2->fmt_out.video.i_frame_rate = VAR_7;
                VAR_2->fmt_out.video.i_frame_rate_base = VAR_8;
                if(VAR_6->dts.i_divider_den != VAR_8 &&
                   VAR_6->dts.i_divider_num != 2 * VAR_7 &&
                   VAR_7 <= VAR_1 / 2)
                    FUNC_1(&VAR_6->dts, 2 * VAR_7, VAR_8);
            }
            VAR_2->fmt_out.video.i_frame_rate = VAR_6->dts.i_divider_num >> 1;
            VAR_2->fmt_out.video.i_frame_rate_base = VAR_6->dts.i_divider_den;
        }

        if(VAR_2->fmt_in.video.primaries == VAR_0)
        {
            (void) FUNC_2( VAR_4,
                                         &VAR_2->fmt_out.video.primaries,
                                         &VAR_2->fmt_out.video.transfer,
                                         &VAR_2->fmt_out.video.space,
                                         &VAR_2->fmt_out.video.color_range);
        }

        unsigned VAR_9[4];
        if( FUNC_4( VAR_4, &VAR_9[0], &VAR_9[1],
                                          &VAR_9[2], &VAR_9[3] ) )
        {
            VAR_2->fmt_out.video.i_width = VAR_9[0];
            VAR_2->fmt_out.video.i_height = VAR_9[1];
            if(VAR_2->fmt_in.video.i_visible_width == 0)
            {
                VAR_2->fmt_out.video.i_visible_width = VAR_9[2];
                VAR_2->fmt_out.video.i_visible_height = VAR_9[3];
            }
        }

        if(VAR_2->fmt_in.i_profile == -1)
        {
            uint8_t VAR_10, VAR_11;
            if( FUNC_5( VAR_4, &VAR_10, &VAR_11 ) )
            {
                VAR_2->fmt_out.i_profile = VAR_10;
                VAR_2->fmt_out.i_level = VAR_11;
            }
        }

        if(VAR_2->fmt_out.i_extra == 0 && VAR_5 && VAR_3)
            FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5,
                         (uint8_t **)&VAR_2->fmt_out.p_extra, &VAR_2->fmt_out.i_extra);
    }
}
