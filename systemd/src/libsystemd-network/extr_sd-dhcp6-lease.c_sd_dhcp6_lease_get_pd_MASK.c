
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct in6_addr {TYPE_2__* prefix_iter; } ;
typedef struct in6_addr uint8_t ;
typedef struct in6_addr uint32_t ;
typedef struct in6_addr sd_dhcp6_lease ;
struct TYPE_3__ {int lifetime_valid; int lifetime_preferred; struct in6_addr prefixlen; int address; } ;
struct TYPE_4__ {struct TYPE_4__* addresses_next; TYPE_1__ iapdprefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in6_addr*,int ) ;
 struct in6_addr FUNC_1 (int ) ;
 int FUNC_2 (struct in6_addr*,int *,int) ;

int FUNC_3(sd_dhcp6_lease *VAR_2, struct in6_addr *VAR_3,
                          uint8_t *VAR_4,
                          uint32_t *VAR_5,
                          uint32_t *VAR_6) {
        FUNC_0(VAR_2, -VAR_0);
        FUNC_0(VAR_3, -VAR_0);
        FUNC_0(VAR_4, -VAR_0);
        FUNC_0(VAR_5, -VAR_0);
        FUNC_0(VAR_6, -VAR_0);

        if (!VAR_2->prefix_iter)
                return -VAR_1;

        FUNC_2(VAR_3, &VAR_2->prefix_iter->iapdprefix.address,
               sizeof(struct in6_addr));
        *VAR_4 = VAR_2->prefix_iter->iapdprefix.prefixlen;
        *VAR_5 =
                FUNC_1(VAR_2->prefix_iter->iapdprefix.lifetime_preferred);
        *VAR_6 =
                FUNC_1(VAR_2->prefix_iter->iapdprefix.lifetime_valid);

        VAR_2->prefix_iter = VAR_2->prefix_iter->addresses_next;

        return 0;
}
