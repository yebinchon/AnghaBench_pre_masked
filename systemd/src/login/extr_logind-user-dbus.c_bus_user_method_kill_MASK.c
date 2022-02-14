
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* manager; int uid; } ;
typedef TYPE_2__ sd_bus_message ;
typedef int sd_bus_error ;
typedef int int32_t ;
typedef TYPE_2__ User ;
struct TYPE_10__ {int polkit_registry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_3 (int *,int ,char*,int ) ;
 int FUNC_4 (TYPE_2__*,char*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;

int FUNC_7(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
        User *VAR_5 = VAR_3;
        int32_t VAR_6;
        int VAR_7;

        FUNC_1(VAR_2);
        FUNC_1(VAR_5);

        VAR_7 = FUNC_2(
                        VAR_2,
                        VAR_0,
                        "org.freedesktop.login1.manage",
                        ((void*)0),
                        0,
                        VAR_5->uid,
                        &VAR_5->manager->polkit_registry,
                        VAR_4);
        if (VAR_7 < 0)
                return VAR_7;
        if (VAR_7 == 0)
                return 1;

        VAR_7 = FUNC_4(VAR_2, "i", &VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        if (!FUNC_0(VAR_6))
                return FUNC_3(VAR_4, VAR_1, "Invalid signal %i", VAR_6);

        VAR_7 = FUNC_6(VAR_5, VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        return FUNC_5(VAR_2, ((void*)0));
}
