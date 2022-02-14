
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double usec_t ;
typedef double uint32_t ;


 int VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (double*) ;
 int FUNC_1 (double*) ;

int FUNC_2(usec_t VAR_2, uint32_t *VAR_3) {
        static double VAR_4 = -1;
        usec_t VAR_5;
        int VAR_6;

        FUNC_0(VAR_3);

        if (VAR_4 < 0) {
                VAR_6 = FUNC_1(&VAR_4);
                if (VAR_6 < 0)
                        return VAR_6;
        }

        VAR_5 = VAR_2 * VAR_4;
        if (VAR_5 > VAR_1)
                return -VAR_0;

        *VAR_3 = VAR_5;
        return 0;
}
