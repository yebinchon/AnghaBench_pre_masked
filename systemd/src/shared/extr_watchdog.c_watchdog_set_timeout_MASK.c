
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_2(usec_t *VAR_3) {
        int VAR_4;

        VAR_2 = *VAR_3;



        if (VAR_1 < 0 && VAR_2 == VAR_0)
                return 0;

        if (VAR_1 < 0)
                VAR_4 = FUNC_0();
        else
                VAR_4 = FUNC_1();

        *VAR_3 = VAR_2;

        return VAR_4;
}
