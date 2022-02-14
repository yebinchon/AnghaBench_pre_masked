
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int mode; } ;
struct TYPE_8__ {int ifname; int manager; int kind; } ;
struct TYPE_7__ {scalar_t__ kind; } ;
typedef TYPE_1__ NetDev ;
typedef TYPE_2__ Link ;
typedef int IPVlanMode ;


 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__**) ;
 int FUNC_2 (int ,char*) ;

IPVlanMode FUNC_3(Link *VAR_2) {
        NetDev *VAR_3;

        if (!FUNC_2(VAR_2->kind, "ipvlan"))
                return VAR_1;

        if (FUNC_1(VAR_2->manager, VAR_2->ifname, &VAR_3) < 0)
                return VAR_1;

        if (VAR_3->kind != VAR_0)
                return VAR_1;

        return FUNC_0(VAR_3)->mode;
}
