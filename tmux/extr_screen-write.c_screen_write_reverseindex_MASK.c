
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tty_ctx {int bg; } ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {scalar_t__ cy; scalar_t__ rupper; int rlower; int grid; } ;


 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (struct screen_write_ctx*,int ) ;
 int FUNC_2 (struct screen_write_ctx*,struct tty_ctx*) ;
 int FUNC_3 (struct screen_write_ctx*,int,scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (int ,struct tty_ctx*) ;

void
FUNC_5(struct screen_write_ctx *VAR_1, u_int VAR_2)
{
 struct screen *VAR_3 = VAR_1->s;
 struct tty_ctx VAR_4;

 FUNC_2(VAR_1, &VAR_4);
 VAR_4.bg = VAR_2;

 if (VAR_3->cy == VAR_3->rupper)
  FUNC_0(VAR_3->grid, VAR_3->rupper, VAR_3->rlower, VAR_2);
 else if (VAR_3->cy > 0)
  FUNC_3(VAR_1, -1, VAR_3->cy - 1);

 FUNC_1(VAR_1, 0);
 FUNC_4(VAR_0, &VAR_4);
}
