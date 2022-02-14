
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int manager; } ;
struct TYPE_7__ {int ifindex; } ;
typedef TYPE_1__ NetDev ;
typedef TYPE_2__ Link ;


 scalar_t__ FUNC_0 (int ,int ,TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2(Link *VAR_0, NetDev *VAR_1) {
        Link *VAR_2;

        if (!VAR_1)
                return;

        if (FUNC_0(VAR_0->manager, VAR_1->ifindex, &VAR_2) < 0)
                return;

        FUNC_1(VAR_2, 1);
}
