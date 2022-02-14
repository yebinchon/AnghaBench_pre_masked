
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list_t ;
typedef int list_node_t ;


 int * FUNC_0 (int *,void*) ;
 int FUNC_1 (int *,int *,void*) ;
 int FUNC_2 (int *,void*) ;

void
FUNC_3(list_t *VAR_0, void *VAR_1, void *VAR_2)
{
 if (VAR_1 == ((void*)0)) {
  FUNC_2(VAR_0, VAR_2);
 } else {
  list_node_t *VAR_3 = FUNC_0(VAR_0, VAR_1);
  FUNC_1(VAR_0, VAR_3, VAR_2);
 }
}
