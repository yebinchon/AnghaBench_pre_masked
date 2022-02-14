
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct in_addr {int s_addr; } ;
typedef int sd_dhcp_lease ;
struct TYPE_9__ {struct in_addr in; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_8__ {TYPE_1__ in; } ;
struct TYPE_10__ {int table; int protocol; int scope; TYPE_3__ prefsrc; int dst_prefixlen; TYPE_2__ dst; int family; } ;
typedef TYPE_4__ Route ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct in_addr*) ;
 int FUNC_1 (TYPE_4__**) ;
 int FUNC_2 (int *,struct in_addr*) ;

__attribute__((used)) static int FUNC_3(
                const sd_dhcp_lease *VAR_3,
                uint32_t VAR_4,
                const struct in_addr *VAR_5,
                Route **VAR_6) {

        Route *VAR_7;
        struct in_addr VAR_8;
        int VAR_9;

        VAR_9 = FUNC_2((sd_dhcp_lease*) VAR_3, &VAR_8);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_1(&VAR_7);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_7->family = VAR_0;
        VAR_7->dst.in.s_addr = VAR_5->s_addr & VAR_8.s_addr;
        VAR_7->dst_prefixlen = FUNC_0(&VAR_8);
        VAR_7->prefsrc.in = *VAR_5;
        VAR_7->scope = VAR_2;
        VAR_7->protocol = VAR_1;
        VAR_7->table = VAR_4;
        *VAR_6 = VAR_7;
        return 0;
}
