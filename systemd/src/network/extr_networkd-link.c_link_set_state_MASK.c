
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; } ;
typedef scalar_t__ LinkState ;
typedef TYPE_1__ Link ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ) ;

void FUNC_4(Link *VAR_0, LinkState VAR_1) {
        FUNC_0(VAR_0);

        if (VAR_0->state == VAR_1)
                return;

        FUNC_3(VAR_0, "State changed: %s -> %s",
                       FUNC_2(VAR_0->state),
                       FUNC_2(VAR_1));

        VAR_0->state = VAR_1;

        FUNC_1(VAR_0, "AdministrativeState", ((void*)0));
}
