
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct RTPMessage {scalar_t__ len; int * data; } ;
typedef int int16_t ;
struct TYPE_5__ {int second; int (* first ) (int ,int ,int *,int,int ,int,int ) ;} ;
struct TYPE_6__ {int lp_sampling_rate; int lp_frame_duration; int queue_mutex; TYPE_1__ acb; int lp_channel_count; int friend_number; int av; int decoder; int j_buf; } ;
typedef TYPE_2__ ACSession ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct RTPMessage*) ;
 struct RTPMessage* FUNC_3 (int ,int*) ;
 int FUNC_4 (int*,int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int *,scalar_t__,int *,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*,int,int ) ;
 int FUNC_12 (int ,int ,int *,int,int ,int,int ) ;

void FUNC_13(ACSession *VAR_0)
{
    if (!VAR_0)
        return;




    int16_t VAR_1[5760 * 2];

    struct RTPMessage *VAR_2;
    int VAR_3 = 0;

    FUNC_9(VAR_0->queue_mutex);

    while ((VAR_2 = FUNC_3(VAR_0->j_buf, &VAR_3)) || VAR_3 == 2) {
        FUNC_10(VAR_0->queue_mutex);

        if (VAR_3 == 2) {
            FUNC_0("OPUS correction");
            int VAR_4 = (VAR_0->lp_sampling_rate * VAR_0->lp_frame_duration) / 1000;
            VAR_3 = FUNC_6(VAR_0->decoder, ((void*)0), 0, VAR_1, VAR_4, 1);
        } else {
            FUNC_4(&VAR_0->lp_sampling_rate, VAR_2->data, 4);
            VAR_0->lp_sampling_rate = FUNC_5(VAR_0->lp_sampling_rate);

            VAR_0->lp_channel_count = FUNC_7(VAR_2->data + 4);




            if (!FUNC_11(VAR_0, VAR_0->lp_sampling_rate, VAR_0->lp_channel_count)) {
                FUNC_1("Failed to reconfigure decoder!");
                FUNC_2(VAR_2);
                continue;
            }

            VAR_3 = FUNC_6(VAR_0->decoder, VAR_2->data + 4, VAR_2->len - 4, VAR_1, 5760, 0);
            FUNC_2(VAR_2);
        }

        if (VAR_3 < 0) {
            FUNC_1("Decoding error: %s", FUNC_8(VAR_3));
        } else if (VAR_0->acb.first) {
            VAR_0->lp_frame_duration = (VAR_3 * 1000) / VAR_0->lp_sampling_rate;

            VAR_0->acb.first(VAR_0->av, VAR_0->friend_number, VAR_1, VAR_3, VAR_0->lp_channel_count,
                          VAR_0->lp_sampling_rate, VAR_0->acb.second);
        }

        return;
    }

    FUNC_10(VAR_0->queue_mutex);
}
