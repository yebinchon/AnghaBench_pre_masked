
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int multilist_sublist_t ;
struct TYPE_9__ {TYPE_1__* ms_group; int ms_class_txg_node; int ms_weight; scalar_t__ ms_activation_weight; int ms_unload_time; scalar_t__ ms_loaded; int ms_allocatable; int ms_lock; } ;
typedef TYPE_2__ metaslab_t ;
struct TYPE_10__ {int mc_metaslab_txg_list; } ;
typedef TYPE_3__ metaslab_class_t ;
struct TYPE_8__ {TYPE_3__* mg_class; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int *) ;

void
FUNC_9(metaslab_t *VAR_2)
{
 FUNC_0(FUNC_1(&VAR_2->ms_lock));






 if (!VAR_2->ms_loaded)
  return;

 FUNC_8(VAR_2->ms_allocatable, ((void*)0), ((void*)0));
 VAR_2->ms_loaded = VAR_0;
 VAR_2->ms_unload_time = FUNC_2();

 VAR_2->ms_activation_weight = 0;
 VAR_2->ms_weight &= ~VAR_1;

 if (VAR_2->ms_group != ((void*)0)) {
  metaslab_class_t *VAR_3 = VAR_2->ms_group->mg_class;
  multilist_sublist_t *VAR_4 =
      FUNC_5(VAR_3->mc_metaslab_txg_list, VAR_2);
  if (FUNC_4(&VAR_2->ms_class_txg_node))
   FUNC_6(VAR_4, VAR_2);
  FUNC_7(VAR_4);
 }
 if (VAR_2->ms_group != ((void*)0))
  FUNC_3(VAR_2);
}
