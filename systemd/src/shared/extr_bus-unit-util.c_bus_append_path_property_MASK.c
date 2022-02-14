
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;


 scalar_t__ FUNC_0 (char const*,char*,char*,char*,char*,char*) ;
 int FUNC_1 (int *,char const*,char const*) ;
 int FUNC_2 (int *,char const*,char const*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int *,char*,char*,char*,int,...) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(sd_bus_message *VAR_0, const char *VAR_1, const char *VAR_2) {
        int VAR_3;

        if (FUNC_6(VAR_1, "MakeDirectory"))
                return FUNC_1(VAR_0, VAR_1, VAR_2);

        if (FUNC_6(VAR_1, "DirectoryMode"))
                return FUNC_2(VAR_0, VAR_1, VAR_2);

        if (FUNC_0(VAR_1,
                       "PathExists", "PathExistsGlob", "PathChanged",
                       "PathModified", "DirectoryNotEmpty")) {
                if (FUNC_4(VAR_2))
                        VAR_3 = FUNC_5(VAR_0, "(sv)", "Paths", "a(ss)", 0);
                else
                        VAR_3 = FUNC_5(VAR_0, "(sv)", "Paths", "a(ss)", 1, VAR_1, VAR_2);
                if (VAR_3 < 0)
                        return FUNC_3(VAR_3);

                return 1;
        }

        return 0;
}
