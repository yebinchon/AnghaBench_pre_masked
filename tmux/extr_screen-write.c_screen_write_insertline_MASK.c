
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct tty_ctx {scalar_t__ num; scalar_t__ bg; } ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {scalar_t__ cy; scalar_t__ rupper; scalar_t__ rlower; struct grid* grid; } ;
struct grid {int dummy; } ;


 int FUNC_0 (struct grid*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct grid*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct screen*) ;
 int FUNC_3 (struct screen_write_ctx*,int ) ;
 int FUNC_4 (struct screen_write_ctx*,struct tty_ctx*) ;
 int VAR_0 ;
 int FUNC_5 (int ,struct tty_ctx*) ;

void
FUNC_6(struct screen_write_ctx *VAR_1, u_int VAR_2, u_int VAR_3)
{
 struct screen *VAR_4 = VAR_1->s;
 struct grid *VAR_5 = VAR_4->grid;
 struct tty_ctx VAR_6;

 if (VAR_2 == 0)
  VAR_2 = 1;

 if (VAR_4->cy < VAR_4->rupper || VAR_4->cy > VAR_4->rlower) {
  if (VAR_2 > FUNC_2(VAR_4) - VAR_4->cy)
   VAR_2 = FUNC_2(VAR_4) - VAR_4->cy;
  if (VAR_2 == 0)
   return;

  FUNC_4(VAR_1, &VAR_6);
  VAR_6.bg = VAR_3;

  FUNC_0(VAR_5, VAR_4->cy, VAR_2, VAR_3);

  FUNC_3(VAR_1, 0);
  VAR_6.num = VAR_2;
  FUNC_5(VAR_0, &VAR_6);
  return;
 }

 if (VAR_2 > VAR_4->rlower + 1 - VAR_4->cy)
  VAR_2 = VAR_4->rlower + 1 - VAR_4->cy;
 if (VAR_2 == 0)
  return;

 FUNC_4(VAR_1, &VAR_6);
 VAR_6.bg = VAR_3;

 if (VAR_4->cy < VAR_4->rupper || VAR_4->cy > VAR_4->rlower)
  FUNC_0(VAR_5, VAR_4->cy, VAR_2, VAR_3);
 else
  FUNC_1(VAR_5, VAR_4->rlower, VAR_4->cy, VAR_2, VAR_3);

 FUNC_3(VAR_1, 0);
 VAR_6.num = VAR_2;
 FUNC_5(VAR_0, &VAR_6);
}
