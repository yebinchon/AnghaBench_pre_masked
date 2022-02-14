
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sd_dhcp_client ;
struct TYPE_5__ {void* dhcp_lease_old; void* dhcp_lease; } ;
typedef TYPE_1__ Link ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(sd_dhcp_client *VAR_0, Link *VAR_1) {
        int VAR_2;

        VAR_1->dhcp_lease_old = FUNC_0(VAR_1->dhcp_lease);
        VAR_2 = FUNC_1(VAR_0, VAR_1);
        if (VAR_2 < 0) {


                FUNC_3(VAR_1->dhcp_lease);
                VAR_1->dhcp_lease = FUNC_0(VAR_1->dhcp_lease_old);
                (void) FUNC_2(VAR_1);
                return VAR_2;
        }

        return 0;
}
