
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tree; } ;
typedef TYPE_1__ zed_strings_t ;
typedef int zed_strings_node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,void**) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(zed_strings_t *VAR_0)
{
 void *VAR_1;
 zed_strings_node_t *VAR_2;

 if (!VAR_0)
  return;

 VAR_1 = ((void*)0);
 while ((VAR_2 = FUNC_2(&VAR_0->tree, &VAR_1)))
  FUNC_0(VAR_2);

 FUNC_1(&VAR_0->tree);
 FUNC_3(VAR_0);
}
