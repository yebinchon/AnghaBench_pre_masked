
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
struct TYPE_3__ {int vc_keymap_toggle; int vc_keymap; } ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 int FUNC_0 (int *,char,int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_3(
                sd_bus *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                sd_bus_message *VAR_5,
                void *VAR_6,
                sd_bus_error *VAR_7) {

        Context *VAR_8 = VAR_6;
        int VAR_9;

        VAR_9 = FUNC_2(VAR_8, VAR_5);
        if (VAR_9 < 0)
                return VAR_9;

        if (FUNC_1(VAR_4, "VConsoleKeymap"))
                return FUNC_0(VAR_5, 's', VAR_8->vc_keymap);
        else if (FUNC_1(VAR_4, "VConsoleKeymapToggle"))
                return FUNC_0(VAR_5, 's', VAR_8->vc_keymap_toggle);

        return -VAR_0;
}
