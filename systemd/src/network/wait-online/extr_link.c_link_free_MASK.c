
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ifname; int state; TYPE_1__* manager; int ifindex; } ;
struct TYPE_7__ {int links_by_name; int links; } ;
typedef TYPE_2__ Link ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;

Link *FUNC_4(Link *VAR_0) {

        if (!VAR_0)
                return ((void*)0);

        if (VAR_0->manager) {
                FUNC_2(VAR_0->manager->links, FUNC_0(VAR_0->ifindex));
                FUNC_2(VAR_0->manager->links_by_name, VAR_0->ifname);
        }

        FUNC_1(VAR_0->state);
        FUNC_1(VAR_0->ifname);
        return FUNC_3(VAR_0);
 }
