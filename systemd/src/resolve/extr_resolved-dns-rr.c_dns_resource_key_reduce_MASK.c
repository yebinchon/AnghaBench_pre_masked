
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {unsigned int n_ref; } ;
typedef TYPE_1__ DnsResourceKey ;


 int FUNC_0 (TYPE_1__**) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

bool FUNC_4(DnsResourceKey **VAR_0, DnsResourceKey **VAR_1) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);






        if (!*VAR_0)
                return 0;
        if (!*VAR_1)
                return 0;


        if ((*VAR_0)->n_ref == (unsigned) -1)
                return 0;
        if ((*VAR_1)->n_ref == (unsigned) -1)
                return 0;


        if (*VAR_0 == *VAR_1)
                return 1;


        if (FUNC_1(*VAR_0, *VAR_1) <= 0)
                return 0;


        if ((*VAR_0)->n_ref > (*VAR_1)->n_ref) {
                FUNC_3(*VAR_1);
                *VAR_1 = FUNC_2(*VAR_0);
        } else {
                FUNC_3(*VAR_0);
                *VAR_0 = FUNC_2(*VAR_1);
        }

        return 1;
}
