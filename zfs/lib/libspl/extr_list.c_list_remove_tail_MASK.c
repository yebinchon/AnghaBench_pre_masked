
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* list_prev; } ;
struct TYPE_7__ {TYPE_2__ list_head; } ;
typedef TYPE_1__ list_t ;
typedef TYPE_2__ list_node_t ;


 void* FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void *
FUNC_2(list_t *VAR_0)
{
 list_node_t *VAR_1 = VAR_0->list_head.list_prev;
 if (VAR_1 == &VAR_0->list_head)
  return (((void*)0));
 FUNC_1(VAR_1);
 return (FUNC_0(VAR_0, VAR_1));
}
