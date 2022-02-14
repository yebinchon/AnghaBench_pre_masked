
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int i_pps_count; int i_sps_count; int i_vps_count; } ;
struct TYPE_15__ {int i_pps_count; int i_sps_count; } ;
struct hxxx_helper {TYPE_4__ hevc; TYPE_3__ h264; int * (* pf_process_block ) (struct hxxx_helper*,int *,int*) ;} ;
struct TYPE_14__ {int i_codec; } ;
struct TYPE_18__ {TYPE_2__ fmt_in; TYPE_7__* p_sys; } ;
typedef TYPE_6__ decoder_t ;
struct TYPE_17__ {scalar_t__ b_started; } ;
struct TYPE_13__ {struct hxxx_helper hh; } ;
struct TYPE_19__ {int i_decode_flags; TYPE_5__ api; scalar_t__ b_adaptive; TYPE_1__ video; } ;
typedef TYPE_7__ decoder_sys_t ;
typedef int block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,int*) ;
 int FUNC_1 (TYPE_6__*,int*) ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_6__*,int **) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 int * FUNC_4 (struct hxxx_helper*,int *,int*) ;

__attribute__((used)) static int FUNC_5(decoder_t *VAR_4, block_t **VAR_5)
{
    decoder_sys_t *VAR_6 = VAR_4->p_sys;
    struct hxxx_helper *VAR_7 = &VAR_6->video.hh;
    bool VAR_8 = 0;
    bool *VAR_9 = VAR_6->b_adaptive ? ((void*)0) : &VAR_8;

    *VAR_5 = VAR_7->pf_process_block(VAR_7, *VAR_5, VAR_9);
    if (!*VAR_5)
        return 0;
    if (VAR_8)
    {
        bool VAR_10;
        int VAR_11;
        switch (VAR_4->fmt_in.i_codec)
        {
        case 129:
            if (VAR_7->h264.i_sps_count > 0 || VAR_7->h264.i_pps_count > 0)
                VAR_11 = FUNC_0(VAR_4, &VAR_10);
            else
                VAR_11 = VAR_2;
            break;
        case 128:
            if (VAR_7->hevc.i_vps_count > 0 || VAR_7->hevc.i_sps_count > 0 ||
                VAR_7->hevc.i_pps_count > 0 )
                VAR_11 = FUNC_1(VAR_4, &VAR_10);
            else
                VAR_11 = VAR_2;
            break;
        }
        if (VAR_11 != VAR_3)
            return VAR_11;
        if (VAR_10 || !VAR_6->api.b_started)
        {
            if (VAR_6->api.b_started)
                FUNC_3(VAR_4, "SPS/PPS changed during playback and "
                        "video size are different. Restart it !");
            VAR_6->i_decode_flags |= VAR_1;
        } else
        {
            FUNC_3(VAR_4, "SPS/PPS changed during playback. Drain it");
            VAR_6->i_decode_flags |= VAR_0;
        }
    }

    return FUNC_2(VAR_4, VAR_5);
}
