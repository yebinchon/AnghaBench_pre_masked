
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * routes; int * addresses; int bond; int bridge; int vlan; int dns; int hostname; int ifname; } ;
typedef int Route ;
typedef TYPE_1__ Network ;
typedef int Address ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static Network *FUNC_5(Network *VAR_0) {
        Address *VAR_1;
        Route *VAR_2;

        if (!VAR_0)
                return ((void*)0);

        FUNC_1(VAR_0->ifname);
        FUNC_1(VAR_0->hostname);
        FUNC_4(VAR_0->dns);
        FUNC_1(VAR_0->vlan);
        FUNC_1(VAR_0->bridge);
        FUNC_1(VAR_0->bond);

        while ((VAR_1 = VAR_0->addresses))
                FUNC_0(VAR_1);

        while ((VAR_2 = VAR_0->routes))
                FUNC_3(VAR_2);

        return FUNC_2(VAR_0);
}
