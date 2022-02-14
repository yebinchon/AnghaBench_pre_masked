
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct hxxx_helper_nal {int * hevc_sps; int h264_sps; } ;
struct TYPE_2__ {size_t i_current_sps; struct hxxx_helper_nal* sps_list; } ;
struct hxxx_helper {int i_codec; TYPE_1__ hevc; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *,int *) ;
 struct hxxx_helper_nal* FUNC_1 (struct hxxx_helper const*) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 () ;

int
FUNC_4(const struct hxxx_helper *VAR_2, uint8_t *VAR_3,
                              uint8_t *VAR_4, uint8_t *VAR_5)
{
    switch (VAR_2->i_codec)
    {
        case 129:
        {
            const struct hxxx_helper_nal *VAR_6 = FUNC_1(VAR_2);
            if (VAR_6 == ((void*)0))
                return VAR_0;
            return FUNC_0(VAR_6->h264_sps, VAR_3, VAR_4,
                                        VAR_5)
                == 1 ? VAR_1 : VAR_0;
        }
        case 128:
        {
            const struct hxxx_helper_nal *VAR_7 = &VAR_2->hevc.sps_list[VAR_2->hevc.i_current_sps];
            if (VAR_7 == ((void*)0) || VAR_7->hevc_sps == ((void*)0))
                return VAR_0;

            return FUNC_2(VAR_7->hevc_sps, VAR_3, VAR_4,
                                        VAR_5)
                == 1 ? VAR_1 : VAR_0;
        }
        default:
            FUNC_3();
    }
}
