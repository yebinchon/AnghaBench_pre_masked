
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; int pmtudisc; } ;
typedef TYPE_1__ Tunnel ;
typedef TYPE_1__ NetDev ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(NetDev *VAR_1) {
        Tunnel *VAR_2;

        FUNC_2(VAR_1);

        if (VAR_1->kind == VAR_0)
                VAR_2 = FUNC_0(VAR_1);
        else
                VAR_2 = FUNC_1(VAR_1);

        FUNC_2(VAR_2);

        VAR_2->pmtudisc = 1;
}
