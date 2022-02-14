
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* avl_root; } ;
typedef TYPE_1__ avl_tree_t ;
struct TYPE_14__ {struct TYPE_14__** avl_child; } ;
typedef TYPE_2__ avl_node_t ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(avl_tree_t *VAR_0, avl_node_t *VAR_1, int VAR_2)
{
 int VAR_3 = !(VAR_2 < 0);
 int VAR_4 = 1 - VAR_3;
 int VAR_5 = VAR_2 >> 1;
 int VAR_6 = -VAR_5;
 avl_node_t *VAR_7 = FUNC_5(VAR_1);
 avl_node_t *VAR_8 = VAR_1->avl_child[VAR_3];
 avl_node_t *VAR_9;
 avl_node_t *VAR_10;
 avl_node_t *VAR_11;
 avl_node_t *VAR_12;
 int VAR_13 = FUNC_4(VAR_1);
 int VAR_14 = FUNC_3(VAR_8);
 if (VAR_14 != VAR_6) {







  VAR_14 += VAR_6;




  VAR_9 = VAR_8->avl_child[VAR_4];
  VAR_1->avl_child[VAR_3] = VAR_9;
  if (VAR_9 != ((void*)0)) {
   FUNC_2(VAR_9, VAR_1);
   FUNC_1(VAR_9, VAR_3);
  }




  VAR_8->avl_child[VAR_4] = VAR_1;
  FUNC_0(VAR_1, -VAR_14);
  FUNC_1(VAR_1, VAR_4);
  FUNC_2(VAR_1, VAR_8);




  FUNC_0(VAR_8, VAR_14);
  FUNC_1(VAR_8, VAR_13);
  FUNC_2(VAR_8, VAR_7);
  if (VAR_7 != ((void*)0))
   VAR_7->avl_child[VAR_13] = VAR_8;
  else
   VAR_0->avl_root = VAR_8;

  return (VAR_14 == 0);
 }
 VAR_10 = VAR_8->avl_child[VAR_4];
 VAR_12 = VAR_10->avl_child[VAR_3];
 VAR_11 = VAR_10->avl_child[VAR_4];






 VAR_1->avl_child[VAR_3] = VAR_11;
 if (VAR_11 != ((void*)0)) {
  FUNC_2(VAR_11, VAR_1);
  FUNC_1(VAR_11, VAR_3);
 }

 VAR_8->avl_child[VAR_4] = VAR_12;
 if (VAR_12 != ((void*)0)) {
  FUNC_2(VAR_12, VAR_8);
  FUNC_1(VAR_12, VAR_4);
 }
 VAR_2 = FUNC_3(VAR_10);
 VAR_10->avl_child[VAR_3] = VAR_8;
 FUNC_0(VAR_8, (VAR_2 == VAR_6 ? VAR_5 : 0));
 FUNC_2(VAR_8, VAR_10);
 FUNC_1(VAR_8, VAR_3);

 VAR_10->avl_child[VAR_4] = VAR_1;
 FUNC_0(VAR_1, (VAR_2 == VAR_5 ? VAR_6 : 0));
 FUNC_2(VAR_1, VAR_10);
 FUNC_1(VAR_1, VAR_4);

 FUNC_0(VAR_10, 0);
 FUNC_2(VAR_10, VAR_7);
 FUNC_1(VAR_10, VAR_13);
 if (VAR_7 != ((void*)0))
  VAR_7->avl_child[VAR_13] = VAR_10;
 else
  VAR_0->avl_root = VAR_10;

 return (1);
}
