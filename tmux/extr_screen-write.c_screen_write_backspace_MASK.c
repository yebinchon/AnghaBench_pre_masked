
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {scalar_t__ cx; scalar_t__ cy; TYPE_1__* grid; } ;
struct grid_line {int flags; } ;
struct TYPE_2__ {scalar_t__ hsize; } ;


 int VAR_0 ;
 struct grid_line* FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct screen*) ;
 int FUNC_2 (struct screen_write_ctx*,scalar_t__,scalar_t__) ;

void
FUNC_3(struct screen_write_ctx *VAR_1)
{
 struct screen *VAR_2 = VAR_1->s;
 struct grid_line *VAR_3;
 u_int VAR_4 = VAR_2->cx, VAR_5 = VAR_2->cy;

 if (VAR_4 == 0) {
  if (VAR_5 == 0)
   return;
  VAR_3 = FUNC_0(VAR_2->grid, VAR_2->grid->hsize + VAR_5 - 1);
  if (VAR_3->flags & VAR_0) {
   VAR_5--;
   VAR_4 = FUNC_1(VAR_2) - 1;
  }
 } else
  VAR_4--;

 FUNC_2(VAR_1, VAR_4, VAR_5);
}
