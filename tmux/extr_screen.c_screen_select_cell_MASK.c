
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct screen {TYPE_1__* sel; } ;
struct grid_cell {int attr; int flags; int data; } ;
struct TYPE_2__ {int cell; scalar_t__ hidden; } ;


 int VAR_0 ;
 int FUNC_0 (struct grid_cell*,int *,int) ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2(struct screen *VAR_1, struct grid_cell *VAR_2,
    const struct grid_cell *VAR_3)
{
 if (VAR_1->sel == ((void*)0) || VAR_1->sel->hidden)
  return;

 FUNC_0(VAR_2, &VAR_1->sel->cell, sizeof *VAR_2);

 FUNC_1(&VAR_2->data, &VAR_3->data);
 VAR_2->attr = VAR_2->attr & ~VAR_0;
 VAR_2->attr |= VAR_3->attr & VAR_0;
 VAR_2->flags = VAR_3->flags;
}
