
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct screen {int cx; int cy; TYPE_1__* grid; } ;
struct window_pane {scalar_t__ saved_cx; scalar_t__ saved_cy; int flags; TYPE_2__* saved_grid; struct screen base; int saved_cell; int options; } ;
struct grid_cell {int dummy; } ;
struct TYPE_5__ {int sy; int sx; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ,TYPE_2__*,int ,int) ;
 int FUNC_2 (struct grid_cell*,int *,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct screen*) ;
 int FUNC_5 (struct screen*,int,int,int) ;
 int FUNC_6 (struct screen*) ;
 int FUNC_7 (struct screen*) ;

void
FUNC_8(struct window_pane *VAR_3, struct grid_cell *VAR_4,
    int VAR_5)
{
 struct screen *VAR_6 = &VAR_3->base;
 u_int VAR_7, VAR_8;

 if (!FUNC_3(VAR_3->options, "alternate-screen"))
  return;





 if (VAR_5 && VAR_3->saved_cx != VAR_2 && VAR_3->saved_cy != VAR_2) {
  VAR_6->cx = VAR_3->saved_cx;
  if (VAR_6->cx > FUNC_6(VAR_6) - 1)
   VAR_6->cx = FUNC_6(VAR_6) - 1;
  VAR_6->cy = VAR_3->saved_cy;
  if (VAR_6->cy > FUNC_7(VAR_6) - 1)
   VAR_6->cy = FUNC_7(VAR_6) - 1;
  FUNC_2(VAR_4, &VAR_3->saved_cell, sizeof *VAR_4);
 }

 if (VAR_3->saved_grid == ((void*)0))
  return;
 VAR_7 = FUNC_6(VAR_6);
 VAR_8 = FUNC_7(VAR_6);





 if (VAR_8 > VAR_3->saved_grid->sy)
  FUNC_5(VAR_6, VAR_7, VAR_3->saved_grid->sy, 1);


 FUNC_1(VAR_6->grid, FUNC_4(VAR_6), VAR_3->saved_grid, 0, VAR_8);





 VAR_3->base.grid->flags |= VAR_0;
 if (VAR_8 > VAR_3->saved_grid->sy || VAR_7 != VAR_3->saved_grid->sx)
  FUNC_5(VAR_6, VAR_7, VAR_8, 1);

 FUNC_0(VAR_3->saved_grid);
 VAR_3->saved_grid = ((void*)0);

 VAR_3->flags |= VAR_1;
}
