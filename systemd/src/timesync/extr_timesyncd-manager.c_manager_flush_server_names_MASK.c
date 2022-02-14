
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fallback_servers; scalar_t__ link_servers; scalar_t__ system_servers; } ;
typedef scalar_t__ ServerType ;
typedef TYPE_1__ Manager ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(Manager *VAR_3, ServerType VAR_4) {
        FUNC_0(VAR_3);

        if (VAR_4 == VAR_2)
                while (VAR_3->system_servers)
                        FUNC_1(VAR_3->system_servers);

        if (VAR_4 == VAR_1)
                while (VAR_3->link_servers)
                        FUNC_1(VAR_3->link_servers);

        if (VAR_4 == VAR_0)
                while (VAR_3->fallback_servers)
                        FUNC_1(VAR_3->fallback_servers);
}
