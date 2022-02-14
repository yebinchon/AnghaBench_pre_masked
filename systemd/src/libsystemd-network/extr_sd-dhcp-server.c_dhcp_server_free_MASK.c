
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int bound_leases; int raw_option; int leases_by_client_id; int sip; int ntp; int dns; int timezone; int event; } ;
typedef TYPE_1__ sd_dhcp_server ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static sd_dhcp_server *FUNC_8(sd_dhcp_server *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_3(VAR_0, "UNREF");

        FUNC_6(VAR_0);

        FUNC_7(VAR_0->event);

        FUNC_1(VAR_0->timezone);
        FUNC_1(VAR_0->dns);
        FUNC_1(VAR_0->ntp);
        FUNC_1(VAR_0->sip);

        FUNC_2(VAR_0->leases_by_client_id);

        FUNC_5(VAR_0->raw_option);

        FUNC_1(VAR_0->bound_leases);
        return FUNC_4(VAR_0);
}
