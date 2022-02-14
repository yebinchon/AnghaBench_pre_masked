
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t avl_offset; TYPE_2__* avl_root; } ;
typedef TYPE_1__ avl_tree_t ;
struct TYPE_6__ {struct TYPE_6__** avl_child; } ;
typedef TYPE_2__ avl_node_t ;


 void* FUNC_0 (TYPE_2__*,size_t) ;

void *
FUNC_1(avl_tree_t *VAR_0)
{
 avl_node_t *VAR_1;
 avl_node_t *VAR_2 = ((void*)0);
 size_t VAR_3 = VAR_0->avl_offset;

 for (VAR_1 = VAR_0->avl_root; VAR_1 != ((void*)0); VAR_1 = VAR_1->avl_child[0])
  VAR_2 = VAR_1;

 if (VAR_2 != ((void*)0))
  return (FUNC_0(VAR_2, VAR_3));
 return (((void*)0));
}
