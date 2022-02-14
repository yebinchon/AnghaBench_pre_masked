
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int dns_default_route; TYPE_1__* manager; } ;
typedef TYPE_2__ sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_11__ {int polkit_registry; } ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*,int*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;

int FUNC_6(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
        Link *VAR_5 = VAR_3;
        int VAR_6, VAR_7;

        FUNC_0(VAR_2);
        FUNC_0(VAR_5);

        VAR_6 = FUNC_5(VAR_5, VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_6 = FUNC_3(VAR_2, "b", &VAR_7);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_6 = FUNC_1(VAR_2, VAR_0,
                                    "org.freedesktop.network1.set-default-route",
                                    ((void*)0), 1, VAR_1,
                                    &VAR_5->manager->polkit_registry, VAR_4);
        if (VAR_6 < 0)
                return VAR_6;
        if (VAR_6 == 0)
                return 1;

        if (VAR_5->dns_default_route != VAR_7) {
                VAR_5->dns_default_route = VAR_7;
                (void) FUNC_2(VAR_5);
        }

        return FUNC_4(VAR_2, ((void*)0));
}
