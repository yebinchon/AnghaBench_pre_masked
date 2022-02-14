
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hxxx_helper_nal {int hevc_pps; int hevc_sps; int hevc_vps; int h264_pps; int h264_sps; } ;
struct TYPE_2__ {int pps_list; int sps_list; int vps_list; } ;
struct hxxx_helper {int i_codec; TYPE_1__ hevc; TYPE_1__ h264; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hxxx_helper*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 () ;

void
FUNC_9(struct hxxx_helper *VAR_5)
{
    struct hxxx_helper_nal *VAR_6;
    switch (VAR_5->i_codec)
    {
        case 129:
            FUNC_0(VAR_5->h264.sps_list, VAR_1,
                         FUNC_2(VAR_6->h264_sps));
            FUNC_0(VAR_5->h264.pps_list, VAR_0,
                         FUNC_1(VAR_6->h264_pps));
            FUNC_7(&VAR_5->h264, 0, sizeof(VAR_5->h264));
            break;
        case 128:
            FUNC_0(VAR_5->hevc.vps_list, VAR_4,
                         FUNC_6(VAR_6->hevc_vps));
            FUNC_0(VAR_5->hevc.sps_list, VAR_3,
                         FUNC_5(VAR_6->hevc_sps));
            FUNC_0(VAR_5->hevc.pps_list, VAR_2,
                         FUNC_4(VAR_6->hevc_pps));
            FUNC_3(VAR_5);
            FUNC_7(&VAR_5->hevc, 0, sizeof(VAR_5->hevc));
            break;
        default:
            FUNC_8();
    }
}
