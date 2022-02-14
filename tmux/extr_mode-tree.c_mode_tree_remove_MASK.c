
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mode_tree_item {int children; struct mode_tree_item* parent; } ;
struct mode_tree_data {int children; } ;


 int FUNC_0 (int *,struct mode_tree_item*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mode_tree_item*) ;

void
FUNC_2(struct mode_tree_data *VAR_1, struct mode_tree_item *VAR_2)
{
 struct mode_tree_item *VAR_3 = VAR_2->parent;

 if (VAR_3 != ((void*)0))
  FUNC_0(&VAR_3->children, VAR_2, VAR_0);
 else
  FUNC_0(&VAR_1->children, VAR_2, VAR_0);
 FUNC_1(VAR_2);
}
