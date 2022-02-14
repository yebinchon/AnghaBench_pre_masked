
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int polkit_registry; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (TYPE_1__*,char*,char const**) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (char const*,int) ;

__attribute__((used)) static int FUNC_7(
                sd_bus_message *VAR_3,
                void *VAR_4,
                sd_bus_error *VAR_5) {

        Manager *VAR_6 = VAR_4;
        const char *VAR_7;
        int VAR_8;

        FUNC_0(VAR_3);
        FUNC_0(VAR_6);

        VAR_8 = FUNC_4(VAR_3, "s", &VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_2();
        if (VAR_8 < 0)
                return VAR_8;
        if (VAR_8 > 0)
                return FUNC_3(VAR_5, VAR_1,
                                         "Reboot parameter not supported in containers, refusing.");

        VAR_8 = FUNC_1(VAR_3,
                                    VAR_0,
                                    "org.freedesktop.login1.set-reboot-parameter",
                                    ((void*)0),
                                    0,
                                    VAR_2,
                                    &VAR_6->polkit_registry,
                                    VAR_5);
        if (VAR_8 < 0)
                return VAR_8;
        if (VAR_8 == 0)
                return 1;

        VAR_8 = FUNC_6(VAR_7, 0);
        if (VAR_8 < 0)
                return VAR_8;

        return FUNC_5(VAR_3, ((void*)0));
}
