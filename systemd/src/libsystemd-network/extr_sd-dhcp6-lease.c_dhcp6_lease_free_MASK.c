
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* ntp_fqdn; int ntp; void* domains; int dns; int pd; int ia; int serverid; } ;
typedef TYPE_1__ sd_dhcp6_lease ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (void*) ;

__attribute__((used)) static sd_dhcp6_lease *FUNC_5(sd_dhcp6_lease *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_2(VAR_0->serverid);
        FUNC_1(&VAR_0->ia);
        FUNC_1(&VAR_0->pd);

        FUNC_2(VAR_0->dns);

        VAR_0->domains = FUNC_4(VAR_0->domains);

        FUNC_2(VAR_0->ntp);

        VAR_0->ntp_fqdn = FUNC_4(VAR_0->ntp_fqdn);
        return FUNC_3(VAR_0);
}
