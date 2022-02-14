
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t serverid_len; int * serverid; } ;
typedef TYPE_1__ sd_dhcp6_lease ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(sd_dhcp6_lease *VAR_2, uint8_t **VAR_3, size_t *VAR_4) {
        FUNC_0(VAR_2, -VAR_0);

        if (!VAR_2->serverid)
                return -VAR_1;

        if (VAR_3)
                *VAR_3 = VAR_2->serverid;
        if (VAR_4)
                *VAR_4 = VAR_2->serverid_len;

        return 0;
}
