
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; void* group_name; void* user_name; } ;
typedef TYPE_1__ TunTap ;
typedef TYPE_1__ NetDev ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(NetDev *VAR_1) {
        TunTap *VAR_2 = ((void*)0);

        FUNC_2(VAR_1);

        if (VAR_1->kind == VAR_0)
                VAR_2 = FUNC_1(VAR_1);
        else
                VAR_2 = FUNC_0(VAR_1);

        FUNC_2(VAR_2);

        VAR_2->user_name = FUNC_3(VAR_2->user_name);
        VAR_2->group_name = FUNC_3(VAR_2->group_name);
}
