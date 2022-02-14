
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dns_count; int dns_allocated; int dns; } ;
typedef TYPE_1__ uint8_t ;
typedef TYPE_1__ sd_dhcp6_lease ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,size_t,int *,int,int *) ;
 int FUNC_2 (int ,int,char*) ;

int FUNC_3(sd_dhcp6_lease *VAR_2, uint8_t *VAR_3, size_t VAR_4) {
        int VAR_5;

        FUNC_0(VAR_2, -VAR_0);
        FUNC_0(VAR_3, -VAR_0);

        if (!VAR_4)
                return 0;

        VAR_5 = FUNC_1(VAR_3, VAR_4, &VAR_2->dns,
                                        VAR_2->dns_count,
                                        &VAR_2->dns_allocated);
        if (VAR_5 < 0)
                return FUNC_2(VAR_1, VAR_5, "Invalid DNS server option: %m");

        VAR_2->dns_count = VAR_5;

        return 0;
}
