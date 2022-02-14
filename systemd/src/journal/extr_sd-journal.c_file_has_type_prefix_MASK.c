
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (char const*,char*) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_0, const char *VAR_1) {
        const char *VAR_2, *VAR_3, *VAR_4;

        VAR_2 = FUNC_2(VAR_0, ".journal");
        VAR_3 = FUNC_2(VAR_2, "~");
        VAR_4 = FUNC_2(VAR_0, "@");

        return FUNC_0(VAR_1, VAR_2, VAR_3) ||
               FUNC_1(VAR_1, VAR_4);
}
