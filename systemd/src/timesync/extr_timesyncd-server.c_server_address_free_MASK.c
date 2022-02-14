
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* current_server_address; } ;
struct TYPE_10__ {TYPE_1__* name; } ;
struct TYPE_9__ {TYPE_7__* manager; int addresses; } ;
typedef TYPE_2__ ServerAddress ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_7__*,int *) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;

ServerAddress* FUNC_3(ServerAddress *VAR_1) {
        if (!VAR_1)
                return ((void*)0);

        if (VAR_1->name) {
                FUNC_0(VAR_0, VAR_1->name->addresses, VAR_1);

                if (VAR_1->name->manager && VAR_1->name->manager->current_server_address == VAR_1)
                        FUNC_1(VAR_1->name->manager, ((void*)0));
        }

        return FUNC_2(VAR_1);
}
