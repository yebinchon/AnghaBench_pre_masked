
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* domains_next; scalar_t__ linked; } ;
struct TYPE_10__ {TYPE_3__* search_domain; int scope; } ;
struct TYPE_9__ {struct TYPE_9__* domains_next; int route_only; } ;
typedef TYPE_1__ DnsSearchDomain ;
typedef TYPE_2__ DnsQueryCandidate ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(DnsQueryCandidate *VAR_0) {
        DnsSearchDomain *VAR_1 = ((void*)0);

        FUNC_0(VAR_0);

        if (VAR_0->search_domain && VAR_0->search_domain->linked)
                VAR_1 = VAR_0->search_domain->domains_next;
        else
                VAR_1 = FUNC_1(VAR_0->scope);

        for (;;) {
                if (!VAR_1)
                        return 0;

                if (!VAR_1->route_only)
                        break;


                VAR_1 = VAR_1->domains_next;
        }

        FUNC_3(VAR_0->search_domain);
        VAR_0->search_domain = FUNC_2(VAR_1);

        return 1;
}
