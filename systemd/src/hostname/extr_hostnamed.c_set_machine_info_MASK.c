
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int sd_bus_message_handler_t ;
struct TYPE_11__ {int * data; int polkit_registry; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (int ,char*,char*,char*,int *) ;
 int FUNC_10 (int *,int,char*) ;
 int FUNC_11 (int *,int ,char*,char const*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,char*,char const**,int*) ;
 int FUNC_14 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_15 (char const*,int ) ;
 scalar_t__ FUNC_16 (char const*,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char const*) ;
 int FUNC_19 (char const*) ;

__attribute__((used)) static int FUNC_20(Context *VAR_8, sd_bus_message *VAR_9, int VAR_10, sd_bus_message_handler_t VAR_11, sd_bus_error *VAR_12) {
        int VAR_13;
        const char *VAR_14;
        int VAR_15;

        FUNC_0(VAR_8);
        FUNC_0(VAR_9);

        VAR_15 = FUNC_13(VAR_9, "sb", &VAR_14, &VAR_13);
        if (VAR_15 < 0)
                return VAR_15;

        VAR_14 = FUNC_3(VAR_14);

        if (FUNC_15(VAR_14, VAR_8->data[VAR_10]))
                return FUNC_14(VAR_9, ((void*)0));

        if (!FUNC_6(VAR_14)) {



                if (VAR_10 == VAR_3 && !FUNC_4(VAR_14))
                        return FUNC_11(VAR_12, VAR_6, "Invalid icon name '%s'", VAR_14);
                if (VAR_10 == VAR_5 && FUNC_16(VAR_14, ((void*)0)))
                        return FUNC_11(VAR_12, VAR_6, "Invalid pretty host name '%s'", VAR_14);
                if (VAR_10 == VAR_1 && !FUNC_18(VAR_14))
                        return FUNC_11(VAR_12, VAR_6, "Invalid chassis '%s'", VAR_14);
                if (VAR_10 == VAR_2 && !FUNC_19(VAR_14))
                        return FUNC_11(VAR_12, VAR_6, "Invalid deployment '%s'", VAR_14);
                if (VAR_10 == VAR_4 && FUNC_16(VAR_14, ((void*)0)))
                        return FUNC_11(VAR_12, VAR_6, "Invalid location '%s'", VAR_14);
        }





        VAR_15 = FUNC_1(
                        VAR_9,
                        VAR_0,
                        VAR_10 == VAR_5 ? "org.freedesktop.hostname1.set-static-hostname" : "org.freedesktop.hostname1.set-machine-info",
                        ((void*)0),
                        VAR_13,
                        VAR_7,
                        &VAR_8->polkit_registry,
                        VAR_12);
        if (VAR_15 < 0)
                return VAR_15;
        if (VAR_15 == 0)
                return 1;

        VAR_15 = FUNC_5(&VAR_8->data[VAR_10], VAR_14);
        if (VAR_15 < 0)
                return VAR_15;

        VAR_15 = FUNC_2(VAR_8);
        if (VAR_15 < 0) {
                FUNC_7(VAR_15, "Failed to write machine info: %m");
                return FUNC_10(VAR_12, VAR_15, "Failed to write machine info: %m");
        }

        FUNC_8("Changed %s to '%s'",
                 VAR_10 == VAR_5 ? "pretty host name" :
                 VAR_10 == VAR_2 ? "deployment" :
                 VAR_10 == VAR_4 ? "location" :
                 VAR_10 == VAR_1 ? "chassis" : "icon name", FUNC_17(VAR_8->data[VAR_10]));

        (void) FUNC_9(
                        FUNC_12(VAR_9),
                        "/org/freedesktop/hostname1",
                        "org.freedesktop.hostname1",
                        VAR_10 == VAR_5 ? "PrettyHostname" :
                        VAR_10 == VAR_2 ? "Deployment" :
                        VAR_10 == VAR_4 ? "Location" :
                        VAR_10 == VAR_1 ? "Chassis" : "IconName" , ((void*)0));

        return FUNC_14(VAR_9, ((void*)0));
}
