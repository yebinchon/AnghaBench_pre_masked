
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * data; int polkit_registry; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ,char*,char*,char*,int *) ;
 int FUNC_11 (int *,int,char*) ;
 int FUNC_12 (int *,int ,char*,char const*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,char*,char const**,int*) ;
 int FUNC_15 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_16 (char const*,int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(sd_bus_message *VAR_4, void *VAR_5, sd_bus_error *VAR_6) {
        Context *VAR_7 = VAR_5;
        const char *VAR_8;
        int VAR_9;
        int VAR_10;

        FUNC_0(VAR_4);
        FUNC_0(VAR_7);

        VAR_10 = FUNC_14(VAR_4, "sb", &VAR_8, &VAR_9);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_8 = FUNC_4(VAR_8);

        if (FUNC_16(VAR_8, VAR_7->data[VAR_1]))
                return FUNC_15(VAR_4, ((void*)0));

        if (!FUNC_7(VAR_8) && !FUNC_6(VAR_8, 0))
                return FUNC_12(VAR_6, VAR_2, "Invalid static hostname '%s'", VAR_8);

        VAR_10 = FUNC_1(
                        VAR_4,
                        VAR_0,
                        "org.freedesktop.hostname1.set-static-hostname",
                        ((void*)0),
                        VAR_9,
                        VAR_3,
                        &VAR_7->polkit_registry,
                        VAR_6);
        if (VAR_10 < 0)
                return VAR_10;
        if (VAR_10 == 0)
                return 1;

        VAR_10 = FUNC_5(&VAR_7->data[VAR_1], VAR_8);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_10 = FUNC_2(VAR_7);
        if (VAR_10 < 0) {
                FUNC_8(VAR_10, "Failed to set host name: %m");
                return FUNC_11(VAR_6, VAR_10, "Failed to set hostname: %m");
        }

        VAR_10 = FUNC_3(VAR_7);
        if (VAR_10 < 0) {
                FUNC_8(VAR_10, "Failed to write static host name: %m");
                return FUNC_11(VAR_6, VAR_10, "Failed to set static hostname: %m");
        }

        FUNC_9("Changed static host name to '%s'", FUNC_17(VAR_7->data[VAR_1]));

        (void) FUNC_10(FUNC_13(VAR_4), "/org/freedesktop/hostname1", "org.freedesktop.hostname1", "StaticHostname", ((void*)0));

        return FUNC_15(VAR_4, ((void*)0));
}
