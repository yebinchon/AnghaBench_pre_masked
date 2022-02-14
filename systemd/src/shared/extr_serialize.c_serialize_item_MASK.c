
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

int FUNC_5(FILE *VAR_2, const char *VAR_3, const char *VAR_4) {
        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        if (!VAR_4)
                return 0;



        if (FUNC_4(VAR_3) + 1 + FUNC_4(VAR_4) + 1 > VAR_1) {
                FUNC_3("Attempted to serialize overly long item '%s', refusing.", VAR_3);
                return -VAR_0;
        }

        FUNC_2(VAR_3, VAR_2);
        FUNC_1('=', VAR_2);
        FUNC_2(VAR_4, VAR_2);
        FUNC_1('\n', VAR_2);

        return 1;
}
