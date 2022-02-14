
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ default_lease_time; } ;
typedef TYPE_1__ sd_dhcp_server ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(sd_dhcp_server *VAR_1, uint32_t VAR_2) {
        FUNC_0(VAR_1, -VAR_0);

        if (VAR_2 == VAR_1->default_lease_time)
                return 0;

        VAR_1->default_lease_time = VAR_2;
        return 1;
}
