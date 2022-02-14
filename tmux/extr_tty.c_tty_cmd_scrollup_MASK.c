
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_pane {int sx; int sy; } ;
struct tty_ctx {int num; int orlower; int orupper; int bg; scalar_t__ bigger; struct window_pane* wp; } ;
struct tty {int cy; int rlower; int rright; int term; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty*,int ,int ) ;
 int FUNC_1 (struct tty*,struct window_pane*,int ) ;
 scalar_t__ FUNC_2 (struct tty*,struct window_pane*,int) ;
 int FUNC_3 (struct tty*,struct tty_ctx const*) ;
 int FUNC_4 (struct tty*,struct tty_ctx const*) ;
 int FUNC_5 (struct tty*,char) ;
 int FUNC_6 (struct tty*,int ,scalar_t__) ;
 int FUNC_7 (struct tty*,struct tty_ctx const*) ;
 int FUNC_8 (struct tty*,struct tty_ctx const*,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct tty*) ;

void
FUNC_11(struct tty *VAR_2, const struct tty_ctx *VAR_3)
{
 struct window_pane *VAR_4 = VAR_3->wp;
 u_int VAR_5;

 if (VAR_3->bigger ||
     (!FUNC_4(VAR_2, VAR_3) && !FUNC_10(VAR_2)) ||
     FUNC_2(VAR_2, VAR_4, 8) ||
     !FUNC_9(VAR_2->term, VAR_0) ||
     VAR_4->sx == 1 ||
     VAR_4->sy == 1) {
  FUNC_7(VAR_2, VAR_3);
  return;
 }

 FUNC_1(VAR_2, VAR_4, VAR_3->bg);

 FUNC_8(VAR_2, VAR_3, VAR_3->orupper, VAR_3->orlower);
 FUNC_3(VAR_2, VAR_3);

 if (VAR_3->num == 1 || !FUNC_9(VAR_2->term, VAR_1)) {
  if (!FUNC_10(VAR_2))
   FUNC_0(VAR_2, 0, VAR_2->rlower);
  else
   FUNC_0(VAR_2, VAR_2->rright, VAR_2->rlower);
  for (VAR_5 = 0; VAR_5 < VAR_3->num; VAR_5++)
   FUNC_5(VAR_2, '\n');
 } else {
  FUNC_0(VAR_2, 0, VAR_2->cy);
  FUNC_6(VAR_2, VAR_1, VAR_3->num);
 }
}
