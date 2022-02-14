
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t avl_offset; } ;
typedef TYPE_1__ avl_tree_t ;
struct TYPE_10__ {struct TYPE_10__** avl_child; } ;
typedef TYPE_2__ avl_node_t ;


 TYPE_2__* FUNC_0 (void*,size_t) ;
 void* FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;

void *
FUNC_4(avl_tree_t *VAR_0, void *VAR_1, int VAR_2)
{
 size_t VAR_3 = VAR_0->avl_offset;
 avl_node_t *VAR_4 = FUNC_0(VAR_1, VAR_3);
 int VAR_5 = 1 - VAR_2;
 int VAR_6;





 if (VAR_4 == ((void*)0))
  return (((void*)0));







 if (VAR_4->avl_child[VAR_2] != ((void*)0)) {
  for (VAR_4 = VAR_4->avl_child[VAR_2];
      VAR_4->avl_child[VAR_5] != ((void*)0);
      VAR_4 = VAR_4->avl_child[VAR_5])
   ;



 } else {
  for (;;) {
   VAR_6 = FUNC_2(VAR_4);
   VAR_4 = FUNC_3(VAR_4);
   if (VAR_4 == ((void*)0))
    return (((void*)0));
   if (VAR_6 == VAR_5)
    break;
  }
 }

 return (FUNC_1(VAR_4, VAR_3));
}
