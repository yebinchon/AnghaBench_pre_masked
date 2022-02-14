
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int data ;
struct TYPE_11__ {scalar_t__ status; int kill_at; int sock; } ;
typedef TYPE_1__ TCP_Client_Connection ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int *,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

void FUNC_11(TCP_Client_Connection *VAR_8)
{
    FUNC_10();

    if (VAR_8->status == VAR_2) {
        return;
    }

    if (VAR_8->status == VAR_3) {
        if (FUNC_7(VAR_8) == 0) {
            int VAR_9 = FUNC_3(VAR_8);

            if (VAR_9 == -1) {
                VAR_8->kill_at = 0;
                VAR_8->status = VAR_2;
            }

            if (VAR_9 == 1) {
                FUNC_1(VAR_8);
                VAR_8->status = VAR_1;
            }
        }
    }

    if (VAR_8->status == VAR_4) {
        if (FUNC_7(VAR_8) == 0) {
            int VAR_10 = FUNC_8(VAR_8);

            if (VAR_10 == -1) {
                VAR_8->kill_at = 0;
                VAR_8->status = VAR_2;
            }

            if (VAR_10 == 1) {
                FUNC_4(VAR_8);
                VAR_8->status = VAR_5;
            }
        }
    }

    if (VAR_8->status == VAR_5) {
        if (FUNC_7(VAR_8) == 0) {
            int VAR_11 = FUNC_5(VAR_8);

            if (VAR_11 == -1) {
                VAR_8->kill_at = 0;
                VAR_8->status = VAR_2;
            }

            if (VAR_11 == 1) {
                FUNC_1(VAR_8);
                VAR_8->status = VAR_1;
            }
        }
    }

    if (VAR_8->status == VAR_1) {
        if (FUNC_7(VAR_8) == 0) {
            VAR_8->status = VAR_6;
        }
    }

    if (VAR_8->status == VAR_6) {
        uint8_t VAR_12[VAR_7];
        int VAR_13 = FUNC_6(VAR_8->sock, VAR_12, sizeof(VAR_12));

        if (sizeof(VAR_12) == VAR_13) {
            if (FUNC_2(VAR_8, VAR_12) == 0) {
                VAR_8->kill_at = ~0;
                VAR_8->status = VAR_0;
            } else {
                VAR_8->kill_at = 0;
                VAR_8->status = VAR_2;
            }
        }
    }

    if (VAR_8->status == VAR_0) {
        FUNC_0(VAR_8);
    }

    if (VAR_8->kill_at <= FUNC_9()) {
        VAR_8->status = VAR_2;
    }
}
