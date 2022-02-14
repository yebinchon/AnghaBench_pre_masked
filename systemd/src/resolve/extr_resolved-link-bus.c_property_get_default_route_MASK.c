
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ default_route; scalar_t__ unicast_scope; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef TYPE_1__ Link ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;

__attribute__((used)) static int FUNC_3(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        Link *VAR_7 = VAR_5;

        FUNC_0(VAR_4);
        FUNC_0(VAR_7);


        if (VAR_7->default_route >= 0)
                return FUNC_2(VAR_4, "b", VAR_7->default_route);


        if (VAR_7->unicast_scope)
                return FUNC_2(VAR_4, "b", FUNC_1(VAR_7->unicast_scope));

        return FUNC_2(VAR_4, "b", 0);
}
