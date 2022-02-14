
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dhcp_send_hostname; int dhcp_use_mtu; int dhcp_use_routes; int dhcp_use_timezone; int dhcp_vendor_class_identifier; int dhcp_client_identifier; int dhcp_anonymize; } ;
typedef TYPE_1__ Network ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(Network *VAR_1) {
        if (!VAR_1->dhcp_anonymize)
                return;


        VAR_1->dhcp_send_hostname = 0;







        VAR_1->dhcp_client_identifier = VAR_0;


        VAR_1->dhcp_vendor_class_identifier = FUNC_0(VAR_1->dhcp_vendor_class_identifier);
        VAR_1->dhcp_use_mtu = 0;


        VAR_1->dhcp_use_routes = 1;


        VAR_1->dhcp_use_timezone = 0;
}
