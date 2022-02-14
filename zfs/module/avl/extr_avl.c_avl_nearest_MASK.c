
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t avl_offset; int * avl_root; } ;
typedef TYPE_1__ avl_tree_t ;
typedef int avl_node_t ;
typedef int avl_index_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 void* FUNC_3 (int *,size_t) ;
 void* FUNC_4 (TYPE_1__*,void*,int) ;

void *
FUNC_5(avl_tree_t *VAR_0, avl_index_t VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1);
 avl_node_t *VAR_4 = FUNC_2(VAR_1);
 void *VAR_5;
 size_t VAR_6 = VAR_0->avl_offset;

 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_0->avl_root == ((void*)0));
  return (((void*)0));
 }
 VAR_5 = FUNC_3(VAR_4, VAR_6);
 if (VAR_3 != VAR_2)
  return (VAR_5);

 return (FUNC_4(VAR_0, VAR_5, VAR_2));
}
