
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ result; int timeout_usec; int control_pid; int kill_context; } ;
typedef int SocketState ;
typedef scalar_t__ SocketResult ;
typedef TYPE_1__ Socket ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int ,int *,int ,int,int ,int) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(Socket *VAR_7, SocketState VAR_8, SocketResult VAR_9) {
        int VAR_10;

        FUNC_2(VAR_7);

        if (VAR_7->result == VAR_6)
                VAR_7->result = VAR_9;

        VAR_10 = FUNC_10(
                        FUNC_1(VAR_7),
                        &VAR_7->kill_context,
                        FUNC_9(VAR_7, VAR_8),
                        -1,
                        VAR_7->control_pid,
                        0);
        if (VAR_10 < 0)
                goto fail;

        if (VAR_10 > 0) {
                VAR_10 = FUNC_5(VAR_7, FUNC_11(FUNC_4(VAR_0), VAR_7->timeout_usec));
                if (VAR_10 < 0)
                        goto fail;

                FUNC_8(VAR_7, VAR_8);
        } else if (VAR_8 == VAR_5)
                FUNC_12(VAR_7, VAR_4, VAR_6);
        else if (VAR_8 == VAR_4)
                FUNC_7(VAR_7, VAR_6);
        else if (VAR_8 == VAR_3)
                FUNC_12(VAR_7, VAR_2, VAR_6);
        else
                FUNC_6(VAR_7, VAR_6);

        return;

fail:
        FUNC_3(FUNC_1(VAR_7), VAR_10, "Failed to kill processes: %m");

        if (FUNC_0(VAR_8, VAR_5, VAR_4))
                FUNC_7(VAR_7, VAR_1);
        else
                FUNC_6(VAR_7, VAR_1);
}
