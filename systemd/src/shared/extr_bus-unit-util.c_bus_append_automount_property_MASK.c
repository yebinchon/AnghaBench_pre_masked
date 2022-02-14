
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;


 int FUNC_0 (int *,char const*,char const*) ;
 int FUNC_1 (int *,char const*,char const*) ;
 int FUNC_2 (int *,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(sd_bus_message *VAR_0, const char *VAR_1, const char *VAR_2) {
        if (FUNC_3(VAR_1, "Where"))
                return FUNC_2(VAR_0, VAR_1, VAR_2);

        if (FUNC_3(VAR_1, "DirectoryMode"))
                return FUNC_0(VAR_0, VAR_1, VAR_2);

        if (FUNC_3(VAR_1, "TimeoutIdleSec"))
                return FUNC_1(VAR_0, VAR_1, VAR_2);

        return 0;
}
