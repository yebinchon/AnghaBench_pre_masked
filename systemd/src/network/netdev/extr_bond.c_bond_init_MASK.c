
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int all_slaves_active; int tlb_dynamic_lb; int lp_interval; int num_grat_arp; int packets_per_slave; int resend_igmp; int primary_reselect; int arp_all_targets; int arp_validate; int fail_over_mac; int ad_select; int lacp_rate; int xmit_hash_policy; int mode; } ;
typedef TYPE_1__ NetDev ;
typedef TYPE_1__ Bond ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(NetDev *VAR_12) {
        Bond *VAR_13;

        FUNC_1(VAR_12);

        VAR_13 = FUNC_0(VAR_12);

        FUNC_1(VAR_13);

        VAR_13->mode = VAR_9;
        VAR_13->xmit_hash_policy = VAR_11;
        VAR_13->lacp_rate = VAR_8;
        VAR_13->ad_select = VAR_4;
        VAR_13->fail_over_mac = VAR_7;
        VAR_13->arp_validate = VAR_6;
        VAR_13->arp_all_targets = VAR_5;
        VAR_13->primary_reselect = VAR_10;

        VAR_13->all_slaves_active = 0;
        VAR_13->tlb_dynamic_lb = -1;

        VAR_13->resend_igmp = VAR_3;
        VAR_13->packets_per_slave = VAR_2;
        VAR_13->num_grat_arp = VAR_0;
        VAR_13->lp_interval = VAR_1;
}
