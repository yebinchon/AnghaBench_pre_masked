
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,char*,char const*,int const,char*,char const*,int const,char*,char const*,int const,char*) ;

void FUNC_2(
    FILE* VAR_1,
    char const* VAR_2,
    char const* VAR_3,
    char const* VAR_4) {
    int const VAR_5 = VAR_0 - FUNC_0(VAR_2);
    int const VAR_6 = VAR_0 - FUNC_0(VAR_3);
    int const VAR_7 = VAR_0 - FUNC_0(VAR_4);

    FUNC_1(
        VAR_1,
        "%s, %*s%s, %*s%s, %*s",
        VAR_2,
        VAR_5,
        "",
        VAR_3,
        VAR_6,
        "",
        VAR_4,
        VAR_7,
        "");
}
