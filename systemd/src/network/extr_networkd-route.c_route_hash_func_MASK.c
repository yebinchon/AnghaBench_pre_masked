
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct siphash {int dummy; } ;
struct TYPE_4__ {int family; int dst_prefixlen; int dst; int src_prefixlen; int src; int gw; int prefsrc; int tos; int priority; int table; int protocol; int scope; int type; int initcwnd; int initrwnd; } ;
typedef TYPE_1__ Route ;




 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int*,int,struct siphash*) ;

__attribute__((used)) static void FUNC_3(const Route *VAR_0, struct siphash *VAR_1) {
        FUNC_1(VAR_0);

        FUNC_2(&VAR_0->family, sizeof(VAR_0->family), VAR_1);

        switch (VAR_0->family) {
        case 129:
        case 128:
                FUNC_2(&VAR_0->dst_prefixlen, sizeof(VAR_0->dst_prefixlen), VAR_1);
                FUNC_2(&VAR_0->dst, FUNC_0(VAR_0->family), VAR_1);

                FUNC_2(&VAR_0->src_prefixlen, sizeof(VAR_0->src_prefixlen), VAR_1);
                FUNC_2(&VAR_0->src, FUNC_0(VAR_0->family), VAR_1);

                FUNC_2(&VAR_0->gw, FUNC_0(VAR_0->family), VAR_1);

                FUNC_2(&VAR_0->prefsrc, FUNC_0(VAR_0->family), VAR_1);

                FUNC_2(&VAR_0->tos, sizeof(VAR_0->tos), VAR_1);
                FUNC_2(&VAR_0->priority, sizeof(VAR_0->priority), VAR_1);
                FUNC_2(&VAR_0->table, sizeof(VAR_0->table), VAR_1);
                FUNC_2(&VAR_0->protocol, sizeof(VAR_0->protocol), VAR_1);
                FUNC_2(&VAR_0->scope, sizeof(VAR_0->scope), VAR_1);
                FUNC_2(&VAR_0->type, sizeof(VAR_0->type), VAR_1);

                FUNC_2(&VAR_0->initcwnd, sizeof(VAR_0->initcwnd), VAR_1);
                FUNC_2(&VAR_0->initrwnd, sizeof(VAR_0->initrwnd), VAR_1);

                break;
        default:

                break;
        }
}
