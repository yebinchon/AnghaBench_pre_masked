
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ result; int timeout_stop_usec; scalar_t__ was_abandoned; int kill_context; } ;
typedef int ScopeState ;
typedef scalar_t__ ScopeResult ;
typedef TYPE_1__ Scope ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,int ,int,int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(Scope *VAR_8, ScopeState VAR_9, ScopeResult VAR_10) {
        bool VAR_11 = 0;
        int VAR_12;

        FUNC_1(VAR_8);

        if (VAR_8->result == VAR_7)
                VAR_8->result = VAR_10;


        (void) FUNC_10(FUNC_0(VAR_8));



        (void) FUNC_8(FUNC_0(VAR_8));



        if (VAR_9 == VAR_6)
                VAR_11 = FUNC_2(VAR_8) > 0;

        if (VAR_11)
                VAR_12 = 1;
        else {
                VAR_12 = FUNC_9(
                                FUNC_0(VAR_8),
                                &VAR_8->kill_context,
                                VAR_9 != VAR_6 ? VAR_1 :
                                VAR_8->was_abandoned ? VAR_3 :
                                                              VAR_2,
                                -1, -1, 0);
                if (VAR_12 < 0)
                        goto fail;
        }

        if (VAR_12 > 0) {
                VAR_12 = FUNC_5(VAR_8, FUNC_11(FUNC_4(VAR_0), VAR_8->timeout_stop_usec));
                if (VAR_12 < 0)
                        goto fail;

                FUNC_7(VAR_8, VAR_9);
        } else if (VAR_9 == VAR_6)
                FUNC_12(VAR_8, VAR_5, VAR_7);
        else
                FUNC_6(VAR_8, VAR_7);

        return;

fail:
        FUNC_3(FUNC_0(VAR_8), VAR_12, "Failed to kill processes: %m");

        FUNC_6(VAR_8, VAR_4);
}
