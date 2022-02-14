
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_dhcp6_lease ;
struct TYPE_4__ {int * lease; } ;
typedef TYPE_1__ sd_dhcp6_client ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(sd_dhcp6_client *VAR_2, sd_dhcp6_lease **VAR_3) {
        FUNC_0(VAR_2, -VAR_0);

        if (!VAR_2->lease)
                return -VAR_1;

        if (VAR_3)
                *VAR_3 = VAR_2->lease;

        return 0;
}
