
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ds_bookmarks; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_7__ {int dbn_lock; int dbn_name; } ;
typedef TYPE_2__ dsl_bookmark_node_t ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,void**) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void
FUNC_5(dsl_dataset_t *VAR_0)
{
 void *VAR_1 = ((void*)0);
 dsl_bookmark_node_t *VAR_2;

 if (VAR_0->ds_is_snapshot)
  return;

 while ((VAR_2 = FUNC_1(&VAR_0->ds_bookmarks, &VAR_1)) != ((void*)0)) {
  FUNC_4(VAR_2->dbn_name);
  FUNC_3(&VAR_2->dbn_lock);
  FUNC_2(VAR_2, sizeof (*VAR_2));
 }
 FUNC_0(&VAR_0->ds_bookmarks);
}
