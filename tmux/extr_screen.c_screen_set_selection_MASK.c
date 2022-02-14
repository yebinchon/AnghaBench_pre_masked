
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_int ;
struct screen {TYPE_1__* sel; } ;
struct grid_cell {int dummy; } ;
struct TYPE_2__ {int modekeys; void* ey; void* ex; void* sy; void* sx; void* rectangle; scalar_t__ hidden; int cell; } ;


 int FUNC_0 (int *,struct grid_cell*,int) ;
 TYPE_1__* FUNC_1 (int,int) ;

void
FUNC_2(struct screen *VAR_0, u_int VAR_1, u_int VAR_2,
    u_int VAR_3, u_int VAR_4, u_int VAR_5, int VAR_6, struct grid_cell *VAR_7)
{
 if (VAR_0->sel == ((void*)0))
  VAR_0->sel = FUNC_1(1, sizeof *VAR_0->sel);

 FUNC_0(&VAR_0->sel->cell, VAR_7, sizeof VAR_0->sel->cell);
 VAR_0->sel->hidden = 0;
 VAR_0->sel->rectangle = VAR_5;
 VAR_0->sel->modekeys = VAR_6;

 VAR_0->sel->sx = VAR_1;
 VAR_0->sel->sy = VAR_2;
 VAR_0->sel->ex = VAR_3;
 VAR_0->sel->ey = VAR_4;
}
