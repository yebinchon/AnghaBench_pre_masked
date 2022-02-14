
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct screen {TYPE_1__* grid; int cy; int cx; } ;
struct window_pane {int flags; struct screen base; int saved_cell; int saved_cy; int saved_cx; int * saved_grid; int options; } ;
struct grid_cell {int dummy; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int ,TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int) ;
 int FUNC_3 (int *,struct grid_cell*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct screen*) ;
 int FUNC_6 (struct screen*) ;
 int FUNC_7 (struct screen*) ;

void
FUNC_8(struct window_pane *VAR_2, struct grid_cell *VAR_3,
    int VAR_4)
{
 struct screen *VAR_5 = &VAR_2->base;
 u_int VAR_6, VAR_7;

 if (VAR_2->saved_grid != ((void*)0))
  return;
 if (!FUNC_4(VAR_2->options, "alternate-screen"))
  return;
 VAR_6 = FUNC_6(VAR_5);
 VAR_7 = FUNC_7(VAR_5);

 VAR_2->saved_grid = FUNC_0(VAR_6, VAR_7, 0);
 FUNC_1(VAR_2->saved_grid, 0, VAR_5->grid, FUNC_5(VAR_5), VAR_7);
 if (VAR_4) {
  VAR_2->saved_cx = VAR_5->cx;
  VAR_2->saved_cy = VAR_5->cy;
 }
 FUNC_3(&VAR_2->saved_cell, VAR_3, sizeof VAR_2->saved_cell);

 FUNC_2(VAR_5->grid, 0, 0, VAR_6, VAR_7, 8);

 VAR_2->base.grid->flags &= ~VAR_0;

 VAR_2->flags |= VAR_1;
}
