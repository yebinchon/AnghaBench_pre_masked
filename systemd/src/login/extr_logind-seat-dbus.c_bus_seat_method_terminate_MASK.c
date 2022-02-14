
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* manager; } ;
typedef TYPE_2__ sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_9__ {int polkit_registry; } ;
typedef TYPE_2__ Seat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int) ;

int FUNC_4(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
        Seat *VAR_5 = VAR_3;
        int VAR_6;

        FUNC_0(VAR_2);
        FUNC_0(VAR_5);

        VAR_6 = FUNC_1(
                        VAR_2,
                        VAR_0,
                        "org.freedesktop.login1.manage",
                        ((void*)0),
                        0,
                        VAR_1,
                        &VAR_5->manager->polkit_registry,
                        VAR_4);
        if (VAR_6 < 0)
                return VAR_6;
        if (VAR_6 == 0)
                return 1;

        VAR_6 = FUNC_3(VAR_5, 1);
        if (VAR_6 < 0)
                return VAR_6;

        return FUNC_2(VAR_2, ((void*)0));
}
