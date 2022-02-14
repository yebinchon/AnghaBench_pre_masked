
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ links_requesting_uuid; scalar_t__ dynamic_timezone; scalar_t__ dynamic_hostname; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        Manager *VAR_3 = VAR_1;

        FUNC_0(VAR_0);
        FUNC_0(VAR_3);


        if (VAR_3->dynamic_hostname)
                (void) FUNC_2(VAR_3, VAR_3->dynamic_hostname);
        if (VAR_3->dynamic_timezone)
                (void) FUNC_3(VAR_3, VAR_3->dynamic_timezone);
        if (VAR_3->links_requesting_uuid)
                (void) FUNC_1(VAR_3, ((void*)0));

        return 0;
}
