
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int slaves; int manager; } ;
struct TYPE_8__ {int ifindex; } ;
typedef TYPE_1__ NetDev ;
typedef TYPE_2__ Link ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(Link *VAR_0, NetDev *VAR_1) {
        Link *VAR_2;

        FUNC_0(VAR_0);

        if (!VAR_0->manager || !VAR_1)
                return;

        if (FUNC_1(VAR_0->manager, VAR_1->ifindex, &VAR_2) < 0)
                return;

        FUNC_2(FUNC_3(VAR_2->slaves, VAR_0));
}
