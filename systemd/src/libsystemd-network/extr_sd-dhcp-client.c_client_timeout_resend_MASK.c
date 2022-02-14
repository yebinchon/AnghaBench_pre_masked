
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int usec_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_18__ {int state; int request_sent; int max_attempts; int attempt; int event_priority; int timeout_resend; struct TYPE_18__* event; TYPE_1__* lease; } ;
typedef TYPE_2__ sd_event_source ;
typedef TYPE_2__ sd_dhcp_client ;
struct TYPE_17__ {int t2; int t1; int lifetime; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_2__*,int *,int ,int,int,int (*) (TYPE_2__*,int,void*),TYPE_2__*,int ,char*,int) ;
 int FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_2__*,int ,int*) ;

__attribute__((used)) static int FUNC_14(
                sd_event_source *VAR_3,
                uint64_t VAR_4,
                void *VAR_5) {

        sd_dhcp_client *VAR_6 = VAR_5;
        FUNC_0(VAR_6);
        usec_t VAR_7 = 0;
        uint64_t VAR_8;
        uint32_t VAR_9;
        int VAR_10;

        FUNC_3(VAR_3);
        FUNC_3(VAR_6);
        FUNC_3(VAR_6->event);

        VAR_10 = FUNC_13(VAR_6->event, FUNC_9(), &VAR_8);
        if (VAR_10 < 0)
                goto error;

        switch (VAR_6->state) {

        case 131:

                VAR_9 = (VAR_6->lease->t2 - VAR_6->lease->t1) / 2;
                if (VAR_9 < 60)
                        VAR_9 = 60;

                VAR_7 = VAR_8 + VAR_9 * VAR_2;

                break;

        case 133:

                VAR_9 = (VAR_6->lease->lifetime - VAR_6->lease->t2) / 2;
                if (VAR_9 < 60)
                        VAR_9 = 60;

                VAR_7 = VAR_8 + VAR_9 * VAR_2;
                break;

        case 132:

                VAR_10 = FUNC_4(VAR_6);
                if (VAR_10 < 0)
                        goto error;

                VAR_10 = FUNC_7(VAR_6);
                if (VAR_10 < 0)
                        goto error;
                else {
                        FUNC_11(VAR_6, "REBOOTED");
                        return 0;
                }

        case 135:
        case 134:
        case 129:
        case 130:
        case 136:

                if (VAR_6->attempt < VAR_6->max_attempts)
                        VAR_6->attempt++;
                else
                        goto error;

                VAR_7 = VAR_8 + ((FUNC_2(1) << FUNC_1(VAR_6->attempt, (uint64_t) 6)) - 1) * VAR_2;

                break;

        case 128:
                VAR_10 = -VAR_0;
                goto error;
        }

        VAR_7 += (FUNC_12() & 0x1fffff);

        VAR_10 = FUNC_10(VAR_6->event, &VAR_6->timeout_resend,
                             FUNC_9(),
                             VAR_7, 10 * VAR_1,
                             FUNC_14, VAR_6,
                             VAR_6->event_priority, "dhcp4-resend-timer", 1);
        if (VAR_10 < 0)
                goto error;

        switch (VAR_6->state) {
        case 135:
                VAR_10 = FUNC_5(VAR_6);
                if (VAR_10 >= 0) {
                        VAR_6->state = 129;
                        VAR_6->attempt = 0;
                } else if (VAR_6->attempt >= VAR_6->max_attempts)
                        goto error;

                break;

        case 129:
                VAR_10 = FUNC_5(VAR_6);
                if (VAR_10 < 0 && VAR_6->attempt >= VAR_6->max_attempts)
                        goto error;

                break;

        case 134:
        case 130:
        case 131:
        case 133:
                VAR_10 = FUNC_6(VAR_6);
                if (VAR_10 < 0 && VAR_6->attempt >= VAR_6->max_attempts)
                         goto error;

                if (VAR_6->state == 134)
                        VAR_6->state = 132;

                VAR_6->request_sent = VAR_8;

                break;

        case 132:
        case 136:

                break;

        case 128:
                VAR_10 = -VAR_0;
                goto error;
        }

        return 0;

error:
        FUNC_8(VAR_6, VAR_10);



        return 0;
}
