
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* network; } ;
struct TYPE_6__ {scalar_t__ router_prefix_delegation; } ;
typedef TYPE_2__ Link ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_2(Link *VAR_1) {
        FUNC_0(VAR_1);

        if (!FUNC_1(VAR_1))
                return 0;

        return VAR_1->network->router_prefix_delegation != VAR_0;
}
