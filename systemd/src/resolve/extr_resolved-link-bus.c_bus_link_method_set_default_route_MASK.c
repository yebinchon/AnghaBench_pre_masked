
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int default_route; TYPE_6__* manager; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_12__ {int polkit_registry; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_1__*,char*,int*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;

int FUNC_7(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
        Link *VAR_5 = VAR_3;
        int VAR_6, VAR_7;

        FUNC_0(VAR_2);
        FUNC_0(VAR_5);

        VAR_6 = FUNC_6(VAR_5, VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_6 = FUNC_4(VAR_2, "b", &VAR_7);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_6 = FUNC_1(VAR_2, VAR_0,
                                    "org.freedesktop.resolve1.set-default-route",
                                    ((void*)0), 1, VAR_1,
                                    &VAR_5->manager->polkit_registry, VAR_4);
        if (VAR_6 < 0)
                return VAR_6;
        if (VAR_6 == 0)
                return 1;

        if (VAR_5->default_route != VAR_7) {
                VAR_5->default_route = VAR_7;

                (void) FUNC_2(VAR_5);
                (void) FUNC_3(VAR_5->manager);
        }

        return FUNC_5(VAR_2, ((void*)0));
}
