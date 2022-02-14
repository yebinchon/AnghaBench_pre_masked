
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int video_y ;
typedef int video_v ;
typedef int video_u ;
struct TYPE_10__ {int incoming; } ;
typedef TYPE_1__ uint8_t ;
typedef int uint32_t ;
typedef int time_t ;
struct TYPE_11__ {int friend_number; TYPE_1__* BobCC; TYPE_1__* AliceCC; int * BobAV; int * AliceAV; } ;
typedef TYPE_2__ thread_data ;
typedef TYPE_1__ int16_t ;
typedef int ToxAV ;
typedef scalar_t__ TOXAV_ERR_CALL_CONTROL ;
typedef scalar_t__ TOXAV_ERR_CALL ;
typedef scalar_t__ TOXAV_ERR_ANSWER ;
typedef int PCM ;
typedef TYPE_1__ CallControl ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int,int,scalar_t__*) ;
 int FUNC_7 (int *,int ,TYPE_1__*,int,int,int,int *) ;
 int FUNC_8 (int *,int ,int,int,scalar_t__*) ;
 int FUNC_9 (int *,int ,int ,scalar_t__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int,int,TYPE_1__*,TYPE_1__*,TYPE_1__*,int *) ;

void *FUNC_12(void *VAR_4)
{
    ToxAV *VAR_5 = ((thread_data *) VAR_4)->AliceAV;
    ToxAV *VAR_6 = ((thread_data *) VAR_4)->BobAV;
    CallControl *VAR_7 = ((thread_data *) VAR_4)->AliceCC;
    CallControl *VAR_8 = ((thread_data *) VAR_4)->BobCC;
    uint32_t VAR_9 = ((thread_data *) VAR_4)->friend_number;


    FUNC_2(VAR_7, 0, sizeof(CallControl));
    FUNC_2(VAR_8, 0, sizeof(CallControl));

    {
        TOXAV_ERR_CALL VAR_10;
        FUNC_8(VAR_5, VAR_9, 48, 3000, &VAR_10);

        if (VAR_10 != VAR_3) {
            FUNC_3("toxav_call failed: %d\n", VAR_10);
            FUNC_1(0);
        }
    }

    while (!VAR_8->incoming)
        FUNC_0(10);

    {
        TOXAV_ERR_ANSWER VAR_11;
        FUNC_6(VAR_6, 0, 8, 500, &VAR_11);

        if (VAR_11 != VAR_1) {
            FUNC_3("toxav_answer failed: %d\n", VAR_11);
            FUNC_1(0);
        }
    }

    FUNC_0(30);

    int16_t VAR_12[960];
    uint8_t VAR_13[800 * 600];
    uint8_t VAR_14[800 * 600 / 2];
    uint8_t VAR_15[800 * 600 / 2];

    FUNC_2(VAR_12, 0, sizeof(VAR_12));
    FUNC_2(VAR_13, 0, sizeof(VAR_13));
    FUNC_2(VAR_14, 0, sizeof(VAR_14));
    FUNC_2(VAR_15, 0, sizeof(VAR_15));

    time_t VAR_16 = FUNC_5(((void*)0));

    while (FUNC_5(((void*)0)) - VAR_16 < 4) {
        FUNC_10(VAR_5);
        FUNC_10(VAR_6);

        FUNC_7(VAR_5, VAR_9, VAR_12, 960, 1, 48000, ((void*)0));
        FUNC_7(VAR_6, 0, VAR_12, 960, 1, 48000, ((void*)0));

        FUNC_11(VAR_5, VAR_9, 800, 600, VAR_13, VAR_14, VAR_15, ((void*)0));
        FUNC_11(VAR_6, 0, 800, 600, VAR_13, VAR_14, VAR_15, ((void*)0));

        FUNC_0(10);
    }

    {
        TOXAV_ERR_CALL_CONTROL VAR_17;
        FUNC_9(VAR_5, VAR_9, VAR_0, &VAR_17);

        if (VAR_17 != VAR_2) {
            FUNC_3("toxav_call_control failed: %d %p %p\n", VAR_17, VAR_5, VAR_6);
        }
    }

    FUNC_0(30);

    FUNC_3 ("Closing thread\n");
    FUNC_4(((void*)0));
}
