
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;


 int VAR_0 ;
 char* FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,char const*,int) ;

char *FUNC_2(const char *VAR_1, char *VAR_2) {
    char *VAR_3;
    char VAR_4[VAR_0 + 1];
    FUNC_1(VAR_4, VAR_1, sizeof(VAR_4));
    VAR_3 = VAR_4;
    while (*VAR_3) {
        if (*VAR_3 == '/') {
            *VAR_3 = '\\';
        }
        VAR_3++;
    }
    return FUNC_0(VAR_2, VAR_4, VAR_0);
}
