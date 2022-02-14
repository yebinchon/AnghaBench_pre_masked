
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int vc_keymap_toggle; int vc_keymap; int polkit_registry; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int ,char*,char*,char*,char*,int *) ;
 int FUNC_8 (int *,int,char*) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,char*,char const**,char const**,int*,int*) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (char const*,int ) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_20(sd_bus_message *VAR_5, void *VAR_6, sd_bus_error *VAR_7) {
        Context *VAR_8 = VAR_6;
        const char *VAR_9, *VAR_10;
        int VAR_11, VAR_12, VAR_13;

        FUNC_0(VAR_5);
        FUNC_0(VAR_8);

        VAR_13 = FUNC_11(VAR_5, "ssbb", &VAR_9, &VAR_10, &VAR_11, &VAR_12);
        if (VAR_13 < 0)
                return VAR_13;

        VAR_9 = FUNC_2(VAR_9);
        VAR_10 = FUNC_2(VAR_10);

        VAR_13 = FUNC_17(VAR_8, VAR_5);
        if (VAR_13 < 0) {
                FUNC_5(VAR_13, "Failed to read virtual console keymap data: %m");
                return FUNC_9(VAR_7, VAR_2, "Failed to read virtual console keymap data");
        }

        if (FUNC_14(VAR_9, VAR_8->vc_keymap) &&
            FUNC_14(VAR_10, VAR_8->vc_keymap_toggle))
                return FUNC_12(VAR_5, ((void*)0));

        if ((VAR_9 && (!FUNC_3(VAR_9) || !FUNC_15(VAR_9))) ||
            (VAR_10 && (!FUNC_3(VAR_10) || !FUNC_15(VAR_10))))
                return FUNC_9(VAR_7, VAR_3, "Received invalid keymap data");

        VAR_13 = FUNC_1(
                        VAR_5,
                        VAR_0,
                        "org.freedesktop.locale1.set-keyboard",
                        ((void*)0),
                        VAR_12,
                        VAR_4,
                        &VAR_8->polkit_registry,
                        VAR_7);
        if (VAR_13 < 0)
                return VAR_13;
        if (VAR_13 == 0)
                return 1;

        if (FUNC_4(&VAR_8->vc_keymap, VAR_9) < 0 ||
            FUNC_4(&VAR_8->vc_keymap_toggle, VAR_10) < 0)
                return -VAR_1;

        VAR_13 = FUNC_19(VAR_8);
        if (VAR_13 < 0) {
                FUNC_5(VAR_13, "Failed to set virtual console keymap: %m");
                return FUNC_8(VAR_7, VAR_13, "Failed to set virtual console keymap: %m");
        }

        FUNC_6("Changed virtual console keymap to '%s' toggle '%s'",
                 FUNC_13(VAR_8->vc_keymap), FUNC_13(VAR_8->vc_keymap_toggle));

        (void) FUNC_18(FUNC_10(VAR_5));

        (void) FUNC_7(
                        FUNC_10(VAR_5),
                        "/org/freedesktop/locale1",
                        "org.freedesktop.locale1",
                        "VConsoleKeymap", "VConsoleKeymapToggle", ((void*)0));

        if (VAR_11) {
                VAR_13 = FUNC_16(VAR_8, VAR_5);
                if (VAR_13 < 0)
                        FUNC_5(VAR_13, "Failed to convert keymap data: %m");
        }

        return FUNC_12(VAR_5, ((void*)0));
}
