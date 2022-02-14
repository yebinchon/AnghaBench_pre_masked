
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* link; scalar_t__ section; TYPE_2__* network; } ;
struct TYPE_9__ {scalar_t__ n_neighbors; int neighbors_by_section; int neighbors; } ;
struct TYPE_8__ {int neighbors_foreign; int neighbors; } ;
typedef TYPE_3__ Neighbor ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,TYPE_3__*) ;

void FUNC_6(Neighbor *VAR_1) {
        if (!VAR_1)
                return;

        if (VAR_1->network) {
                FUNC_0(VAR_0, VAR_1->network->neighbors, VAR_1);
                FUNC_1(VAR_1->network->n_neighbors > 0);
                VAR_1->network->n_neighbors--;

                if (VAR_1->section)
                        FUNC_3(VAR_1->network->neighbors_by_section, VAR_1->section);
        }

        FUNC_4(VAR_1->section);

        if (VAR_1->link) {
                FUNC_5(VAR_1->link->neighbors, VAR_1);
                FUNC_5(VAR_1->link->neighbors_foreign, VAR_1);
        }

        FUNC_2(VAR_1);
}
