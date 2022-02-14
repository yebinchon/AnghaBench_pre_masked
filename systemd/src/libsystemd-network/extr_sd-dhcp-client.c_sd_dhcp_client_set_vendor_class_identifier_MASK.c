
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vendor_class_identifier; } ;
typedef TYPE_1__ sd_dhcp_client ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,char const*) ;

int FUNC_2(
                sd_dhcp_client *VAR_1,
                const char *VAR_2) {

        FUNC_0(VAR_1, -VAR_0);

        return FUNC_1(&VAR_1->vendor_class_identifier, VAR_2);
}
