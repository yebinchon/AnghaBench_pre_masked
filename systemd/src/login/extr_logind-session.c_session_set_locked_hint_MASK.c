
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int locked_hint; } ;
typedef TYPE_1__ Session ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int *) ;

void FUNC_2(Session *VAR_0, bool VAR_1) {
        FUNC_0(VAR_0);

        if (VAR_0->locked_hint == VAR_1)
                return;

        VAR_0->locked_hint = VAR_1;

        FUNC_1(VAR_0, "LockedHint", ((void*)0));
}
