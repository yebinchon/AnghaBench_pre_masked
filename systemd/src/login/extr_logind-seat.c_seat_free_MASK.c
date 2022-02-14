
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int state_file; int positions; int id; TYPE_1__* manager; scalar_t__ devices; int active; scalar_t__ sessions; scalar_t__ in_gc_queue; } ;
struct TYPE_8__ {int seats; int seat_gc_queue; } ;
typedef TYPE_2__ Seat ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__) ;

Seat* FUNC_7(Seat *VAR_1) {
        if (!VAR_1)
                return ((void*)0);

        if (VAR_1->in_gc_queue)
                FUNC_0(VAR_0, VAR_1->manager->seat_gc_queue, VAR_1);

        while (VAR_1->sessions)
                FUNC_6(VAR_1->sessions);

        FUNC_1(!VAR_1->active);

        while (VAR_1->devices)
                FUNC_2(VAR_1->devices);

        FUNC_4(VAR_1->manager->seats, VAR_1->id);

        FUNC_3(VAR_1->positions);
        FUNC_3(VAR_1->state_file);

        return FUNC_5(VAR_1);
}
