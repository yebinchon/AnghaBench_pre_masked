
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tty_ctx {int bg; } ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {scalar_t__ cy; int cx; int grid; } ;


 int FUNC_0 (int ,int ,int,int,int,int) ;
 int FUNC_1 (struct screen*) ;
 int FUNC_2 (struct screen_write_ctx*,int ,int) ;
 int FUNC_3 (struct screen_write_ctx*,int ) ;
 int FUNC_4 (struct screen_write_ctx*,struct tty_ctx*) ;
 int VAR_0 ;
 int FUNC_5 (int ,struct tty_ctx*) ;

void
FUNC_6(struct screen_write_ctx *VAR_1, u_int VAR_2)
{
 struct screen *VAR_3 = VAR_1->s;
 struct tty_ctx VAR_4;
 u_int VAR_5 = FUNC_1(VAR_3);

 FUNC_4(VAR_1, &VAR_4);
 VAR_4.bg = VAR_2;

 if (VAR_3->cy > 0)
  FUNC_0(VAR_3->grid, 0, 0, VAR_5, VAR_3->cy, VAR_2);
 if (VAR_3->cx > VAR_5 - 1)
  FUNC_0(VAR_3->grid, 0, VAR_3->cy, VAR_5, 1, VAR_2);
 else
  FUNC_0(VAR_3->grid, 0, VAR_3->cy, VAR_3->cx + 1, 1, VAR_2);

 FUNC_2(VAR_1, 0, VAR_3->cy);
 FUNC_3(VAR_1, 0);
 FUNC_5(VAR_0, &VAR_4);
}
