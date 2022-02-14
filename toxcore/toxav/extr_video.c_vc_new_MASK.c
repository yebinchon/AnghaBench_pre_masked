
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int rc_target_bitrate; int g_w; int g_h; int kf_max_dist; int kf_mode; scalar_t__ kf_min_dist; scalar_t__ g_lag_in_frames; int g_pass; } ;
typedef TYPE_2__ vpx_codec_enc_cfg_t ;
typedef int uint32_t ;
typedef int toxav_video_receive_frame_cb ;
struct TYPE_9__ {void* second; int * first; } ;
struct TYPE_11__ {int lcfd; int vbuf_raw; int queue_mutex; int decoder; int * av; int friend_number; TYPE_1__ vcb; int linfts; int encoder; } ;
typedef TYPE_3__ VCSession ;
typedef int ToxAV ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ,int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,TYPE_2__*,int ) ;
 int FUNC_13 (int ,int ,TYPE_2__*,int ) ;
 int FUNC_14 (int) ;

VCSession *FUNC_15(ToxAV *VAR_7, uint32_t VAR_8, toxav_video_receive_frame_cb *VAR_9, void *VAR_10)
{
    VCSession *VAR_11 = FUNC_2(sizeof(VCSession), 1);

    if (!VAR_11) {
        FUNC_1("Allocation failed! Application might misbehave!");
        return ((void*)0);
    }

    if (FUNC_3(VAR_11->queue_mutex) != 0) {
        FUNC_1("Failed to create recursive mutex!");
        FUNC_5(VAR_11);
        return ((void*)0);
    }

    if (!(VAR_11->vbuf_raw = FUNC_8(VAR_2)))
        goto BASE_CLEANUP;

    int VAR_12 = FUNC_10(VAR_11->decoder, VAR_0, ((void*)0), 0);

    if (VAR_12 != VAR_4) {
        FUNC_0("Init video_decoder failed: %s", FUNC_14(VAR_12));
        goto BASE_CLEANUP;
    }



    vpx_codec_enc_cfg_t VAR_13;
    VAR_12 = FUNC_12(VAR_1, &VAR_13, 0);

    if (VAR_12 != VAR_4) {
        FUNC_0("Failed to get config: %s", FUNC_14(VAR_12));
        goto BASE_CLEANUP_1;
    }

    VAR_13.rc_target_bitrate = 500000;
    VAR_13.g_w = 800;
    VAR_13.g_h = 600;
    VAR_13.g_pass = VAR_6;



    VAR_13.g_lag_in_frames = 0;
    VAR_13.kf_min_dist = 0;
    VAR_13.kf_max_dist = 48;
    VAR_13.kf_mode = VAR_5;

    VAR_12 = FUNC_13(VAR_11->encoder, VAR_1, &VAR_13, 0);

    if (VAR_12 != VAR_4) {
        FUNC_0("Failed to initialize encoder: %s", FUNC_14(VAR_12));
        goto BASE_CLEANUP_1;
    }

    VAR_12 = FUNC_9(VAR_11->encoder, VAR_3, 8);

    if (VAR_12 != VAR_4) {
        FUNC_0("Failed to set encoder control setting: %s", FUNC_14(VAR_12));
        FUNC_11(VAR_11->encoder);
        goto BASE_CLEANUP_1;
    }

    VAR_11->linfts = FUNC_4();
    VAR_11->lcfd = 60;
    VAR_11->vcb.first = VAR_9;
    VAR_11->vcb.second = VAR_10;
    VAR_11->friend_number = VAR_8;
    VAR_11->av = VAR_7;

    return VAR_11;

BASE_CLEANUP_1:
    FUNC_11(VAR_11->decoder);
BASE_CLEANUP:
    FUNC_6(VAR_11->queue_mutex);
    FUNC_7(VAR_11->vbuf_raw);
    FUNC_5(VAR_11);
    return ((void*)0);
}
