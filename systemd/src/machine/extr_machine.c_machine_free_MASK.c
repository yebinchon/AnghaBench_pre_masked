
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ leader; int netif; int root_directory; int service; int state_file; int name; int create_message; TYPE_1__* manager; int scope_job; scalar_t__ in_gc_queue; scalar_t__ operations; } ;
struct TYPE_10__ {int machine_leaders; TYPE_2__* host_machine; int machines; int machine_gc_queue; } ;
typedef TYPE_2__ Machine ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;

Machine* FUNC_9(Machine *VAR_1) {
        if (!VAR_1)
                return ((void*)0);

        while (VAR_1->operations)
                FUNC_7(VAR_1->operations);

        if (VAR_1->in_gc_queue)
                FUNC_0(VAR_0, VAR_1->manager->machine_gc_queue, VAR_1);

        FUNC_5(VAR_1);

        FUNC_2(VAR_1->scope_job);

        (void) FUNC_3(VAR_1->manager->machines, VAR_1->name);

        if (VAR_1->manager->host_machine == VAR_1)
                VAR_1->manager->host_machine = ((void*)0);

        if (VAR_1->leader > 0)
                (void) FUNC_4(VAR_1->manager->machine_leaders, FUNC_1(VAR_1->leader), VAR_1);

        FUNC_8(VAR_1->create_message);

        FUNC_2(VAR_1->name);
        FUNC_2(VAR_1->state_file);
        FUNC_2(VAR_1->service);
        FUNC_2(VAR_1->root_directory);
        FUNC_2(VAR_1->netif);
        return FUNC_6(VAR_1);
}
