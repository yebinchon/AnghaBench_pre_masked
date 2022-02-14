
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char*) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0) {
        char VAR_1[11];
        const char *VAR_2;
        size_t VAR_3;




        VAR_2 = FUNC_0(VAR_0);
        if (FUNC_1(VAR_2)) {
                FUNC_3("(...)");
                return;
        }

        VAR_3 = FUNC_4(VAR_2);
        if (VAR_3 > 8) {



                VAR_2 = VAR_2 + VAR_3 - 8;
                VAR_3 = 8;
        }

        VAR_1[0] = '(';
        FUNC_2(VAR_1+1, VAR_2, VAR_3);
        VAR_1[1+VAR_3] = ')';
        VAR_1[1+VAR_3+1] = 0;

        FUNC_3(VAR_1);
}
