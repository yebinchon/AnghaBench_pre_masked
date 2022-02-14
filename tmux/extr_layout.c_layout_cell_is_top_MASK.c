
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window {struct layout_cell* layout_root; } ;
struct layout_cell {scalar_t__ type; int cells; struct layout_cell* parent; } ;


 scalar_t__ VAR_0 ;
 struct layout_cell* FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct window *VAR_1, struct layout_cell *VAR_2)
{
 struct layout_cell *VAR_3;

 while (VAR_2 != VAR_1->layout_root) {
  VAR_3 = VAR_2->parent;
  if (VAR_3->type == VAR_0 &&
      VAR_2 != FUNC_0(&VAR_3->cells))
   return (0);
  VAR_2 = VAR_3;
 }
 return (1);
}
