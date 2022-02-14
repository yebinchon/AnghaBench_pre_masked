
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int nvlist_t ;
typedef int dsl_pool_t ;
struct TYPE_10__ {int ds_bookmarks; TYPE_1__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_11__ {int dbn_name; int dbn_phys; } ;
typedef TYPE_3__ dsl_bookmark_node_t ;
struct TYPE_9__ {int * dd_pool; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;

int
FUNC_10(dsl_dataset_t *VAR_1, nvlist_t *VAR_2, nvlist_t *VAR_3)
{
 dsl_pool_t *VAR_4 = VAR_1->ds_dir->dd_pool;

 FUNC_0(FUNC_6(VAR_4));

 if (FUNC_5(VAR_1))
  return (FUNC_2(VAR_0));

 for (dsl_bookmark_node_t *VAR_5 = FUNC_3(&VAR_1->ds_bookmarks);
     VAR_5 != ((void*)0); VAR_5 = FUNC_1(&VAR_1->ds_bookmarks, VAR_5)) {
  nvlist_t *VAR_6 = FUNC_8();

  FUNC_4(VAR_4, &VAR_5->dbn_phys, VAR_2, VAR_6);

  FUNC_7(VAR_3, VAR_5->dbn_name, VAR_6);
  FUNC_9(VAR_6);
 }
 return (0);
}
