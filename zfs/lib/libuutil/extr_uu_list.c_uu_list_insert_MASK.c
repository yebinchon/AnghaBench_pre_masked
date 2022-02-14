
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * uln_prev; } ;
struct TYPE_9__ {scalar_t__ ul_debug; TYPE_2__ ul_null_node; } ;
typedef TYPE_1__ uu_list_t ;
typedef TYPE_2__ uu_list_node_impl_t ;
typedef scalar_t__ uu_list_index_t ;


 int FUNC_0 (TYPE_1__*,void*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,int *,TYPE_2__*) ;
 int FUNC_5 (char*,void*,void*,void*,...) ;

void
FUNC_6(uu_list_t *VAR_0, void *VAR_1, uu_list_index_t VAR_2)
{
 uu_list_node_impl_t *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 == ((void*)0))
  VAR_3 = &VAR_0->ul_null_node;

 if (VAR_0->ul_debug) {
  if (!FUNC_3(VAR_0, VAR_2))
   FUNC_5("uu_list_insert(%p, %p, %p): %s\n",
       (void *)VAR_0, VAR_1, (void *)VAR_2,
       FUNC_1(VAR_2)? "outdated index" :
       "invalid index");
  if (VAR_3->uln_prev == ((void*)0))
   FUNC_5("uu_list_insert(%p, %p, %p): out-of-date "
       "index\n", (void *)VAR_0, VAR_1, (void *)VAR_2);
 }

 FUNC_4(VAR_0, FUNC_0(VAR_0, VAR_1), VAR_3->uln_prev, VAR_3);
}
