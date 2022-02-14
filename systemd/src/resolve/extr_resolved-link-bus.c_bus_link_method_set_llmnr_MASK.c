
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ llmnr_support; TYPE_1__* manager; } ;
typedef TYPE_2__ sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_13__ {int polkit_registry; } ;
typedef scalar_t__ ResolveSupport ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int *,int,int ,int *,int *) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (int *,int ,char*,char const*) ;
 int FUNC_8 (TYPE_2__*,char*,char const**) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*,int *) ;

int FUNC_11(sd_bus_message *VAR_4, void *VAR_5, sd_bus_error *VAR_6) {
        Link *VAR_7 = VAR_5;
        ResolveSupport VAR_8;
        const char *VAR_9;
        int VAR_10;

        FUNC_0(VAR_4);
        FUNC_0(VAR_7);

        VAR_10 = FUNC_10(VAR_7, VAR_6);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_10 = FUNC_8(VAR_4, "s", &VAR_9);
        if (VAR_10 < 0)
                return VAR_10;

        if (FUNC_2(VAR_9))
                VAR_8 = VAR_1;
        else {
                VAR_8 = FUNC_6(VAR_9);
                if (VAR_8 < 0)
                        return FUNC_7(VAR_6, VAR_2, "Invalid LLMNR setting: %s", VAR_9);
        }

        VAR_10 = FUNC_1(VAR_4, VAR_0,
                                    "org.freedesktop.resolve1.set-llmnr",
                                    ((void*)0), 1, VAR_3,
                                    &VAR_7->manager->polkit_registry, VAR_6);
        if (VAR_10 < 0)
                return VAR_10;
        if (VAR_10 == 0)
                return 1;

        VAR_7->llmnr_support = VAR_8;
        FUNC_4(VAR_7);
        FUNC_3(VAR_7, 0);

        (void) FUNC_5(VAR_7);

        return FUNC_9(VAR_4, ((void*)0));
}
