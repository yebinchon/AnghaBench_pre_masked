
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct screen_write_ctx {scalar_t__ bg; int scrolled; struct screen* s; } ;
struct screen {scalar_t__ rlower; scalar_t__ rupper; struct grid* grid; } ;
struct grid {int dummy; } ;


 int FUNC_0 (struct grid*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct screen_write_ctx*,int) ;
 int FUNC_2 (struct screen_write_ctx*) ;

void
FUNC_3(struct screen_write_ctx *VAR_0, u_int VAR_1, u_int VAR_2)
{
 struct screen *VAR_3 = VAR_0->s;
 struct grid *VAR_4 = VAR_3->grid;
 u_int VAR_5;

 if (VAR_1 == 0)
  VAR_1 = 1;
 else if (VAR_1 > VAR_3->rlower - VAR_3->rupper + 1)
  VAR_1 = VAR_3->rlower - VAR_3->rupper + 1;

 if (VAR_2 != VAR_0->bg) {
  FUNC_1(VAR_0, 1);
  VAR_0->bg = VAR_2;
 }

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0(VAR_4, VAR_3->rupper, VAR_3->rlower, VAR_2);
  FUNC_2(VAR_0);
 }
 VAR_0->scrolled += VAR_1;
}
