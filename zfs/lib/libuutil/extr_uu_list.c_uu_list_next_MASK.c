
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* uln_next; } ;
struct TYPE_8__ {TYPE_2__ ul_null_node; } ;
typedef TYPE_1__ uu_list_t ;
typedef TYPE_2__ uu_list_node_impl_t ;


 TYPE_2__* FUNC_0 (TYPE_1__*,void*) ;
 void* FUNC_1 (TYPE_1__*,TYPE_2__*) ;

void *
FUNC_2(uu_list_t *VAR_0, void *VAR_1)
{
 uu_list_node_impl_t *VAR_2 = FUNC_0(VAR_0, VAR_1);

 VAR_2 = VAR_2->uln_next;
 if (VAR_2 == &VAR_0->ul_null_node)
  return (((void*)0));
 return (FUNC_1(VAR_0, VAR_2));
}
