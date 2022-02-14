
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,char*,char const*) ;
 int FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 (char const*) ;
 char const* FUNC_4 (char const*,char const*,...) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

int FUNC_6(const char *VAR_2, const char *VAR_3, const char *VAR_4, const char *VAR_5) {



        const char *VAR_6, *VAR_7;

        VAR_6 = FUNC_3(VAR_5) ? VAR_5 : FUNC_4("../", VAR_5);
        VAR_7 = FUNC_4(VAR_2, "/", VAR_3, ".", VAR_4, "/", FUNC_0(VAR_5));

        FUNC_2(VAR_7, 0755);
        if (FUNC_5(VAR_6, VAR_7) < 0)
                if (VAR_1 != VAR_0)
                        return FUNC_1(VAR_1, "Failed to create symlink \"%s\": %m", VAR_7);

        return 0;
}
