
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {TYPE_5__* manager; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_15__ {int polkit_registry; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_5__*,char*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;

int FUNC_10(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
        Link *VAR_5 = VAR_3;
        int VAR_6;

        FUNC_0(VAR_2);
        FUNC_0(VAR_5);

        VAR_6 = FUNC_9(VAR_5, VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_6 = FUNC_1(VAR_2, VAR_0,
                                    "org.freedesktop.resolve1.revert",
                                    ((void*)0), 1, VAR_1,
                                    &VAR_5->manager->polkit_registry, VAR_4);
        if (VAR_6 < 0)
                return VAR_6;
        if (VAR_6 == 0)
                return 1;

        FUNC_4(VAR_5);
        FUNC_3(VAR_5);
        FUNC_2(VAR_5, 0);

        (void) FUNC_5(VAR_5);
        (void) FUNC_7(VAR_5->manager);
        (void) FUNC_6(VAR_5->manager, "DNS");

        return FUNC_8(VAR_2, ((void*)0));
}
