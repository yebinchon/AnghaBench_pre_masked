
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int family; int dst_prefixlen; int src_prefixlen; int tos; int priority; int table; int protocol; int scope; int type; int initcwnd; int initrwnd; int prefsrc; int gw; int src; int dst; } ;
typedef TYPE_1__ Route ;




 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_3(const Route *VAR_0, const Route *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_0(VAR_0->family, VAR_1->family);
        if (VAR_2 != 0)
                return VAR_2;

        switch (VAR_0->family) {
        case 129:
        case 128:
                VAR_2 = FUNC_0(VAR_0->dst_prefixlen, VAR_1->dst_prefixlen);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_2(&VAR_0->dst, &VAR_1->dst, FUNC_1(VAR_0->family));
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_0(VAR_0->src_prefixlen, VAR_1->src_prefixlen);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_2(&VAR_0->src, &VAR_1->src, FUNC_1(VAR_0->family));
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_2(&VAR_0->gw, &VAR_1->gw, FUNC_1(VAR_0->family));
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_2(&VAR_0->prefsrc, &VAR_1->prefsrc, FUNC_1(VAR_0->family));
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_0(VAR_0->tos, VAR_1->tos);
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

                VAR_2 = FUNC_0(VAR_0->scope, VAR_1->scope);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_0(VAR_0->type, VAR_1->type);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_0(VAR_0->initcwnd, VAR_1->initcwnd);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_2 = FUNC_0(VAR_0->initrwnd, VAR_1->initrwnd);
                if (VAR_2 != 0)
                        return VAR_2;

                return 0;
        default:

                return 0;
        }
}
