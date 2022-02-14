
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ulw_list; } ;
typedef TYPE_1__ uu_list_walk_t ;
typedef int uu_list_t ;
typedef int uu_list_node_impl_t ;


 void* FUNC_0 (int *,int *) ;
 int * FUNC_1 (TYPE_1__*,int *) ;

void *
FUNC_2(uu_list_walk_t *VAR_0)
{
 uu_list_t *VAR_1 = VAR_0->ulw_list;
 uu_list_node_impl_t *VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2 == ((void*)0))
  return (((void*)0));

 return (FUNC_0(VAR_1, VAR_2));
}
