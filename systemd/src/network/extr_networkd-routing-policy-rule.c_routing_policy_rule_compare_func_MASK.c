
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int family; int from_prefixlen; int to_prefixlen; int invert_rule; int tos; int fwmark; int fwmask; int priority; int table; int protocol; int oif; int iif; int dport; int sport; int to; int from; } ;
typedef TYPE_1__ RoutingPolicyRule ;




 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(const RoutingPolicyRule *VAR_0, const RoutingPolicyRule *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_0(VAR_0->family, VAR_1->family);
        if (VAR_2 != 0)
                return VAR_2;

        switch (VAR_0->family) {
        case 129:
        case 128:
                VAR_2 = FUNC_0(VAR_0->from_prefixlen, VAR_1->from_prefixlen);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_2(&VAR_0->from, &VAR_1->from, FUNC_1(VAR_0->family));
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_0(VAR_0->to_prefixlen, VAR_1->to_prefixlen);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_2(&VAR_0->to, &VAR_1->to, FUNC_1(VAR_0->family));
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_0(VAR_0->invert_rule, VAR_1->invert_rule);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_0(VAR_0->tos, VAR_1->tos);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_0(VAR_0->fwmark, VAR_1->fwmark);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_0(VAR_0->fwmask, VAR_1->fwmask);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_0(VAR_0->priority, VAR_1->priority);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_0(VAR_0->table, VAR_1->table);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_0(VAR_0->protocol, VAR_1->protocol);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_2(&VAR_0->sport, &VAR_1->sport, sizeof(VAR_0->sport));
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_2(&VAR_0->dport, &VAR_1->dport, sizeof(VAR_0->dport));
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_3(VAR_0->iif, VAR_1->iif);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_3(VAR_0->oif, VAR_1->oif);
                if (VAR_2 != 0)
                        return VAR_2;

                return 0;
        default:

                return 0;
        }
}
