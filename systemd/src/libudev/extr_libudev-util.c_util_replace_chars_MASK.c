
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,size_t) ;
 scalar_t__ FUNC_4 (char,char const*) ;

size_t FUNC_5(char *VAR_0, const char *VAR_1) {
        size_t VAR_2 = 0, VAR_3 = 0;

        FUNC_0(VAR_0);

        while (VAR_0[VAR_2] != '\0') {
                int VAR_4;

                if (FUNC_4(VAR_0[VAR_2], VAR_1)) {
                        VAR_2++;
                        continue;
                }


                if (VAR_0[VAR_2] == '\\' && VAR_0[VAR_2+1] == 'x') {
                        VAR_2 += 2;
                        continue;
                }


                VAR_4 = FUNC_3(VAR_0 + VAR_2, (size_t) -1);
                if (VAR_4 > 1) {
                        VAR_2 += VAR_4;
                        continue;
                }


                if (FUNC_1(VAR_0[VAR_2]) && VAR_1 && FUNC_2(VAR_1, ' ')) {
                        VAR_0[VAR_2] = ' ';
                        VAR_2++;
                        VAR_3++;
                        continue;
                }


                VAR_0[VAR_2] = '_';
                VAR_2++;
                VAR_3++;
        }
        return VAR_3;
}
