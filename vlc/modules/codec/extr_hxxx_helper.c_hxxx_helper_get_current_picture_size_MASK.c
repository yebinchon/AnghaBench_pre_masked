
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hxxx_helper_nal {scalar_t__ hevc_sps; int h264_sps; } ;
struct TYPE_2__ {size_t i_current_sps; struct hxxx_helper_nal* sps_list; } ;
struct hxxx_helper {scalar_t__ i_codec; TYPE_1__ hevc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 struct hxxx_helper_nal* FUNC_1 (struct hxxx_helper const*) ;
 scalar_t__ FUNC_2 (scalar_t__,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

int
FUNC_3(const struct hxxx_helper *VAR_4,
                                     unsigned *VAR_5, unsigned *VAR_6,
                                     unsigned *VAR_7, unsigned *VAR_8)
{
    if(VAR_4->i_codec == VAR_0)
    {
        const struct hxxx_helper_nal *VAR_9 = FUNC_1(VAR_4);
        if (VAR_9 && FUNC_0(VAR_9->h264_sps, VAR_5, VAR_6, VAR_7, VAR_8))
               return VAR_3;
    }
    else if(VAR_4->i_codec == VAR_1)
    {
        const struct hxxx_helper_nal *VAR_10 = &VAR_4->hevc.sps_list[VAR_4->hevc.i_current_sps];
        if(VAR_10 && VAR_10->hevc_sps && FUNC_2(VAR_10->hevc_sps, VAR_5, VAR_6, VAR_7, VAR_8))
            return VAR_3;
    }
    return VAR_2;
}
