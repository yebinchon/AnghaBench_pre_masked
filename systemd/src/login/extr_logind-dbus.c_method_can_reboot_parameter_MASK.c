
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,char*,int *,int ,int *) ;
 int FUNC_3 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_4(
                sd_bus_message *VAR_2,
                void *VAR_3,
                sd_bus_error *VAR_4) {

        Manager *VAR_5 = VAR_3;
        int VAR_6;

        FUNC_0(VAR_2);
        FUNC_0(VAR_5);

        VAR_6 = FUNC_1();
        if (VAR_6 < 0)
                return VAR_6;
        if (VAR_6 > 0)
                return FUNC_3(VAR_2, "s", "na");

        return FUNC_2(
                        VAR_2,
                        VAR_0,
                        "org.freedesktop.login1.set-reboot-parameter",
                        ((void*)0),
                        VAR_1,
                        VAR_4);
}
