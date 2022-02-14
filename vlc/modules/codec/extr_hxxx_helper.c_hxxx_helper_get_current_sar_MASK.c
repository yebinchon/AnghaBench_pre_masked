
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hxxx_helper_nal {scalar_t__ hevc_sps; TYPE_2__* h264_sps; } ;
struct TYPE_6__ {size_t i_current_sps; struct hxxx_helper_nal* sps_list; } ;
struct hxxx_helper {scalar_t__ i_codec; TYPE_3__ hevc; } ;
struct TYPE_4__ {int i_sar_num; int i_sar_den; } ;
struct TYPE_5__ {TYPE_1__ vui; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hxxx_helper_nal* FUNC_0 (struct hxxx_helper const*) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned int*,unsigned int*) ;

int
FUNC_2(const struct hxxx_helper *VAR_4, int *VAR_5, int *VAR_6)
{
    if(VAR_4->i_codec == VAR_0)
    {
        const struct hxxx_helper_nal *VAR_7 = FUNC_0(VAR_4);
        if (VAR_7)
        {
            *VAR_5 = VAR_7->h264_sps->vui.i_sar_num;
            *VAR_6 = VAR_7->h264_sps->vui.i_sar_den;
            return VAR_3;
        }
    }
    else if(VAR_4->i_codec == VAR_1)
    {
        const struct hxxx_helper_nal *VAR_8 = &VAR_4->hevc.sps_list[VAR_4->hevc.i_current_sps];
        unsigned VAR_9, VAR_10;
        if(VAR_8 && VAR_8->hevc_sps && FUNC_1(VAR_8->hevc_sps, &VAR_9, &VAR_10))
        {
            *VAR_5 = VAR_9;
            *VAR_6 = VAR_10;
            return VAR_3;
        }
    }
    return VAR_2;
}
