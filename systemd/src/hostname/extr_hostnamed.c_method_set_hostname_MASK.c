
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char** data; int polkit_registry; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char**,char const*) ;
 int FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,char*,char*,char*,int *) ;
 int FUNC_9 (int *,int,char*) ;
 int FUNC_10 (int *,int ,char*,char const*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,char*,char const**,int*) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int FUNC_16(sd_bus_message *VAR_6, void *VAR_7, sd_bus_error *VAR_8) {
        Context *VAR_9 = VAR_7;
        const char *VAR_10;
        int VAR_11;
        int VAR_12;

        FUNC_0(VAR_6);
        FUNC_0(VAR_9);

        VAR_12 = FUNC_12(VAR_6, "sb", &VAR_10, &VAR_11);
        if (VAR_12 < 0)
                return VAR_12;

        if (FUNC_5(VAR_10))
                VAR_10 = VAR_9->data[VAR_3];

        if (FUNC_5(VAR_10))
                VAR_10 = VAR_1;

        if (!FUNC_4(VAR_10, 0))
                return FUNC_10(VAR_8, VAR_4, "Invalid hostname '%s'", VAR_10);

        if (FUNC_14(VAR_10, VAR_9->data[VAR_2]))
                return FUNC_13(VAR_6, ((void*)0));

        VAR_12 = FUNC_1(
                        VAR_6,
                        VAR_0,
                        "org.freedesktop.hostname1.set-hostname",
                        ((void*)0),
                        VAR_11,
                        VAR_5,
                        &VAR_9->polkit_registry,
                        VAR_8);
        if (VAR_12 < 0)
                return VAR_12;
        if (VAR_12 == 0)
                return 1;

        VAR_12 = FUNC_3(&VAR_9->data[VAR_2], VAR_10);
        if (VAR_12 < 0)
                return VAR_12;

        VAR_12 = FUNC_2(VAR_9);
        if (VAR_12 < 0) {
                FUNC_6(VAR_12, "Failed to set host name: %m");
                return FUNC_9(VAR_8, VAR_12, "Failed to set hostname: %m");
        }

        FUNC_7("Changed host name to '%s'", FUNC_15(VAR_9->data[VAR_2]));

        (void) FUNC_8(FUNC_11(VAR_6), "/org/freedesktop/hostname1", "org.freedesktop.hostname1", "Hostname", ((void*)0));

        return FUNC_13(VAR_6, ((void*)0));
}
