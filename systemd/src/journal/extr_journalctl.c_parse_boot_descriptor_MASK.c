
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_id128_t ;


 int VAR_0 ;
 int FUNC_0 (char const,int ,char,char) ;
 int VAR_1 ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (char*,int *) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,int) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2, sd_id128_t *VAR_3, int *VAR_4) {
        sd_id128_t VAR_5 = VAR_1;
        int VAR_6 = 0, VAR_7;

        if (FUNC_3(VAR_2, "all")) {
                *VAR_3 = VAR_1;
                *VAR_4 = 0;
                return 0;
        } else if (FUNC_4(VAR_2) >= 32) {
                char *VAR_8;

                VAR_8 = FUNC_5(VAR_2, 32);
                VAR_7 = FUNC_2(VAR_8, &VAR_5);
                if (VAR_7 >= 0)
                        VAR_2 += 32;

                if (!FUNC_0(*VAR_2, 0, '-', '+'))
                        return -VAR_0;

                if (*VAR_2 != 0) {
                        VAR_7 = FUNC_1(VAR_2, &VAR_6);
                        if (VAR_7 < 0)
                                return VAR_7;
                }
        } else {
                VAR_7 = FUNC_1(VAR_2, &VAR_6);
                if (VAR_7 < 0)
                        return VAR_7;
        }

        if (VAR_3)
                *VAR_3 = VAR_5;

        if (VAR_4)
                *VAR_4 = VAR_6;

        return 1;
}
