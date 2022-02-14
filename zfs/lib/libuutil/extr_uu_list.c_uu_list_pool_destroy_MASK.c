
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ ul_next_enc; scalar_t__ ul_prev_enc; } ;
struct TYPE_9__ {TYPE_2__* ulp_next; TYPE_1__* ulp_prev; int ulp_name; TYPE_6__ ulp_null_list; scalar_t__ ulp_debug; } ;
typedef TYPE_3__ uu_list_pool_t ;
struct TYPE_8__ {TYPE_1__* ulp_prev; } ;
struct TYPE_7__ {TYPE_2__* ulp_next; } ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_4 (char*,int,int ,void*) ;

void
FUNC_5(uu_list_pool_t *VAR_1)
{
 if (VAR_1->ulp_debug) {
  if (VAR_1->ulp_null_list.ul_next_enc !=
      FUNC_0(&VAR_1->ulp_null_list) ||
      VAR_1->ulp_null_list.ul_prev_enc !=
      FUNC_0(&VAR_1->ulp_null_list)) {
   FUNC_4("uu_list_pool_destroy: Pool \"%.*s\" (%p) has "
       "outstanding lists, or is corrupt.\n",
       (int)sizeof (VAR_1->ulp_name), VAR_1->ulp_name,
       (void *)VAR_1);
  }
 }
 (void) FUNC_1(&VAR_0);
 VAR_1->ulp_next->ulp_prev = VAR_1->ulp_prev;
 VAR_1->ulp_prev->ulp_next = VAR_1->ulp_next;
 (void) FUNC_2(&VAR_0);
 VAR_1->ulp_prev = ((void*)0);
 VAR_1->ulp_next = ((void*)0);
 FUNC_3(VAR_1);
}
