
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int storage_socket; int name; TYPE_1__* manager; } ;
struct TYPE_7__ {int dynamic_users; } ;
typedef TYPE_2__ DynamicUser ;


 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static DynamicUser* FUNC_3(DynamicUser *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        if (VAR_0->manager)
                (void) FUNC_0(VAR_0->manager->dynamic_users, VAR_0->name);

        FUNC_2(VAR_0->storage_socket);
        return FUNC_1(VAR_0);
}
