
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ ua_next_enc; scalar_t__ ua_prev_enc; } ;
struct TYPE_9__ {TYPE_2__* uap_next; TYPE_1__* uap_prev; int uap_name; TYPE_6__ uap_null_avl; scalar_t__ uap_debug; } ;
typedef TYPE_3__ uu_avl_pool_t ;
struct TYPE_8__ {TYPE_1__* uap_prev; } ;
struct TYPE_7__ {TYPE_2__* uap_next; } ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,int,int ,void*) ;

void
FUNC_5(uu_avl_pool_t *VAR_1)
{
 if (VAR_1->uap_debug) {
  if (VAR_1->uap_null_avl.ua_next_enc !=
      FUNC_0(&VAR_1->uap_null_avl) ||
      VAR_1->uap_null_avl.ua_prev_enc !=
      FUNC_0(&VAR_1->uap_null_avl)) {
   FUNC_4("uu_avl_pool_destroy: Pool \"%.*s\" (%p) has "
       "outstanding avls, or is corrupt.\n",
       (int)sizeof (VAR_1->uap_name), VAR_1->uap_name,
       (void *)VAR_1);
  }
 }
 (void) FUNC_1(&VAR_0);
 VAR_1->uap_next->uap_prev = VAR_1->uap_prev;
 VAR_1->uap_prev->uap_next = VAR_1->uap_next;
 (void) FUNC_2(&VAR_0);
 VAR_1->uap_prev = ((void*)0);
 VAR_1->uap_next = ((void*)0);
 FUNC_3(VAR_1);
}
