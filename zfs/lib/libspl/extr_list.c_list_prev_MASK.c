
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int list_head; } ;
typedef TYPE_1__ list_t ;
struct TYPE_8__ {int * list_prev; } ;
typedef TYPE_2__ list_node_t ;


 TYPE_2__* FUNC_0 (TYPE_1__*,void*) ;
 void* FUNC_1 (TYPE_1__*,int *) ;

void *
FUNC_2(list_t *VAR_0, void *VAR_1)
{
 list_node_t *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2->list_prev != &VAR_0->list_head)
  return (FUNC_1(VAR_0, VAR_2->list_prev));

 return (((void*)0));
}
