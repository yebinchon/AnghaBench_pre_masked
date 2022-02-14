
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ua_debug; int ua_tree; TYPE_1__* ua_pool; } ;
typedef TYPE_2__ uu_avl_t ;
typedef int uu_avl_index_t ;
struct uu_avl_node_compare_info {void* ac_found; void* ac_right; void* ac_private; int ac_compare; } ;
struct TYPE_5__ {int uap_cmp; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 void* FUNC_1 (int *,struct uu_avl_node_compare_info*,int *) ;
 int FUNC_2 (char*) ;

void *
FUNC_3(uu_avl_t *VAR_0, void *VAR_1, void *VAR_2, uu_avl_index_t *VAR_3)
{
 struct uu_avl_node_compare_info VAR_4;
 void *VAR_5;

 VAR_4.ac_compare = VAR_0->ua_pool->uap_cmp;
 VAR_4.ac_private = VAR_2;
 VAR_4.ac_right = VAR_1;
 VAR_4.ac_found = ((void*)0);

 VAR_5 = FUNC_1(&VAR_0->ua_tree, &VAR_4, VAR_3);
 if (VAR_3 != ((void*)0))
  *VAR_3 = FUNC_0(VAR_0, *VAR_3);

 if (VAR_0->ua_debug && VAR_5 != ((void*)0))
  FUNC_2("uu_avl_find: internal error: avl_find succeeded\n");

 return (VAR_4.ac_found);
}
