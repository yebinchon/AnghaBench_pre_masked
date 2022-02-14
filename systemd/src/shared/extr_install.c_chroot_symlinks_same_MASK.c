
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char const*,char const*,int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char*,char const*) ;

__attribute__((used)) static bool FUNC_4(const char *VAR_0, const char *VAR_1, const char *VAR_2, const char *VAR_3) {
        FUNC_0(FUNC_2(VAR_1));




        if (!VAR_0)
                VAR_0 = "/";

        VAR_2 = FUNC_3(FUNC_2(VAR_2) ? VAR_0 : VAR_1, "/", VAR_2);
        VAR_3 = FUNC_3(FUNC_2(VAR_3) ? VAR_0 : VAR_1, "/", VAR_3);
        return FUNC_1(VAR_2, VAR_3, 0);
}
