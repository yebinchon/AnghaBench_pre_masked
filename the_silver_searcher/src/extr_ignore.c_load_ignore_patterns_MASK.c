
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int ignores ;
typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,size_t*,int *) ;
 int FUNC_5 (char*,char const*) ;

void FUNC_6(ignores *VAR_0, const char *VAR_1) {
    FILE *VAR_2 = ((void*)0);
    VAR_2 = FUNC_2(VAR_1, "r");
    if (VAR_2 == ((void*)0)) {
        FUNC_5("Skipping ignore file %s: not readable", VAR_1);
        return;
    }
    FUNC_5("Loading ignore file %s.", VAR_1);

    char *VAR_3 = ((void*)0);
    ssize_t VAR_4 = 0;
    size_t VAR_5 = 0;

    while ((VAR_4 = FUNC_4(&VAR_3, &VAR_5, VAR_2)) > 0) {
        if (VAR_4 == 0 || VAR_3[0] == '\n' || VAR_3[0] == '#') {
            continue;
        }
        if (VAR_3[VAR_4 - 1] == '\n') {
            VAR_3[VAR_4 - 1] = '\0';
        }
        FUNC_0(VAR_0, VAR_3);
    }

    FUNC_3(VAR_3);
    FUNC_1(VAR_2);
}
