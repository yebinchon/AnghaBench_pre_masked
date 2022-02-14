
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ send_sigkill; } ;
struct TYPE_12__ {scalar_t__ result; TYPE_2__ kill_context; int timeout_stop_usec; int main_pid_alien; int control_pid; int main_pid; } ;
typedef int ServiceState ;
typedef scalar_t__ ServiceResult ;
typedef TYPE_1__ Service ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static void FUNC_15(Service *VAR_8, ServiceState VAR_9, ServiceResult VAR_10) {
        int VAR_11;

        FUNC_2(VAR_8);

        if (VAR_8->result == VAR_7)
                VAR_8->result = VAR_10;


        (void) FUNC_13(FUNC_1(VAR_8));



        (void) FUNC_11(FUNC_1(VAR_8));

        VAR_11 = FUNC_12(
                        FUNC_1(VAR_8),
                        &VAR_8->kill_context,
                        FUNC_10(VAR_8, VAR_9),
                        VAR_8->main_pid,
                        VAR_8->control_pid,
                        VAR_8->main_pid_alien);
        if (VAR_11 < 0)
                goto fail;

        if (VAR_11 > 0) {
                VAR_11 = FUNC_5(VAR_8, FUNC_14(FUNC_4(VAR_0),
                                      VAR_9 == VAR_6 ? FUNC_9(VAR_8) : VAR_8->timeout_stop_usec));
                if (VAR_11 < 0)
                        goto fail;

                FUNC_8(VAR_8, VAR_9);
        } else if (FUNC_0(VAR_9, VAR_6, VAR_5) && VAR_8->kill_context.send_sigkill)
                FUNC_15(VAR_8, VAR_4, VAR_7);
        else if (FUNC_0(VAR_9, VAR_6, VAR_5, VAR_4))
                FUNC_7(VAR_8, VAR_7);
        else if (VAR_9 == VAR_3 && VAR_8->kill_context.send_sigkill)
                FUNC_15(VAR_8, VAR_2, VAR_7);
        else
                FUNC_6(VAR_8, VAR_7, 1);

        return;

fail:
        FUNC_3(FUNC_1(VAR_8), VAR_11, "Failed to kill processes: %m");

        if (FUNC_0(VAR_9, VAR_6, VAR_5, VAR_4))
                FUNC_7(VAR_8, VAR_1);
        else
                FUNC_6(VAR_8, VAR_1, 1);
}
