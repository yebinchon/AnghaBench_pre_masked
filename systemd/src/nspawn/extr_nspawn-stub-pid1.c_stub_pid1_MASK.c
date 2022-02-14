
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct timespec {int dummy; } ;
typedef int sigset_t ;
struct TYPE_5__ {scalar_t__ si_pid; scalar_t__ si_code; int si_status; scalar_t__ si_signo; } ;
typedef TYPE_1__ siginfo_t ;
typedef int sd_id128_t ;
typedef scalar_t__ pid_t ;
typedef int new_environment ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_25 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__,char*) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int ,int *,int *) ;
 scalar_t__ FUNC_21 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_22 (int *,TYPE_1__*,int ) ;
 int FUNC_23 (int *,TYPE_1__*) ;
 int FUNC_24 (struct timespec*,scalar_t__) ;
 int FUNC_25 (int ,int ,TYPE_1__*,int) ;

int FUNC_26(sd_id128_t VAR_26) {
        enum {
                STATE_RUNNING,
                STATE_REBOOT,
                STATE_POWEROFF,
        } VAR_27 = STATE_RUNNING;

        sigset_t VAR_28, VAR_29, VAR_30;
        usec_t VAR_31 = VAR_22;
        pid_t VAR_32;
        int VAR_33;


        char VAR_34[] =
                "container=systemd-nspawn\0"
                "container_uuid=XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";




        FUNC_2(FUNC_19(&VAR_28) >= 0);
        FUNC_2(FUNC_20(VAR_18, &VAR_28, &VAR_29) >= 0);



        VAR_33 = FUNC_5(VAR_20, VAR_21);
        if (VAR_33 < 0 && VAR_25 != VAR_5)
                return FUNC_9(VAR_25, "Failed to surrender controlling terminal: %m");

        VAR_32 = FUNC_4();
        if (VAR_32 < 0)
                return FUNC_9(VAR_25, "Failed to fork child pid: %m");

        if (VAR_32 == 0) {

                FUNC_2(FUNC_20(VAR_19, &VAR_29, ((void*)0)) >= 0);
                FUNC_17();
                return 0;
        }

        FUNC_14();

        FUNC_8();
        (void) FUNC_3(((void*)0), 0);
        FUNC_10();




        FUNC_16(VAR_26, VAR_34 + sizeof(VAR_34) - VAR_12);
        FUNC_15(VAR_34, sizeof(VAR_34));

        (void) FUNC_13("(sd-stubinit)");

        FUNC_2(FUNC_18(&VAR_30) >= 0);
        FUNC_2(FUNC_21(&VAR_30,
                                  VAR_13,
                                  VAR_15,
                                  VAR_16+3,
                                  VAR_16+4,
                                  VAR_16+5,
                                  VAR_16+6,
                                  VAR_16+13,
                                  VAR_16+14,
                                  VAR_16+15,
                                  VAR_16+16,
                                  -1) >= 0);




        for (;;) {
                siginfo_t VAR_35;
                usec_t VAR_36;

                VAR_35.si_pid = 0;
                VAR_33 = FUNC_25(VAR_9, 0, &VAR_35, VAR_23|VAR_24);
                if (VAR_33 < 0) {
                        VAR_33 = FUNC_9(VAR_25, "Failed to reap children: %m");
                        goto finish;
                }

                VAR_36 = FUNC_11(VAR_1);

                if (VAR_35.si_pid == VAR_32 || VAR_36 >= VAR_31) {



                        if (VAR_27 == STATE_REBOOT) {
                                (void) FUNC_12(VAR_10);
                                VAR_33 = FUNC_9(VAR_25, "Failed to reboot: %m");
                                goto finish;

                        } else if (VAR_27 == STATE_POWEROFF)
                                (void) FUNC_12(VAR_11);

                        if (VAR_35.si_pid == VAR_32 && VAR_35.si_code == VAR_0)
                                VAR_33 = VAR_35.si_status;
                        else
                                VAR_33 = VAR_7;

                        goto finish;
                }
                if (VAR_35.si_pid != 0)

                        continue;

                if (VAR_31 == VAR_22)
                        VAR_33 = FUNC_23(&VAR_30, &VAR_35);
                else {
                        struct timespec VAR_37;
                        VAR_33 = FUNC_22(&VAR_30, &VAR_35, FUNC_24(&VAR_37, VAR_31 - VAR_36));
                }
                if (VAR_33 < 0) {
                        if (VAR_25 == VAR_4)
                                continue;
                        if (VAR_25 == VAR_3)
                                continue;

                        VAR_33 = FUNC_9(VAR_25, "Failed to wait for signal: %m");
                        goto finish;
                }

                if (VAR_35.si_signo == VAR_13)
                        continue;

                if (VAR_27 != STATE_RUNNING)
                        continue;




                if (VAR_35.si_signo == VAR_16+3 ||
                    VAR_35.si_signo == VAR_16+4 ||
                    VAR_35.si_signo == VAR_16+13 ||
                    VAR_35.si_signo == VAR_16+14)

                        VAR_27 = STATE_POWEROFF;

                else if (VAR_35.si_signo == VAR_15 ||
                         VAR_35.si_signo == VAR_16+5 ||
                         VAR_35.si_signo == VAR_16+6 ||
                         VAR_35.si_signo == VAR_16+15 ||
                         VAR_35.si_signo == VAR_16+16)

                        VAR_27 = STATE_REBOOT;
                else
                        FUNC_1("Got unexpected signal");

                VAR_33 = FUNC_7(VAR_32, VAR_17);






                if (VAR_33 != -VAR_6)
                        (void) FUNC_6(VAR_32, VAR_14);

                VAR_31 = FUNC_11(VAR_1) + VAR_2;
        }

finish:
        FUNC_0(VAR_33 < 0 ? VAR_8 : VAR_33);
}
