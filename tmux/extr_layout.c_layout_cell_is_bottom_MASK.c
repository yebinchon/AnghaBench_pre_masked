
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window {struct layout_cell* layout_root; } ;
struct layout_cell {scalar_t__ type; int cells; struct layout_cell* parent; } ;


 scalar_t__ VAR_0 ;
 struct layout_cell* FUNC_0 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct window *VAR_2, struct layout_cell *VAR_3)
{
 struct layout_cell *VAR_4;

 while (VAR_3 != VAR_2->layout_root) {
  VAR_4 = VAR_3->parent;
  if (VAR_4->type == VAR_0 &&
      VAR_3 != FUNC_0(&VAR_4->cells, VAR_1))
   return (0);
  VAR_3 = VAR_4;
 }
 return (1);
}
