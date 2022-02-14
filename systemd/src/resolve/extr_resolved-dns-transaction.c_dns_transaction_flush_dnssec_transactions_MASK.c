
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int notify_transactions_done; int notify_transactions; int dnssec_transactions; } ;
typedef TYPE_1__ DnsTransaction ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(DnsTransaction *VAR_0) {
        DnsTransaction *VAR_1;

        FUNC_0(VAR_0);

        while ((VAR_1 = FUNC_3(VAR_0->dnssec_transactions))) {
                FUNC_2(VAR_1->notify_transactions, VAR_0);
                FUNC_2(VAR_1->notify_transactions_done, VAR_0);
                FUNC_1(VAR_1);
        }
}
