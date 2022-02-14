
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tty_ctx {int bg; } ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {scalar_t__ cx; scalar_t__ cy; struct grid* grid; } ;
struct grid {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct grid*,int,scalar_t__,int,int,int) ;
 int FUNC_1 (struct grid*,int) ;
 int FUNC_2 (struct screen*) ;
 int FUNC_3 (struct screen*) ;
 int FUNC_4 (struct screen_write_ctx*,int,int) ;
 int FUNC_5 (struct screen_write_ctx*,int ) ;
 int FUNC_6 (struct screen_write_ctx*,struct tty_ctx*) ;
 int VAR_1 ;
 int FUNC_7 (int ,struct tty_ctx*) ;

void
FUNC_8(struct screen_write_ctx *VAR_2, u_int VAR_3)
{
 struct screen *VAR_4 = VAR_2->s;
 struct grid *VAR_5 = VAR_4->grid;
 struct tty_ctx VAR_6;
 u_int VAR_7 = FUNC_2(VAR_4), VAR_8 = FUNC_3(VAR_4);

 FUNC_6(VAR_2, &VAR_6);
 VAR_6.bg = VAR_3;


 if (VAR_4->cx == 0 && VAR_4->cy == 0 && (VAR_5->flags & VAR_0))
  FUNC_1(VAR_5, VAR_3);
 else {
  if (VAR_4->cx <= VAR_7 - 1)
   FUNC_0(VAR_5, VAR_4->cx, VAR_4->cy, VAR_7 - VAR_4->cx, 1, VAR_3);
  FUNC_0(VAR_5, 0, VAR_4->cy + 1, VAR_7, VAR_8 - (VAR_4->cy + 1), VAR_3);
 }

 FUNC_4(VAR_2, VAR_4->cy + 1, VAR_8 - (VAR_4->cy + 1));
 FUNC_5(VAR_2, 0);
 FUNC_7(VAR_1, &VAR_6);
}
