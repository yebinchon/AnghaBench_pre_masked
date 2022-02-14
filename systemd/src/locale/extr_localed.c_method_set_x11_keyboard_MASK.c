
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {char const* x11_layout; char const* x11_model; char const* x11_variant; char const* x11_options; int polkit_registry; } ;
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
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const**,char const*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*,int ,int ,int ,int ) ;
 int FUNC_6 (int ,char*,char*,char*,char*,char*,char*,int *) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,int,char*) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,char*,char const**,char const**,char const**,char const**,int*,int*) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (char const*,char const*) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (char const*,char const*,char const*,char const*) ;
 int FUNC_17 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_20(sd_bus_message *VAR_7, void *VAR_8, sd_bus_error *VAR_9) {
        Context *VAR_10 = VAR_8;
        const char *VAR_11, *VAR_12, *VAR_13, *VAR_14;
        int VAR_15, VAR_16, VAR_17;

        FUNC_0(VAR_7);
        FUNC_0(VAR_10);

        VAR_17 = FUNC_11(VAR_7, "ssssbb", &VAR_11, &VAR_12, &VAR_13, &VAR_14, &VAR_15, &VAR_16);
        if (VAR_17 < 0)
                return VAR_17;

        VAR_11 = FUNC_2(VAR_11);
        VAR_12 = FUNC_2(VAR_12);
        VAR_13 = FUNC_2(VAR_13);
        VAR_14 = FUNC_2(VAR_14);

        VAR_17 = FUNC_18(VAR_10, VAR_7);
        if (VAR_17 < 0) {
                FUNC_4(VAR_17, "Failed to read x11 keyboard layout data: %m");
                return FUNC_9(VAR_9, VAR_3, "Failed to read x11 keyboard layout data");
        }

        if (FUNC_14(VAR_11, VAR_10->x11_layout) &&
            FUNC_14(VAR_12, VAR_10->x11_model) &&
            FUNC_14(VAR_13, VAR_10->x11_variant) &&
            FUNC_14(VAR_14, VAR_10->x11_options))
                return FUNC_12(VAR_7, ((void*)0));

        if ((VAR_11 && !FUNC_15(VAR_11)) ||
            (VAR_12 && !FUNC_15(VAR_12)) ||
            (VAR_13 && !FUNC_15(VAR_13)) ||
            (VAR_14 && !FUNC_15(VAR_14)))
                return FUNC_9(VAR_9, VAR_4, "Received invalid keyboard data");

        VAR_17 = FUNC_16(VAR_12, VAR_11, VAR_13, VAR_14);
        if (VAR_17 < 0) {
                FUNC_4(VAR_17, "Cannot compile XKB keymap for new x11 keyboard layout ('%s' / '%s' / '%s' / '%s'): %m",
                                FUNC_13(VAR_12), FUNC_13(VAR_11), FUNC_13(VAR_13), FUNC_13(VAR_14));

                if (VAR_17 == -VAR_2)
                        return FUNC_9(VAR_9, VAR_5, "Local keyboard configuration not supported on this system.");

                return FUNC_7(VAR_9, VAR_4, "Specified keymap cannot be compiled, refusing as invalid.");
        }

        VAR_17 = FUNC_1(
                        VAR_7,
                        VAR_0,
                        "org.freedesktop.locale1.set-keyboard",
                        ((void*)0),
                        VAR_16,
                        VAR_6,
                        &VAR_10->polkit_registry,
                        VAR_9);
        if (VAR_17 < 0)
                return VAR_17;
        if (VAR_17 == 0)
                return 1;

        if (FUNC_3(&VAR_10->x11_layout, VAR_11) < 0 ||
            FUNC_3(&VAR_10->x11_model, VAR_12) < 0 ||
            FUNC_3(&VAR_10->x11_variant, VAR_13) < 0 ||
            FUNC_3(&VAR_10->x11_options, VAR_14) < 0)
                return -VAR_1;

        VAR_17 = FUNC_19(VAR_10);
        if (VAR_17 < 0) {
                FUNC_4(VAR_17, "Failed to set X11 keyboard layout: %m");
                return FUNC_8(VAR_9, VAR_17, "Failed to set X11 keyboard layout: %m");
        }

        FUNC_5("Changed X11 keyboard layout to '%s' model '%s' variant '%s' options '%s'",
                 FUNC_13(VAR_10->x11_layout),
                 FUNC_13(VAR_10->x11_model),
                 FUNC_13(VAR_10->x11_variant),
                 FUNC_13(VAR_10->x11_options));

        (void) FUNC_6(
                        FUNC_10(VAR_7),
                        "/org/freedesktop/locale1",
                        "org.freedesktop.locale1",
                        "X11Layout", "X11Model", "X11Variant", "X11Options", ((void*)0));

        if (VAR_15) {
                VAR_17 = FUNC_17(VAR_10, VAR_7);
                if (VAR_17 < 0)
                        FUNC_4(VAR_17, "Failed to convert keymap data: %m");
        }

        return FUNC_12(VAR_7, ((void*)0));
}
