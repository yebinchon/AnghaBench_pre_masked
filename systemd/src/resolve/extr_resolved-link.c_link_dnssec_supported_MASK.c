
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Link ;
typedef int DnsServer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

bool FUNC_4(Link *VAR_1) {
        DnsServer *VAR_2;

        FUNC_0(VAR_1);

        if (FUNC_3(VAR_1) == VAR_0)
                return 0;

        VAR_2 = FUNC_2(VAR_1);
        if (VAR_2)
                return FUNC_1(VAR_2);

        return 1;
}
