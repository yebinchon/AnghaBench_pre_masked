
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uu_avl_walk_t ;
struct TYPE_7__ {scalar_t__ cl_pool; scalar_t__ cl_tree; int cn_handle; } ;
typedef TYPE_1__ prop_changenode_t ;
typedef TYPE_1__ prop_changelist_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int * FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(prop_changelist_t *VAR_1)
{
 prop_changenode_t *VAR_2;

 if (VAR_1->cl_tree) {
  uu_avl_walk_t *VAR_3;

  if ((VAR_3 = FUNC_6(VAR_1->cl_tree,
      VAR_0)) == ((void*)0))
   return;

  while ((VAR_2 = FUNC_5(VAR_3)) != ((void*)0)) {
   FUNC_3(VAR_1->cl_tree, VAR_2);
   FUNC_7(VAR_2->cn_handle);
   FUNC_0(VAR_2);
  }

  FUNC_4(VAR_3);
  FUNC_1(VAR_1->cl_tree);
 }
 if (VAR_1->cl_pool)
  FUNC_2(VAR_1->cl_pool);

 FUNC_0(VAR_1);
}
