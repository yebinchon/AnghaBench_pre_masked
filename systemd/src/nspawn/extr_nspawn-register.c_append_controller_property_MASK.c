
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,char const**) ;
 int FUNC_4 (int *,char*,char*,char*,char const*) ;

__attribute__((used)) static int FUNC_5(sd_bus *VAR_0, sd_bus_message *VAR_1) {
        const char *VAR_2;
        int VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_3 = FUNC_3(VAR_0, &VAR_2);
        if (VAR_3 < 0)
                return FUNC_2(VAR_3, "Failed to get unique name: %m");

        VAR_3 = FUNC_4(VAR_1, "(sv)", "Controller", "s", VAR_2);
        if (VAR_3 < 0)
                return FUNC_1(VAR_3);

        return 0;
}
