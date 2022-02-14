
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mcast_querier; int mcast_snooping; int vlan_filtering; int stp; void* ageing_time; void* forward_delay; int default_pvid; } ;
typedef int NetDev ;
typedef TYPE_1__ Bridge ;


 TYPE_1__* FUNC_0 (int *) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(NetDev *VAR_2) {
        Bridge *VAR_3;

        VAR_3 = FUNC_0(VAR_2);

        FUNC_1(VAR_3);

        VAR_3->mcast_querier = -1;
        VAR_3->mcast_snooping = -1;
        VAR_3->vlan_filtering = -1;
        VAR_3->stp = -1;
        VAR_3->default_pvid = VAR_1;
        VAR_3->forward_delay = VAR_0;
        VAR_3->ageing_time = VAR_0;
}
