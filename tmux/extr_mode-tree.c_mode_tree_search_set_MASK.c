
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct mode_tree_item {int expanded; struct mode_tree_item* parent; int tag; } ;
struct mode_tree_data {TYPE_1__* wp; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct mode_tree_data*) ;
 int FUNC_1 (struct mode_tree_data*) ;
 struct mode_tree_item* FUNC_2 (struct mode_tree_data*) ;
 int FUNC_3 (struct mode_tree_data*,int ) ;

__attribute__((used)) static void
FUNC_4(struct mode_tree_data *VAR_1)
{
 struct mode_tree_item *VAR_2, *VAR_3;
 uint64_t VAR_4;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0))
  return;
 VAR_4 = VAR_2->tag;

 VAR_3 = VAR_2->parent;
 while (VAR_3 != ((void*)0)) {
  VAR_3->expanded = 1;
  VAR_3 = VAR_3->parent;
 }

 FUNC_0(VAR_1);
 FUNC_3(VAR_1, VAR_4);
 FUNC_1(VAR_1);
 VAR_1->wp->flags |= VAR_0;
}
