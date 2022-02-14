
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int idle_hint; int manager; int user; scalar_t__ seat; int idle_hint_timestamp; } ;
typedef TYPE_1__ Session ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char*,char*,int *) ;
 int FUNC_3 (scalar_t__,char*,char*,char*,int *) ;
 int FUNC_4 (TYPE_1__*,char*,char*,char*,int *) ;
 int FUNC_5 (int ,char*,char*,char*,int *) ;

void FUNC_6(Session *VAR_0, bool VAR_1) {
        FUNC_0(VAR_0);

        if (VAR_0->idle_hint == VAR_1)
                return;

        VAR_0->idle_hint = VAR_1;
        FUNC_1(&VAR_0->idle_hint_timestamp);

        FUNC_4(VAR_0, "IdleHint", "IdleSinceHint", "IdleSinceHintMonotonic", ((void*)0));

        if (VAR_0->seat)
                FUNC_3(VAR_0->seat, "IdleHint", "IdleSinceHint", "IdleSinceHintMonotonic", ((void*)0));

        FUNC_5(VAR_0->user, "IdleHint", "IdleSinceHint", "IdleSinceHintMonotonic", ((void*)0));
        FUNC_2(VAR_0->manager, "IdleHint", "IdleSinceHint", "IdleSinceHintMonotonic", ((void*)0));
}
