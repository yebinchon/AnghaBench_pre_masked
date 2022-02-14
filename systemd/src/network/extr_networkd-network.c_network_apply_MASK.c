
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ n_dns; int route_domains; int search_domains; int ntp; int network; } ;
typedef TYPE_1__ Network ;
typedef TYPE_1__ Link ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(Network *VAR_0, Link *VAR_1) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_1->network = FUNC_2(VAR_0);

        if (VAR_0->n_dns > 0 ||
            !FUNC_4(VAR_0->ntp) ||
            !FUNC_3(VAR_0->search_domains) ||
            !FUNC_3(VAR_0->route_domains))
                FUNC_1(VAR_1);

        return 0;
}
