
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int in_queue; scalar_t__ n_adding; TYPE_1__* bus; int in_list; int handler; int names; } ;
typedef TYPE_2__ sd_bus_track ;
struct TYPE_6__ {int track_queue; } ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(sd_bus_track *VAR_1) {
        FUNC_1(VAR_1);





        if (VAR_1->in_queue)
                return;



        if (VAR_1->n_adding > 0)
                return;


        if (FUNC_2(VAR_1->names) > 0)
                return;


        if (!VAR_1->handler)
                return;


        if (!VAR_1->in_list)
                return;

        FUNC_0(VAR_0, VAR_1->bus->track_queue, VAR_1);
        VAR_1->in_queue = 1;
}
