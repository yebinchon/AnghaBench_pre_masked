
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* uaw_next_result; scalar_t__ uaw_robust; struct TYPE_6__* uaw_next; } ;
typedef TYPE_1__ uu_avl_walk_t ;
struct TYPE_7__ {int ua_tree; TYPE_1__ ua_null_walk; int ua_index; scalar_t__ ua_debug; int * ua_pool; } ;
typedef TYPE_2__ uu_avl_t ;
typedef int uu_avl_pool_t ;


 int FUNC_0 (int ) ;
 uintptr_t* FUNC_1 (int *,void*) ;
 uintptr_t FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (char*,void*,void*) ;

void
FUNC_6(uu_avl_t *VAR_0, void *VAR_1)
{
 uu_avl_walk_t *VAR_2;
 uu_avl_pool_t *VAR_3 = VAR_0->ua_pool;
 uintptr_t *VAR_4 = FUNC_1(VAR_3, VAR_1);

 if (VAR_0->ua_debug) {



  VAR_0->ua_index = FUNC_0(VAR_0->ua_index);
 }






 for (VAR_2 = VAR_0->ua_null_walk.uaw_next; VAR_2 != &VAR_0->ua_null_walk;
     VAR_2 = VAR_2->uaw_next) {
  if (VAR_2->uaw_robust) {
   if (VAR_1 == VAR_2->uaw_next_result)
    (void) FUNC_3(VAR_2, VAR_0);
  } else if (VAR_2->uaw_next_result != ((void*)0)) {
   FUNC_5("uu_avl_remove(%p, %p): active non-robust "
       "walker\n", (void *)VAR_0, VAR_1);
  }
 }

 FUNC_4(&VAR_0->ua_tree, VAR_1);

 VAR_4[0] = FUNC_2(VAR_3);
 VAR_4[1] = 0;
}
