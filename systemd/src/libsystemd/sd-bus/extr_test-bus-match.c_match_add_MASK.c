
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bus_match_node {int dummy; } ;
struct bus_match_component {int dummy; } ;
struct TYPE_6__ {int callback; } ;
struct TYPE_5__ {TYPE_4__ match_callback; int userdata; } ;
typedef TYPE_1__ sd_bus_slot ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bus_match_node*,struct bus_match_component*,unsigned int,TYPE_4__*) ;
 int FUNC_2 (char const*,struct bus_match_component**,unsigned int*) ;
 int FUNC_3 (struct bus_match_component*,unsigned int) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__) ;

__attribute__((used)) static int FUNC_5(sd_bus_slot *VAR_1, struct bus_match_node *VAR_2, const char *VAR_3, int VAR_4) {
        struct bus_match_component *VAR_5 = ((void*)0);
        unsigned VAR_6 = 0;
        sd_bus_slot *VAR_7;
        int VAR_8;

        VAR_7 = VAR_1 + VAR_4;
        FUNC_4(*VAR_7);

        VAR_8 = FUNC_2(VAR_3, &VAR_5, &VAR_6);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_7->userdata = FUNC_0(VAR_4);
        VAR_7->match_callback.callback = VAR_0;

        VAR_8 = FUNC_1(VAR_2, VAR_5, VAR_6, &VAR_7->match_callback);
        FUNC_3(VAR_5, VAR_6);

        return VAR_8;
}
