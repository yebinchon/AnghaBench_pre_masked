
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int error_code; int query; scalar_t__ search_domain; } ;
typedef scalar_t__ DnsTransactionState ;
typedef TYPE_1__ DnsQueryCandidate ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char*) ;

void FUNC_8(DnsQueryCandidate *VAR_1) {
        DnsTransactionState VAR_2;
        int VAR_3;

        FUNC_1(VAR_1);

        VAR_2 = FUNC_5(VAR_1);

        if (FUNC_0(VAR_2))
                return;

        if (VAR_2 != VAR_0 && VAR_1->search_domain) {

                VAR_3 = FUNC_3(VAR_1);
                if (VAR_3 < 0)
                        goto fail;

                if (VAR_3 > 0) {


                        VAR_3 = FUNC_4(VAR_1);
                        if (VAR_3 < 0)
                                goto fail;

                        if (VAR_3 > 0) {


                                VAR_3 = FUNC_2(VAR_1);
                                if (VAR_3 < 0)
                                        goto fail;

                                return;
                        }
                }

        }

        FUNC_6(VAR_1->query);
        return;

fail:
        FUNC_7(VAR_3, "Failed to follow search domains: %m");
        VAR_1->error_code = VAR_3;
        FUNC_6(VAR_1->query);
}
