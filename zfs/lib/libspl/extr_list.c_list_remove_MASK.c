
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int list_t ;
struct TYPE_4__ {int * list_next; } ;
typedef TYPE_1__ list_node_t ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(list_t *VAR_0, void *VAR_1)
{
 list_node_t *VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(!FUNC_2(VAR_0));
 FUNC_0(VAR_2->list_next != ((void*)0));
 FUNC_3(VAR_2);
}
