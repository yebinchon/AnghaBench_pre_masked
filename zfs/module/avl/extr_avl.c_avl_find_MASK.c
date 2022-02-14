
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t avl_offset; int (* avl_compar ) (void const*,void*) ;TYPE_2__* avl_root; } ;
typedef TYPE_1__ avl_tree_t ;
struct TYPE_7__ {struct TYPE_7__** avl_child; } ;
typedef TYPE_2__ avl_node_t ;
typedef int avl_index_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 void* FUNC_2 (TYPE_2__*,size_t) ;
 int* VAR_0 ;
 int FUNC_3 (void const*,void*) ;

void *
FUNC_4(avl_tree_t *VAR_1, const void *VAR_2, avl_index_t *VAR_3)
{
 avl_node_t *VAR_4;
 avl_node_t *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 int VAR_7;
 size_t VAR_8 = VAR_1->avl_offset;

 for (VAR_4 = VAR_1->avl_root; VAR_4 != ((void*)0);
     VAR_4 = VAR_4->avl_child[VAR_6]) {

  VAR_5 = VAR_4;

  VAR_7 = VAR_1->avl_compar(VAR_2, FUNC_2(VAR_4, VAR_8));
  FUNC_0(-1 <= VAR_7 && VAR_7 <= 1);
  if (VAR_7 == 0) {




   return (FUNC_2(VAR_4, VAR_8));
  }
  VAR_6 = VAR_0[1 + VAR_7];

 }

 if (VAR_3 != ((void*)0))
  *VAR_3 = FUNC_1(VAR_5, VAR_6);

 return (((void*)0));
}
