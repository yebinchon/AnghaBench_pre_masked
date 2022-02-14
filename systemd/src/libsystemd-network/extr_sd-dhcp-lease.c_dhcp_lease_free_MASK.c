
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct sd_dhcp_raw_option {struct sd_dhcp_raw_option* data; } ;
struct TYPE_7__ {int search_domains; struct sd_dhcp_raw_option* vendor_specific; struct sd_dhcp_raw_option* client_id; struct sd_dhcp_raw_option* static_route; struct sd_dhcp_raw_option* sip; struct sd_dhcp_raw_option* ntp; struct sd_dhcp_raw_option* dns; struct sd_dhcp_raw_option* domainname; struct sd_dhcp_raw_option* hostname; struct sd_dhcp_raw_option* timezone; struct sd_dhcp_raw_option* router; struct sd_dhcp_raw_option* root_path; struct sd_dhcp_raw_option* private_options; } ;
typedef TYPE_1__ sd_dhcp_lease ;


 int FUNC_0 (int ,struct sd_dhcp_raw_option*,struct sd_dhcp_raw_option*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct sd_dhcp_raw_option*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static sd_dhcp_lease *FUNC_5(sd_dhcp_lease *VAR_1) {
        FUNC_1(VAR_1);

        while (VAR_1->private_options) {
                struct sd_dhcp_raw_option *VAR_2 = VAR_1->private_options;

                FUNC_0(VAR_0, VAR_1->private_options, VAR_2);

                FUNC_2(VAR_2->data);
                FUNC_2(VAR_2);
        }

        FUNC_2(VAR_1->root_path);
        FUNC_2(VAR_1->router);
        FUNC_2(VAR_1->timezone);
        FUNC_2(VAR_1->hostname);
        FUNC_2(VAR_1->domainname);
        FUNC_2(VAR_1->dns);
        FUNC_2(VAR_1->ntp);
        FUNC_2(VAR_1->sip);
        FUNC_2(VAR_1->static_route);
        FUNC_2(VAR_1->client_id);
        FUNC_2(VAR_1->vendor_specific);
        FUNC_4(VAR_1->search_domains);
        return FUNC_3(VAR_1);
}
