
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int multilist_sublist_t ;
struct TYPE_9__ {int ms_selected_time; int ms_selected_txg; int ms_class_txg_node; TYPE_1__* ms_group; int ms_lock; } ;
typedef TYPE_2__ metaslab_t ;
struct TYPE_10__ {int mc_metaslab_txg_list; } ;
typedef TYPE_3__ metaslab_class_t ;
struct TYPE_8__ {TYPE_3__* mg_class; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int * FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *) ;

void
FUNC_8(metaslab_t *VAR_0, uint64_t VAR_1)
{
 FUNC_0(FUNC_1(&VAR_0->ms_lock));
 metaslab_class_t *VAR_2 = VAR_0->ms_group->mg_class;
 multilist_sublist_t *VAR_3 =
     FUNC_5(VAR_2->mc_metaslab_txg_list, VAR_0);
 if (FUNC_3(&VAR_0->ms_class_txg_node))
  FUNC_6(VAR_3, VAR_0);
 VAR_0->ms_selected_txg = VAR_1;
 VAR_0->ms_selected_time = FUNC_2();
 FUNC_4(VAR_3, VAR_0);
 FUNC_7(VAR_3);
}
