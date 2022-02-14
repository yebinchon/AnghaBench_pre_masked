
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(usec_t VAR_1, usec_t VAR_2) {
        usec_t VAR_3;

        if (VAR_1 > VAR_2)
                VAR_3 = VAR_1 - VAR_2;
        else
                VAR_3 = VAR_2 - VAR_1;

        FUNC_0(VAR_3 < 10*VAR_0);
}
