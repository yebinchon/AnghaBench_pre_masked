
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int FILE ;






 int FUNC_0 (int *,char*) ;
 unsigned int const VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_3 ;
 int FUNC_3 (int *,char const*,int ) ;

void FUNC_4(const unsigned int VAR_4, const char *VAR_5, va_list VAR_6) {
    if (VAR_4 < VAR_0) {
        return;
    }

    FUNC_1(&VAR_2);
    FILE *VAR_7 = VAR_1;

    switch (VAR_4) {
        case 131:
            FUNC_0(VAR_7, "DEBUG: ");
            break;
        case 129:
            FUNC_0(VAR_7, "MSG: ");
            break;
        case 128:
            FUNC_0(VAR_7, "WARN: ");
            break;
        case 130:
            VAR_7 = VAR_3;
            FUNC_0(VAR_7, "ERR: ");
            break;
    }

    FUNC_3(VAR_7, VAR_5, VAR_6);
    FUNC_0(VAR_7, "\n");
    FUNC_2(&VAR_2);
}
