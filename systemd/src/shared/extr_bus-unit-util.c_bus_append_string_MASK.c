
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char const*,char*,char const*) ;

__attribute__((used)) static int FUNC_2(sd_bus_message *VAR_0, const char *VAR_1, const char *VAR_2) {
        int VAR_3;

        VAR_3 = FUNC_1(VAR_0, "(sv)", VAR_1, "s", VAR_2);
        if (VAR_3 < 0)
                return FUNC_0(VAR_3);

        return 1;
}
