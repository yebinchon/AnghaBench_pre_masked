
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mode_tree_item {int itemdata; int name; struct mode_tree_item* parent; int children; } ;
struct mode_tree_data {size_t current; int * search; int modedata; scalar_t__ (* searchcb ) (int ,int ,int *) ;int children; TYPE_1__* line_list; } ;
struct TYPE_2__ {struct mode_tree_item* item; } ;


 int FUNC_0 (int *) ;
 struct mode_tree_item* FUNC_1 (int *) ;
 struct mode_tree_item* FUNC_2 (struct mode_tree_item*,int ) ;
 int VAR_0 ;
 int * FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static struct mode_tree_item *
FUNC_5(struct mode_tree_data *VAR_1)
{
 struct mode_tree_item *VAR_2, *VAR_3, *VAR_4;

 if (VAR_1->search == ((void*)0))
  return (((void*)0));

 VAR_2 = VAR_3 = VAR_1->line_list[VAR_1->current].item;
 for (;;) {
  if (!FUNC_0(&VAR_2->children))
   VAR_2 = FUNC_1(&VAR_2->children);
  else if ((VAR_4 = FUNC_2(VAR_2, VAR_0)) != ((void*)0))
   VAR_2 = VAR_4;
  else {
   for (;;) {
    VAR_2 = VAR_2->parent;
    if (VAR_2 == ((void*)0))
     break;
    if ((VAR_4 = FUNC_2(VAR_2, VAR_0)) != ((void*)0)) {
     VAR_2 = VAR_4;
     break;
    }
   }
  }
  if (VAR_2 == ((void*)0))
   VAR_2 = FUNC_1(&VAR_1->children);
  if (VAR_2 == VAR_3)
   break;

  if (VAR_1->searchcb == ((void*)0)) {
   if (FUNC_3(VAR_2->name, VAR_1->search) != ((void*)0))
    return (VAR_2);
   continue;
  }
  if (VAR_1->searchcb(VAR_1->modedata, VAR_2->itemdata, VAR_1->search))
   return (VAR_2);
 }
 return (((void*)0));
}
