
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct tty_ctx {scalar_t__ num; scalar_t__ bg; } ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {scalar_t__ cx; int cy; int grid; } ;


 int FUNC_0 (int ,int,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct screen*) ;
 int FUNC_2 (struct screen_write_ctx*,int ) ;
 int FUNC_3 (struct screen_write_ctx*,struct tty_ctx*) ;
 int VAR_0 ;
 int FUNC_4 (int ,struct tty_ctx*) ;

void
FUNC_5(struct screen_write_ctx *VAR_1, u_int VAR_2, u_int VAR_3)
{
 struct screen *VAR_4 = VAR_1->s;
 struct tty_ctx VAR_5;

 if (VAR_2 == 0)
  VAR_2 = 1;

 if (VAR_2 > FUNC_1(VAR_4) - VAR_4->cx)
  VAR_2 = FUNC_1(VAR_4) - VAR_4->cx;
 if (VAR_2 == 0)
  return;

 if (VAR_4->cx > FUNC_1(VAR_4) - 1)
  return;

 FUNC_3(VAR_1, &VAR_5);
 VAR_5.bg = VAR_3;

 FUNC_0(VAR_4->grid, VAR_4->cx, VAR_4->cy, VAR_2, VAR_3);

 FUNC_2(VAR_1, 0);
 VAR_5.num = VAR_2;
 FUNC_4(VAR_0, &VAR_5);
}
