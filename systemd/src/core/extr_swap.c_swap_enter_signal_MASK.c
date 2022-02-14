
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ send_sigkill; } ;
struct TYPE_10__ {scalar_t__ result; TYPE_2__ kill_context; int timeout_usec; int control_pid; } ;
typedef int SwapState ;
typedef scalar_t__ SwapResult ;
typedef TYPE_1__ Swap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ,TYPE_2__*,int ,int,int ,int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(Swap *VAR_5, SwapState VAR_6, SwapResult VAR_7) {
        int VAR_8;

        FUNC_1(VAR_5);

        if (VAR_5->result == VAR_4)
                VAR_5->result = VAR_7;

        VAR_8 = FUNC_8(FUNC_0(VAR_5),
                              &VAR_5->kill_context,
                              FUNC_4(VAR_5, VAR_6),
                              -1,
                              VAR_5->control_pid,
                              0);
        if (VAR_8 < 0)
                goto fail;

        if (VAR_8 > 0) {
                VAR_8 = FUNC_5(VAR_5, FUNC_9(FUNC_3(VAR_0), VAR_5->timeout_usec));
                if (VAR_8 < 0)
                        goto fail;

                FUNC_7(VAR_5, VAR_6);
        } else if (VAR_6 == VAR_2 && VAR_5->kill_context.send_sigkill)
                FUNC_10(VAR_5, VAR_1, VAR_4);
        else
                FUNC_6(VAR_5, VAR_4);

        return;

fail:
        FUNC_2(FUNC_0(VAR_5), VAR_8, "Failed to kill processes: %m");
        FUNC_6(VAR_5, VAR_3);
}
