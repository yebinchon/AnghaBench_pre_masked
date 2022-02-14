
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union in_addr_union {int dummy; } in_addr_union ;
struct in6_addr {int dummy; } ;
struct TYPE_10__ {struct TYPE_10__* label; scalar_t__ section; TYPE_2__* link; int in_addr; TYPE_1__* network; } ;
struct TYPE_9__ {int ipv6ll_address; int addresses_foreign; int addresses; } ;
struct TYPE_8__ {scalar_t__ n_static_addresses; int addresses_by_section; int static_addresses; } ;
typedef TYPE_3__ Address ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *,union in_addr_union const*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,TYPE_3__*) ;

void FUNC_8(Address *VAR_2) {
        if (!VAR_2)
                return;

        if (VAR_2->network) {
                FUNC_0(VAR_1, VAR_2->network->static_addresses, VAR_2);
                FUNC_1(VAR_2->network->n_static_addresses > 0);
                VAR_2->network->n_static_addresses--;

                if (VAR_2->section)
                        FUNC_3(VAR_2->network->addresses_by_section, VAR_2->section);
        }

        if (VAR_2->link) {
                FUNC_7(VAR_2->link->addresses, VAR_2);
                FUNC_7(VAR_2->link->addresses_foreign, VAR_2);

                if (FUNC_4(VAR_0, &VAR_2->in_addr, (const union in_addr_union *) &VAR_2->link->ipv6ll_address))
                        FUNC_5(&VAR_2->link->ipv6ll_address, sizeof(struct in6_addr));
        }

        FUNC_6(VAR_2->section);
        FUNC_2(VAR_2->label);
        FUNC_2(VAR_2);
}
