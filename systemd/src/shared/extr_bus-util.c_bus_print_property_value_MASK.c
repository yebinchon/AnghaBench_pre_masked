
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*) ;

int FUNC_4(const char *VAR_0, const char *VAR_1, bool VAR_2, const char *VAR_3) {
        FUNC_0(VAR_0);

        if (VAR_1 && !FUNC_3(VAR_1, VAR_3))
                return 0;

        if (VAR_2)
                FUNC_2(VAR_3);
        else
                FUNC_1("%s=%s\n", VAR_0, VAR_3);

        return 0;
}
