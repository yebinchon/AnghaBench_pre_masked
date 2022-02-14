
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct sigaction {int sa_flags; int sa_handler; } ;
typedef int sigset_t ;
struct TYPE_7__ {scalar_t__ signal_fd; int signal_event_source; int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (int ,int *,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,struct sigaction*,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int,int *,int) ;
 scalar_t__ FUNC_11 (int ,int *,int *) ;
 int FUNC_12 (int *,int ,int ,int ,int ,int ,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_13(Manager *VAR_19) {
        struct sigaction VAR_20 = {
                .sa_handler = VAR_15,
                .sa_flags = VAR_1|VAR_2,
        };
        sigset_t VAR_21;
        int VAR_22;

        FUNC_2(VAR_19);

        FUNC_3(FUNC_8(VAR_6, &VAR_20, ((void*)0)) == 0);






        FUNC_3(FUNC_9(&VAR_21) == 0);
        FUNC_12(&VAR_21,
                        VAR_6,
                        VAR_11,
                        VAR_7,
                        VAR_12,
                        VAR_13,
                        VAR_8,
                        VAR_14,
                        VAR_9,

                        VAR_10+0,
                        VAR_10+1,
                        VAR_10+2,
                        VAR_10+3,
                        VAR_10+4,
                        VAR_10+5,
                        VAR_10+6,



                        VAR_10+13,
                        VAR_10+14,
                        VAR_10+15,
                        VAR_10+16,



                        VAR_10+20,
                        VAR_10+21,
                        VAR_10+22,
                        VAR_10+23,
                        VAR_10+24,
                        FUNC_1(VAR_10+26),
                        FUNC_1(VAR_10+27),
                        FUNC_1(VAR_10+28),
                        FUNC_1(VAR_10+29),


                        -1);
        FUNC_3(FUNC_11(VAR_16, &VAR_21, ((void*)0)) == 0);

        VAR_19->signal_fd = FUNC_10(-1, &VAR_21, VAR_5|VAR_4);
        if (VAR_19->signal_fd < 0)
                return -VAR_17;

        VAR_22 = FUNC_5(VAR_19->event, &VAR_19->signal_event_source, VAR_19->signal_fd, VAR_0, VAR_18, VAR_19);
        if (VAR_22 < 0)
                return VAR_22;

        (void) FUNC_6(VAR_19->signal_event_source, "manager-signal");





        VAR_22 = FUNC_7(VAR_19->signal_event_source, VAR_3-6);
        if (VAR_22 < 0)
                return VAR_22;

        if (FUNC_0(VAR_19))
                return FUNC_4(VAR_19);

        return 0;
}
