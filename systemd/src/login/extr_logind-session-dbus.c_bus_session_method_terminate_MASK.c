
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* manager; TYPE_1__* user; } ;
typedef TYPE_3__ sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_11__ {int polkit_registry; } ;
struct TYPE_10__ {int uid; } ;
typedef TYPE_3__ Session ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int) ;

int FUNC_4(sd_bus_message *VAR_1, void *VAR_2, sd_bus_error *VAR_3) {
        Session *VAR_4 = VAR_2;
        int VAR_5;

        FUNC_0(VAR_1);
        FUNC_0(VAR_4);

        VAR_5 = FUNC_1(
                        VAR_1,
                        VAR_0,
                        "org.freedesktop.login1.manage",
                        ((void*)0),
                        0,
                        VAR_4->user->uid,
                        &VAR_4->manager->polkit_registry,
                        VAR_3);
        if (VAR_5 < 0)
                return VAR_5;
        if (VAR_5 == 0)
                return 1;

        VAR_5 = FUNC_3(VAR_4, 1);
        if (VAR_5 < 0)
                return VAR_5;

        return FUNC_2(VAR_1, ((void*)0));
}
