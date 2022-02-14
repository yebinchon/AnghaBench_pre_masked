
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int polkit_registry; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
        Manager *VAR_5 = VAR_3;
        int VAR_6;

        FUNC_0(VAR_2);
        FUNC_0(VAR_5);

        VAR_6 = FUNC_1(
                        VAR_2,
                        VAR_0,
                        "org.freedesktop.login1.lock-sessions",
                        ((void*)0),
                        0,
                        VAR_1,
                        &VAR_5->polkit_registry,
                        VAR_4);
        if (VAR_6 < 0)
                return VAR_6;
        if (VAR_6 == 0)
                return 1;

        VAR_6 = FUNC_4(VAR_5, FUNC_5(FUNC_2(VAR_2), "LockSessions"));
        if (VAR_6 < 0)
                return VAR_6;

        return FUNC_3(VAR_2, ((void*)0));
}
