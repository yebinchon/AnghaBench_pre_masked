
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct siphash {int dummy; } ;
struct TYPE_4__ {int family; int from; int from_prefixlen; int to; int to_prefixlen; int tos; int fwmark; int fwmask; int priority; int table; int protocol; int sport; int dport; int* iif; int* oif; int invert_rule; } ;
typedef TYPE_1__ RoutingPolicyRule ;




 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int*,int,struct siphash*) ;
 int FUNC_3 (int ,struct siphash*) ;
 int FUNC_4 (int*) ;

__attribute__((used)) static void FUNC_5(const RoutingPolicyRule *VAR_0, struct siphash *VAR_1) {
        FUNC_1(VAR_0);

        FUNC_2(&VAR_0->family, sizeof(VAR_0->family), VAR_1);

        switch (VAR_0->family) {
        case 129:
        case 128:
                FUNC_2(&VAR_0->from, FUNC_0(VAR_0->family), VAR_1);
                FUNC_2(&VAR_0->from_prefixlen, sizeof(VAR_0->from_prefixlen), VAR_1);

                FUNC_2(&VAR_0->to, FUNC_0(VAR_0->family), VAR_1);
                FUNC_2(&VAR_0->to_prefixlen, sizeof(VAR_0->to_prefixlen), VAR_1);

                FUNC_3(VAR_0->invert_rule, VAR_1);

                FUNC_2(&VAR_0->tos, sizeof(VAR_0->tos), VAR_1);
                FUNC_2(&VAR_0->fwmark, sizeof(VAR_0->fwmark), VAR_1);
                FUNC_2(&VAR_0->fwmask, sizeof(VAR_0->fwmask), VAR_1);
                FUNC_2(&VAR_0->priority, sizeof(VAR_0->priority), VAR_1);
                FUNC_2(&VAR_0->table, sizeof(VAR_0->table), VAR_1);

                FUNC_2(&VAR_0->protocol, sizeof(VAR_0->protocol), VAR_1);
                FUNC_2(&VAR_0->sport, sizeof(VAR_0->sport), VAR_1);
                FUNC_2(&VAR_0->dport, sizeof(VAR_0->dport), VAR_1);

                if (VAR_0->iif)
                        FUNC_2(VAR_0->iif, FUNC_4(VAR_0->iif), VAR_1);

                if (VAR_0->oif)
                        FUNC_2(VAR_0->oif, FUNC_4(VAR_0->oif), VAR_1);

                break;
        default:

                break;
        }
}
