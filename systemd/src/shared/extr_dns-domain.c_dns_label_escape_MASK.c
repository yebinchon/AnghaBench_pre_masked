
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const,char,char) ;
 int FUNC_1 (char const*) ;

int FUNC_2(const char *VAR_3, size_t VAR_4, char *VAR_5, size_t VAR_6) {
        char *VAR_7;





        if (VAR_4 <= 0 || VAR_4 > VAR_0)
                return -VAR_1;
        if (VAR_6 < 1)
                return -VAR_2;

        FUNC_1(VAR_3);
        FUNC_1(VAR_5);

        VAR_7 = VAR_5;
        while (VAR_4 > 0) {

                if (FUNC_0(*VAR_3, '.', '\\')) {



                        if (VAR_6 < 3)
                                return -VAR_2;

                        *(VAR_7++) = '\\';
                        *(VAR_7++) = *VAR_3;

                        VAR_6 -= 2;

                } else if (FUNC_0(*VAR_3, '_', '-') ||
                           (*VAR_3 >= '0' && *VAR_3 <= '9') ||
                           (*VAR_3 >= 'a' && *VAR_3 <= 'z') ||
                           (*VAR_3 >= 'A' && *VAR_3 <= 'Z')) {



                        if (VAR_6 < 2)
                                return -VAR_2;

                        *(VAR_7++) = *VAR_3;
                        VAR_6 -= 1;

                } else {



                        if (VAR_6 < 5)
                                return -VAR_2;

                        *(VAR_7++) = '\\';
                        *(VAR_7++) = '0' + (char) ((uint8_t) *VAR_3 / 100);
                        *(VAR_7++) = '0' + (char) (((uint8_t) *VAR_3 / 10) % 10);
                        *(VAR_7++) = '0' + (char) ((uint8_t) *VAR_3 % 10);

                        VAR_6 -= 4;
                }

                VAR_3++;
                VAR_4--;
        }

        *VAR_7 = 0;
        return (int) (VAR_7 - VAR_5);
}
