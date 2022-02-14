
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grid_cell {scalar_t__ fg; scalar_t__ bg; int attr; } ;
struct style {scalar_t__ fill; scalar_t__ align; struct grid_cell gc; } ;


 int VAR_0 ;

int
FUNC_0(struct style *VAR_1, struct style *VAR_2)
{
 struct grid_cell *VAR_3 = &VAR_1->gc;
 struct grid_cell *VAR_4 = &VAR_2->gc;

 if (VAR_3->fg != VAR_4->fg)
  return (0);
 if (VAR_3->bg != VAR_4->bg)
  return (0);
 if ((VAR_3->attr & VAR_0) != (VAR_4->attr & VAR_0))
  return (0);
 if (VAR_1->fill != VAR_2->fill)
  return (0);
 if (VAR_1->align != VAR_2->align)
  return (0);
 return (1);
}
