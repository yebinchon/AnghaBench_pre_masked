
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*,char const*,char const*,...) ;
 int FUNC_1 (char const*,char const*,char**) ;

int FUNC_2(const char *VAR_0, const char *VAR_1, char **VAR_2) {
        const char *VAR_3, *VAR_4;

        VAR_3 = FUNC_0("man:", VAR_0, "(", VAR_1, ")");
        VAR_4 = FUNC_0(VAR_0, "(", VAR_1, ") man page");

        return FUNC_1(VAR_3, VAR_4, VAR_2);
}
