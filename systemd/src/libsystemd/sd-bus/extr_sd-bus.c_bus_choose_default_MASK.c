
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus ;


 scalar_t__ FUNC_0 (char const*,char*,char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int **) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static sd_bus **FUNC_7(int (**VAR_3)(sd_bus **)) {
        const char *VAR_4;







        VAR_4 = FUNC_5("DBUS_STARTER_BUS_TYPE");
        if (VAR_4) {
                if (FUNC_6(VAR_4, "system")) {
                        if (VAR_3)
                                *VAR_3 = FUNC_3;
                        return &VAR_1;
                } else if (FUNC_0(VAR_4, "user", "session")) {
                        if (VAR_3)
                                *VAR_3 = FUNC_4;
                        return &VAR_2;
                }
        }



        VAR_4 = FUNC_5("DBUS_STARTER_ADDRESS");
        if (VAR_4) {
                if (VAR_3)
                        *VAR_3 = FUNC_2;
                return &VAR_0;
        }




        if (FUNC_1(0, ((void*)0)) >= 0) {
                if (VAR_3)
                        *VAR_3 = FUNC_4;
                return &VAR_2;
        } else {
                if (VAR_3)
                        *VAR_3 = FUNC_3;
                return &VAR_1;
        }
}
