
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* scope; TYPE_1__* query; int search_domain; int transactions; } ;
struct TYPE_11__ {int query_candidates; } ;
struct TYPE_10__ {int candidates; } ;
typedef TYPE_3__ DnsQueryCandidate ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;

DnsQueryCandidate* FUNC_5(DnsQueryCandidate *VAR_2) {

        if (!VAR_2)
                return ((void*)0);

        FUNC_1(VAR_2);

        FUNC_4(VAR_2->transactions);
        FUNC_2(VAR_2->search_domain);

        if (VAR_2->query)
                FUNC_0(VAR_0, VAR_2->query->candidates, VAR_2);

        if (VAR_2->scope)
                FUNC_0(VAR_1, VAR_2->scope->query_candidates, VAR_2);

        return FUNC_3(VAR_2);
}
