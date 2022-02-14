
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * uln_prev; } ;
struct TYPE_9__ {scalar_t__ ul_debug; scalar_t__ ul_sorted; TYPE_2__ ul_null_node; } ;
typedef TYPE_1__ uu_list_t ;
typedef TYPE_2__ uu_list_node_impl_t ;


 TYPE_2__* FUNC_0 (TYPE_1__*,void*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int *,TYPE_2__*) ;
 int FUNC_2 (char*,void*,...) ;
 int FUNC_3 (int ) ;

int
FUNC_4(uu_list_t *VAR_1, void *VAR_2, void *VAR_3)
{
 uu_list_node_impl_t *VAR_4 = FUNC_0(VAR_1, VAR_2);

 if (VAR_2 == ((void*)0))
  VAR_4 = &VAR_1->ul_null_node;

 if (VAR_1->ul_debug) {
  if (VAR_4->uln_prev == ((void*)0))
   FUNC_2("uu_list_insert_before(%p, %p, %p): %p is "
       "not currently on a list\n",
       (void *)VAR_1, VAR_2, VAR_3, VAR_2);
 }
 if (VAR_1->ul_sorted) {
  if (VAR_1->ul_debug)
   FUNC_2("uu_list_insert_before(%p, ...): list is "
       "UU_LIST_SORTED\n", (void *)VAR_1);
  FUNC_3(VAR_0);
  return (-1);
 }

 FUNC_1(VAR_1, FUNC_0(VAR_1, VAR_3), VAR_4->uln_prev, VAR_4);
 return (0);
}
