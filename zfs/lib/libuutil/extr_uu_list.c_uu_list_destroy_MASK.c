
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* ulw_prev; struct TYPE_9__* ulw_next; } ;
struct TYPE_8__ {struct TYPE_8__* uln_prev; struct TYPE_8__* uln_next; } ;
struct TYPE_10__ {scalar_t__ ul_numnodes; TYPE_4__* ul_pool; void* ul_next_enc; void* ul_prev_enc; TYPE_2__ ul_null_walk; TYPE_1__ ul_null_node; scalar_t__ ul_debug; } ;
typedef TYPE_3__ uu_list_t ;
struct TYPE_11__ {int ulp_lock; } ;
typedef TYPE_4__ uu_list_pool_t ;
struct TYPE_12__ {void* ul_next_enc; void* ul_prev_enc; } ;


 TYPE_7__* FUNC_0 (void*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*,void*) ;

void
FUNC_6(uu_list_t *VAR_0)
{
 uu_list_pool_t *VAR_1 = VAR_0->ul_pool;

 if (VAR_0->ul_debug) {
  if (VAR_0->ul_null_node.uln_next != &VAR_0->ul_null_node ||
      VAR_0->ul_null_node.uln_prev != &VAR_0->ul_null_node) {
   FUNC_5("uu_list_destroy(%p):  list not empty\n",
       (void *)VAR_0);
  }
  if (VAR_0->ul_numnodes != 0) {
   FUNC_5("uu_list_destroy(%p):  numnodes is nonzero, "
       "but list is empty\n", (void *)VAR_0);
  }
  if (VAR_0->ul_null_walk.ulw_next != &VAR_0->ul_null_walk ||
      VAR_0->ul_null_walk.ulw_prev != &VAR_0->ul_null_walk) {
   FUNC_5("uu_list_destroy(%p):  outstanding walkers\n",
       (void *)VAR_0);
  }
 }

 (void) FUNC_2(&VAR_1->ulp_lock);
 FUNC_0(VAR_0->ul_next_enc)->ul_prev_enc = VAR_0->ul_prev_enc;
 FUNC_0(VAR_0->ul_prev_enc)->ul_next_enc = VAR_0->ul_next_enc;
 (void) FUNC_3(&VAR_1->ulp_lock);
 VAR_0->ul_prev_enc = FUNC_1(((void*)0));
 VAR_0->ul_next_enc = FUNC_1(((void*)0));
 VAR_0->ul_pool = ((void*)0);
 FUNC_4(VAR_0);
}
