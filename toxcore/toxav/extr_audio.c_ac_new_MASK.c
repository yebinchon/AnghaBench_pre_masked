
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int toxav_audio_receive_frame_cb ;
typedef int ToxAV ;
struct TYPE_6__ {void* second; int * first; } ;
struct TYPE_7__ {int le_bit_rate; int le_sample_rate; int le_channel_count; int ld_channel_count; int ld_sample_rate; int lp_frame_duration; int lp_sampling_rate; int lp_channel_count; int queue_mutex; int j_buf; int decoder; TYPE_1__ acb; int friend_number; int * av; scalar_t__ ldrts; int * encoder; } ;
typedef TYPE_2__ ACSession ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (int,int) ;
 int * FUNC_3 (int,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int,int*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;

ACSession *FUNC_12(ToxAV *VAR_1, uint32_t VAR_2, toxav_audio_receive_frame_cb *VAR_3, void *VAR_4)
{
    ACSession *VAR_5 = FUNC_2(sizeof(ACSession), 1);

    if (!VAR_5) {
        FUNC_1("Allocation failed! Application might misbehave!");
        return ((void*)0);
    }

    if (FUNC_4(VAR_5->queue_mutex) != 0) {
        FUNC_1("Failed to create recursive mutex!");
        FUNC_5(VAR_5);
        return ((void*)0);
    }

    int VAR_6;
    VAR_5->decoder = FUNC_8(48000, 2, &VAR_6);

    if (VAR_6 != VAR_0) {
        FUNC_0("Error while starting audio decoder: %s", FUNC_10(VAR_6));
        goto BASE_CLEANUP;
    }

    if (!(VAR_5->j_buf = FUNC_7(3))) {
        FUNC_1("Jitter buffer creaton failed!");
        FUNC_9(VAR_5->decoder);
        goto BASE_CLEANUP;
    }


    VAR_5->encoder = FUNC_3(48000, 48000, 2);

    if (VAR_5->encoder == ((void*)0))
        goto DECODER_CLEANUP;

    VAR_5->le_bit_rate = 48000;
    VAR_5->le_sample_rate = 48000;
    VAR_5->le_channel_count = 2;

    VAR_5->ld_channel_count = 2;
    VAR_5->ld_sample_rate = 48000;
    VAR_5->ldrts = 0;



    VAR_5->lp_frame_duration = 120;
    VAR_5->lp_sampling_rate = 48000;
    VAR_5->lp_channel_count = 1;

    VAR_5->av = VAR_1;
    VAR_5->friend_number = VAR_2;
    VAR_5->acb.first = VAR_3;
    VAR_5->acb.second = VAR_4;

    return VAR_5;

DECODER_CLEANUP:
    FUNC_9(VAR_5->decoder);
    FUNC_6(VAR_5->j_buf);
BASE_CLEANUP:
    FUNC_11(VAR_5->queue_mutex);
    FUNC_5(VAR_5);
    return ((void*)0);
}
