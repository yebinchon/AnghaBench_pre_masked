
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int preference; } ;
typedef TYPE_1__ sd_dhcp6_lease ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

int FUNC_1(sd_dhcp6_lease *VAR_1, uint8_t *VAR_2) {
        FUNC_0(VAR_2, -VAR_0);

        if (!VAR_1)
                return -VAR_0;

        *VAR_2 = VAR_1->preference;

        return 0;
}
