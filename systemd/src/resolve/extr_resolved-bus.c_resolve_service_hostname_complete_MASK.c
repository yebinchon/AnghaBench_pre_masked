
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; int auxiliary_result; struct TYPE_6__* auxiliary_for; } ;
typedef TYPE_1__ DnsQuery ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(DnsQuery *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);
        FUNC_0(VAR_2->auxiliary_for);

        if (VAR_2->state != VAR_1) {
                FUNC_2(VAR_2->auxiliary_for);
                return;
        }

        VAR_3 = FUNC_1(VAR_2);
        if (VAR_3 == VAR_0)
                return;


        VAR_2->auxiliary_result = VAR_3;
        FUNC_2(VAR_2->auxiliary_for);
}
