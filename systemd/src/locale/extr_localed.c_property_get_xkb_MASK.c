
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
struct TYPE_3__ {int x11_options; int x11_variant; int x11_model; int x11_layout; } ;
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

        if (FUNC_1(VAR_4, "X11Layout"))
                return FUNC_0(VAR_5, 's', VAR_8->x11_layout);
        else if (FUNC_1(VAR_4, "X11Model"))
                return FUNC_0(VAR_5, 's', VAR_8->x11_model);
        else if (FUNC_1(VAR_4, "X11Variant"))
                return FUNC_0(VAR_5, 's', VAR_8->x11_variant);
        else if (FUNC_1(VAR_4, "X11Options"))
                return FUNC_0(VAR_5, 's', VAR_8->x11_options);

        return -VAR_0;
}
