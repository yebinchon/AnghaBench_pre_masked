
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* query; int clamp_ttl; int notify_query_candidates; int transactions; int notify_query_candidates_done; int scope; } ;
struct TYPE_16__ {int clamp_ttl; } ;
typedef TYPE_2__ DnsTransaction ;
typedef TYPE_2__ DnsResourceKey ;
typedef TYPE_2__ DnsQueryCandidate ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**,int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(DnsQueryCandidate *VAR_0, DnsResourceKey *VAR_1) {
        DnsTransaction *VAR_2;
        int VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_2 = FUNC_1(VAR_0->scope, VAR_1, 1);
        if (!VAR_2) {
                VAR_3 = FUNC_3(&VAR_2, VAR_0->scope, VAR_1);
                if (VAR_3 < 0)
                        return VAR_3;
        } else {
                if (FUNC_4(VAR_0->transactions, VAR_2))
                        return 0;
        }

        VAR_3 = FUNC_5(&VAR_0->transactions, ((void*)0));
        if (VAR_3 < 0)
                goto gc;

        VAR_3 = FUNC_5(&VAR_2->notify_query_candidates, ((void*)0));
        if (VAR_3 < 0)
                goto gc;

        VAR_3 = FUNC_5(&VAR_2->notify_query_candidates_done, ((void*)0));
        if (VAR_3 < 0)
                goto gc;

        VAR_3 = FUNC_6(VAR_2->notify_query_candidates, VAR_0);
        if (VAR_3 < 0)
                goto gc;

        VAR_3 = FUNC_6(VAR_0->transactions, VAR_2);
        if (VAR_3 < 0) {
                (void) FUNC_7(VAR_2->notify_query_candidates, VAR_0);
                goto gc;
        }

        VAR_2->clamp_ttl = VAR_0->query->clamp_ttl;
        return 1;

gc:
        FUNC_2(VAR_2);
        return VAR_3;
}
