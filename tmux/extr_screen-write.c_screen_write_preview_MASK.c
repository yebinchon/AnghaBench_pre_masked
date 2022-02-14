
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {int cx; int cy; int mode; TYPE_1__* grid; } ;
struct grid_cell {int attr; } ;
struct TYPE_2__ {scalar_t__ hsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int,struct grid_cell*) ;
 int FUNC_1 (struct screen*) ;
 int FUNC_2 (struct screen*) ;
 int FUNC_3 (struct screen_write_ctx*,struct grid_cell*) ;
 int FUNC_4 (struct screen_write_ctx*,struct screen*,int,scalar_t__,int,int) ;
 int FUNC_5 (struct screen_write_ctx*,int,int) ;

void
FUNC_6(struct screen_write_ctx *VAR_2, struct screen *VAR_3, u_int VAR_4,
    u_int VAR_5)
{
 struct screen *VAR_6 = VAR_2->s;
 struct grid_cell VAR_7;
 u_int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_8 = VAR_6->cx;
 VAR_9 = VAR_6->cy;





 if (VAR_3->mode & VAR_1) {
  VAR_10 = VAR_3->cx;
  if (VAR_10 < VAR_4 / 3)
   VAR_10 = 0;
  else
   VAR_10 = VAR_10 - VAR_4 / 3;
  if (VAR_10 + VAR_4 > FUNC_1(VAR_3)) {
   if (VAR_4 > FUNC_1(VAR_3))
    VAR_10 = 0;
   else
    VAR_10 = FUNC_1(VAR_3) - VAR_4;
  }
  VAR_11 = VAR_3->cy;
  if (VAR_11 < VAR_5 / 3)
   VAR_11 = 0;
  else
   VAR_11 = VAR_11 - VAR_5 / 3;
  if (VAR_11 + VAR_5 > FUNC_2(VAR_3)) {
   if (VAR_5 > FUNC_2(VAR_3))
    VAR_11 = 0;
   else
    VAR_11 = FUNC_2(VAR_3) - VAR_5;
  }
 } else {
  VAR_10 = 0;
  VAR_11 = 0;
 }

 FUNC_4(VAR_2, VAR_3, VAR_10, VAR_3->grid->hsize + VAR_11, VAR_4, VAR_5);

 if (VAR_3->mode & VAR_1) {
  FUNC_0(VAR_3->grid, VAR_3->cx, VAR_3->cy, &VAR_7);
  VAR_7.attr |= VAR_0;
  FUNC_5(VAR_2, VAR_8 + (VAR_3->cx - VAR_10),
      VAR_9 + (VAR_3->cy - VAR_11));
  FUNC_3(VAR_2, &VAR_7);
 }
}
