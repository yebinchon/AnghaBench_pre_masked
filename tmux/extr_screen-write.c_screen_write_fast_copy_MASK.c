
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {scalar_t__ cy; scalar_t__ cx; struct grid* grid; } ;
struct TYPE_3__ {scalar_t__ width; } ;
struct grid_cell {TYPE_1__ data; } ;
struct grid {scalar_t__ hsize; scalar_t__ sy; } ;
struct TYPE_4__ {scalar_t__ cellsize; } ;


 int FUNC_0 (struct grid*,scalar_t__,scalar_t__,struct grid_cell*) ;
 TYPE_2__* FUNC_1 (struct grid*,scalar_t__) ;
 int FUNC_2 (struct grid*,scalar_t__,scalar_t__,struct grid_cell*) ;

void
FUNC_3(struct screen_write_ctx *VAR_0, struct screen *VAR_1,
    u_int VAR_2, u_int VAR_3, u_int VAR_4, u_int VAR_5)
{
 struct screen *VAR_6 = VAR_0->s;
 struct grid *VAR_7 = VAR_1->grid;
 struct grid_cell VAR_8;
 u_int VAR_9, VAR_10, VAR_11, VAR_12;

 if (VAR_4 == 0 || VAR_5 == 0)
  return;

 VAR_12 = VAR_6->cy;
 for (VAR_10 = VAR_3; VAR_10 < VAR_3 + VAR_5; VAR_10++) {
  if (VAR_10 >= VAR_7->hsize + VAR_7->sy)
   break;
  VAR_11 = VAR_6->cx;
  for (VAR_9 = VAR_2; VAR_9 < VAR_2 + VAR_4; VAR_9++) {
   if (VAR_9 >= FUNC_1(VAR_7, VAR_10)->cellsize)
    break;
   FUNC_0(VAR_7, VAR_9, VAR_10, &VAR_8);
   if (VAR_9 + VAR_8.data.width > VAR_2 + VAR_4)
    break;
   FUNC_2(VAR_0->s->grid, VAR_11, VAR_12, &VAR_8);
   VAR_11++;
  }
  VAR_12++;
 }
}
