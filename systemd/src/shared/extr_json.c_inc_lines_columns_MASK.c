
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (char const*,size_t) ;

__attribute__((used)) static void FUNC_2(unsigned *VAR_0, unsigned *VAR_1, const char *VAR_2, size_t VAR_3) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);
        FUNC_0(VAR_2 || VAR_3 == 0);

        while (VAR_3 > 0) {
                if (*VAR_2 == '\n') {
                        (*VAR_0)++;
                        *VAR_1 = 1;
                } else if ((signed char) *VAR_2 >= 0 && *VAR_2 < 127)
                        (*VAR_1)++;
                else {
                        int VAR_4;

                        VAR_4 = FUNC_1(VAR_2, VAR_3);
                        if (VAR_4 < 0)
                                VAR_4 = 1;
                        else if ((size_t) VAR_4 > VAR_3)
                                VAR_4 = (int) VAR_3;

                        (*VAR_1)++;

                        VAR_2 += VAR_4;
                        VAR_3 -= VAR_4;
                        continue;
                }

                VAR_2++;
                VAR_3--;
        }
}
