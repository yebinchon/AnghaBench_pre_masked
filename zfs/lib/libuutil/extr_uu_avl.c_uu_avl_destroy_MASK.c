
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* uaw_prev; struct TYPE_7__* uaw_next; } ;
struct TYPE_8__ {int ua_tree; TYPE_3__* ua_pool; void* ua_next_enc; void* ua_prev_enc; TYPE_1__ ua_null_walk; scalar_t__ ua_debug; } ;
typedef TYPE_2__ uu_avl_t ;
struct TYPE_9__ {int uap_lock; } ;
typedef TYPE_3__ uu_avl_pool_t ;
struct TYPE_10__ {void* ua_next_enc; void* ua_prev_enc; } ;


 TYPE_6__* FUNC_0 (void*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*,void*) ;

void
FUNC_8(uu_avl_t *VAR_0)
{
 uu_avl_pool_t *VAR_1 = VAR_0->ua_pool;

 if (VAR_0->ua_debug) {
  if (FUNC_3(&VAR_0->ua_tree) != 0) {
   FUNC_7("uu_avl_destroy(%p): tree not empty\n",
       (void *)VAR_0);
  }
  if (VAR_0->ua_null_walk.uaw_next != &VAR_0->ua_null_walk ||
      VAR_0->ua_null_walk.uaw_prev != &VAR_0->ua_null_walk) {
   FUNC_7("uu_avl_destroy(%p):  outstanding walkers\n",
       (void *)VAR_0);
  }
 }
 (void) FUNC_4(&VAR_1->uap_lock);
 FUNC_0(VAR_0->ua_next_enc)->ua_prev_enc = VAR_0->ua_prev_enc;
 FUNC_0(VAR_0->ua_prev_enc)->ua_next_enc = VAR_0->ua_next_enc;
 (void) FUNC_5(&VAR_1->uap_lock);
 VAR_0->ua_prev_enc = FUNC_1(((void*)0));
 VAR_0->ua_next_enc = FUNC_1(((void*)0));

 VAR_0->ua_pool = ((void*)0);
 FUNC_2(&VAR_0->ua_tree);

 FUNC_6(VAR_0);
}
