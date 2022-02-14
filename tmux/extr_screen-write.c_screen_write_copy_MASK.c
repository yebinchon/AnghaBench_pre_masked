
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {scalar_t__ cx; scalar_t__ cy; struct grid* grid; } ;
struct TYPE_2__ {scalar_t__ width; } ;
struct grid_cell {TYPE_1__ data; int bg; int fg; int attr; } ;
struct grid {int dummy; } ;
typedef int bitstr_t ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct grid*,scalar_t__,scalar_t__,struct grid_cell*) ;
 scalar_t__ FUNC_2 (struct screen*) ;
 int FUNC_3 (struct screen_write_ctx*,struct grid_cell*) ;
 int FUNC_4 (struct screen_write_ctx*,scalar_t__,scalar_t__) ;

void
FUNC_5(struct screen_write_ctx *VAR_0, struct screen *VAR_1, u_int VAR_2,
    u_int VAR_3, u_int VAR_4, u_int VAR_5, bitstr_t *VAR_6, const struct grid_cell *VAR_7)
{
 struct screen *VAR_8 = VAR_0->s;
 struct grid *VAR_9 = VAR_1->grid;
 struct grid_cell VAR_10;
 u_int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_4 == 0 || VAR_5 == 0)
  return;

 VAR_13 = VAR_8->cx;
 VAR_14 = VAR_8->cy;

 for (VAR_12 = VAR_3; VAR_12 < VAR_3 + VAR_5; VAR_12++) {
  for (VAR_11 = VAR_2; VAR_11 < VAR_2 + VAR_4; VAR_11++) {
   FUNC_1(VAR_9, VAR_11, VAR_12, &VAR_10);
   if (VAR_6 != ((void*)0)) {
    VAR_15 = (VAR_12 * FUNC_2(VAR_1)) + VAR_11;
    if (FUNC_0(VAR_6, VAR_15)) {
     VAR_10.attr = VAR_7->attr;
     VAR_10.fg = VAR_7->fg;
     VAR_10.bg = VAR_7->bg;
    }
   }
   if (VAR_11 + VAR_10.data.width <= VAR_2 + VAR_4)
    FUNC_3(VAR_0, &VAR_10);
  }
  VAR_14++;
  FUNC_4(VAR_0, VAR_13, VAR_14);
 }
}
