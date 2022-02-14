
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* network; } ;
struct TYPE_4__ {int router_prefix_delegation; } ;
typedef TYPE_2__ Link ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(Link *VAR_2) {
        if (!VAR_2->network)
                return 0;

        return FUNC_0(VAR_2->network->router_prefix_delegation,
                      VAR_1,
                      VAR_0);
}
