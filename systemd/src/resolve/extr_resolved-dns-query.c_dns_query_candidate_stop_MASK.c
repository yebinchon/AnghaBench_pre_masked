
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int transactions; } ;
struct TYPE_8__ {int notify_query_candidates_done; int notify_query_candidates; } ;
typedef TYPE_1__ DnsTransaction ;
typedef TYPE_2__ DnsQueryCandidate ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(DnsQueryCandidate *VAR_0) {
        DnsTransaction *VAR_1;

        FUNC_0(VAR_0);

        while ((VAR_1 = FUNC_3(VAR_0->transactions))) {
                FUNC_2(VAR_1->notify_query_candidates, VAR_0);
                FUNC_2(VAR_1->notify_query_candidates_done, VAR_0);
                FUNC_1(VAR_1);
        }
}
