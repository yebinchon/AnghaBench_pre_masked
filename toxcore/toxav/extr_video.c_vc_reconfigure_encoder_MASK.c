
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ rc_target_bitrate; scalar_t__ g_w; scalar_t__ g_h; } ;
typedef TYPE_2__ vpx_codec_enc_cfg_t ;
struct TYPE_15__ {TYPE_2__* enc; } ;
struct TYPE_17__ {TYPE_1__ config; } ;
typedef TYPE_3__ vpx_codec_ctx_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int new_c ;
struct TYPE_18__ {TYPE_3__* encoder; } ;
typedef TYPE_4__ VCSession ;


 int FUNC_0 (char*,TYPE_4__*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,int ,TYPE_2__*,int ) ;
 int FUNC_7 (int) ;

int FUNC_8(VCSession *VAR_3, uint32_t VAR_4, uint16_t VAR_5, uint16_t VAR_6)
{
    if (!VAR_3)
        return -1;

    vpx_codec_enc_cfg_t VAR_7 = *VAR_3->encoder->config.enc;
    int VAR_8;

    if (VAR_7.rc_target_bitrate == VAR_4 && VAR_7.g_w == VAR_5 && VAR_7.g_h == VAR_6)
        return 0;

    if (VAR_7.g_w == VAR_5 && VAR_7.g_h == VAR_6) {

        VAR_7.rc_target_bitrate = VAR_4;

        VAR_8 = FUNC_5(VAR_3->encoder, &VAR_7);

        if (VAR_8 != VAR_2) {
            FUNC_1("Failed to set encoder control setting: %s", FUNC_7(VAR_8));
            return -1;
        }
    } else {




        FUNC_0("Have to reinitialize vpx encoder on session %p", VAR_3);

        VAR_7.rc_target_bitrate = VAR_4;
        VAR_7.g_w = VAR_5;
        VAR_7.g_h = VAR_6;

        vpx_codec_ctx_t VAR_9;

        VAR_8 = FUNC_6(&VAR_9, VAR_0, &VAR_7, 0);

        if (VAR_8 != VAR_2) {
            FUNC_1("Failed to initialize encoder: %s", FUNC_7(VAR_8));
            return -1;
        }

        VAR_8 = FUNC_3(&VAR_9, VAR_1, 8);

        if (VAR_8 != VAR_2) {
            FUNC_1("Failed to set encoder control setting: %s", FUNC_7(VAR_8));
            FUNC_4(&VAR_9);
            return -1;
        }

        FUNC_4(VAR_3->encoder);
        FUNC_2(VAR_3->encoder, &VAR_9, sizeof(VAR_9));
    }

    return 0;
}
