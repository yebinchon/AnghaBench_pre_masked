
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* network; } ;
struct TYPE_8__ {int routes; } ;
typedef TYPE_2__ Route ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static Route *FUNC_2(Route *VAR_1) {
        if (!VAR_1)
                return ((void*)0);

        if (VAR_1->network)
                FUNC_0(VAR_0, VAR_1->network->routes, VAR_1);

        return FUNC_1(VAR_1);
}
