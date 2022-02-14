
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* manager; } ;
typedef TYPE_2__ sd_bus_message ;
typedef int sd_bus_error ;
typedef char const* int32_t ;
struct TYPE_10__ {int polkit_registry; } ;
typedef TYPE_2__ Machine ;
typedef scalar_t__ KillWho ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int *,int,int ,int *,int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,char const*) ;
 int FUNC_6 (int *,int ,char*,char const*) ;
 int FUNC_7 (TYPE_2__*,char*,char const**,char const**) ;
 int FUNC_8 (TYPE_2__*,int *) ;

int FUNC_9(sd_bus_message *VAR_4, void *VAR_5, sd_bus_error *VAR_6) {
        Machine *VAR_7 = VAR_5;
        const char *VAR_8;
        int32_t VAR_9;
        KillWho VAR_10;
        int VAR_11;

        FUNC_1(VAR_4);
        FUNC_1(VAR_7);

        VAR_11 = FUNC_7(VAR_4, "si", &VAR_8, &VAR_9);
        if (VAR_11 < 0)
                return VAR_11;

        if (FUNC_3(VAR_8))
                VAR_10 = VAR_1;
        else {
                VAR_10 = FUNC_4(VAR_8);
                if (VAR_10 < 0)
                        return FUNC_6(VAR_6, VAR_2, "Invalid kill parameter '%s'", VAR_8);
        }

        if (!FUNC_0(VAR_9))
                return FUNC_6(VAR_6, VAR_2, "Invalid signal %i", VAR_9);

        VAR_11 = FUNC_2(
                        VAR_4,
                        VAR_0,
                        "org.freedesktop.machine1.manage-machines",
                        ((void*)0),
                        0,
                        VAR_3,
                        &VAR_7->manager->polkit_registry,
                        VAR_6);
        if (VAR_11 < 0)
                return VAR_11;
        if (VAR_11 == 0)
                return 1;

        VAR_11 = FUNC_5(VAR_7, VAR_10, VAR_9);
        if (VAR_11 < 0)
                return VAR_11;

        return FUNC_8(VAR_4, ((void*)0));
}
