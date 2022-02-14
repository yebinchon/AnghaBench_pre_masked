
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* current_server_name; int fallback_servers; int link_servers; int system_servers; } ;
struct TYPE_9__ {scalar_t__ type; int string; TYPE_7__* manager; } ;
typedef TYPE_1__ ServerName ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_7__*,int *) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;

ServerName *FUNC_7(ServerName *VAR_4) {
        if (!VAR_4)
                return ((void*)0);

        FUNC_6(VAR_4);

        if (VAR_4->manager) {
                if (VAR_4->type == VAR_2)
                        FUNC_0(VAR_3, VAR_4->manager->system_servers, VAR_4);
                else if (VAR_4->type == VAR_1)
                        FUNC_0(VAR_3, VAR_4->manager->link_servers, VAR_4);
                else if (VAR_4->type == VAR_0)
                        FUNC_0(VAR_3, VAR_4->manager->fallback_servers, VAR_4);
                else
                        FUNC_1("Unknown server type");

                if (VAR_4->manager->current_server_name == VAR_4)
                        FUNC_4(VAR_4->manager, ((void*)0));
        }

        FUNC_3("Removed server %s.", VAR_4->string);

        FUNC_2(VAR_4->string);
        return FUNC_5(VAR_4);
}
