
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* manager; TYPE_1__* user; } ;
typedef TYPE_3__ sd_bus_message ;
typedef int sd_bus_error ;
typedef char const* int32_t ;
struct TYPE_12__ {int polkit_registry; } ;
struct TYPE_11__ {int uid; } ;
typedef TYPE_3__ Session ;
typedef scalar_t__ KillWho ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,char*,int *,int,int ,int *,int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int *,int ,char*,char const*) ;
 int FUNC_6 (TYPE_3__*,char*,char const**,char const**) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,char const*) ;

int FUNC_9(sd_bus_message *VAR_3, void *VAR_4, sd_bus_error *VAR_5) {
        Session *VAR_6 = VAR_4;
        const char *VAR_7;
        int32_t VAR_8;
        KillWho VAR_9;
        int VAR_10;

        FUNC_1(VAR_3);
        FUNC_1(VAR_6);

        VAR_10 = FUNC_6(VAR_3, "si", &VAR_7, &VAR_8);
        if (VAR_10 < 0)
                return VAR_10;

        if (FUNC_3(VAR_7))
                VAR_9 = VAR_1;
        else {
                VAR_9 = FUNC_4(VAR_7);
                if (VAR_9 < 0)
                        return FUNC_5(VAR_5, VAR_2, "Invalid kill parameter '%s'", VAR_7);
        }

        if (!FUNC_0(VAR_8))
                return FUNC_5(VAR_5, VAR_2, "Invalid signal %i", VAR_8);

        VAR_10 = FUNC_2(
                        VAR_3,
                        VAR_0,
                        "org.freedesktop.login1.manage",
                        ((void*)0),
                        0,
                        VAR_6->user->uid,
                        &VAR_6->manager->polkit_registry,
                        VAR_5);
        if (VAR_10 < 0)
                return VAR_10;
        if (VAR_10 == 0)
                return 1;

        VAR_10 = FUNC_8(VAR_6, VAR_9, VAR_8);
        if (VAR_10 < 0)
                return VAR_10;

        return FUNC_7(VAR_3, ((void*)0));
}
