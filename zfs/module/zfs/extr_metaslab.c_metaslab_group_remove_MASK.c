
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int multilist_sublist_t ;
struct TYPE_11__ {TYPE_2__* ms_group; int ms_class_txg_node; int ms_lock; } ;
typedef TYPE_1__ metaslab_t ;
struct TYPE_12__ {int mg_lock; TYPE_3__* mg_class; int mg_metaslab_tree; } ;
typedef TYPE_2__ metaslab_group_t ;
struct TYPE_13__ {int mc_metaslab_txg_list; } ;
typedef TYPE_3__ metaslab_class_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(metaslab_group_t *VAR_0, metaslab_t *VAR_1)
{
 FUNC_7(&VAR_1->ms_lock);
 FUNC_2(VAR_0, VAR_1);
 FUNC_8(&VAR_1->ms_lock);

 FUNC_7(&VAR_0->mg_lock);
 FUNC_0(VAR_1->ms_group == VAR_0);
 FUNC_1(&VAR_0->mg_metaslab_tree, VAR_1);

 metaslab_class_t *VAR_2 = VAR_1->ms_group->mg_class;
 multilist_sublist_t *VAR_3 =
     FUNC_4(VAR_2->mc_metaslab_txg_list, VAR_1);
 if (FUNC_3(&VAR_1->ms_class_txg_node))
  FUNC_5(VAR_3, VAR_1);
 FUNC_6(VAR_3);

 VAR_1->ms_group = ((void*)0);
 FUNC_8(&VAR_0->mg_lock);
}
