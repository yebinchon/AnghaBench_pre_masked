
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,char*,char**) ;

__attribute__((used)) static void FUNC_6(char *VAR_1, char *VAR_2, unsigned VAR_3, int *VAR_4) {
    char *VAR_5;
    char *VAR_6;

    VAR_6 = FUNC_5(VAR_1, ";", &VAR_5);
    if (VAR_6 == ((void*)0))
        return;
    FUNC_2(VAR_2, VAR_6, FUNC_0(FUNC_3(VAR_6), VAR_3 - 1));

    while ((VAR_6 = FUNC_5(((void*)0), ";", &VAR_5)) != ((void*)0)) {
        if (FUNC_4(VAR_6, "timeout=", 8) == 0) {
            *VAR_4 = FUNC_1(VAR_6 + 8);
            if (*VAR_4 > 5)
                *VAR_4 -= VAR_0;
            else if (*VAR_4 > 0)
                *VAR_4 = 1;
        }
    }
}
