
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zl_bp_tree; } ;
typedef TYPE_1__ zilog_t ;
typedef int zil_bp_node_t ;
typedef int avl_tree_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,void**) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(zilog_t *VAR_0)
{
 avl_tree_t *VAR_1 = &VAR_0->zl_bp_tree;
 zil_bp_node_t *VAR_2;
 void *VAR_3 = ((void*)0);

 while ((VAR_2 = FUNC_1(VAR_1, &VAR_3)) != ((void*)0))
  FUNC_2(VAR_2, sizeof (zil_bp_node_t));

 FUNC_0(VAR_1);
}
