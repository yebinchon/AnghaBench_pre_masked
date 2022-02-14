
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_pane {int sx; int sy; } ;
struct tty_ctx {scalar_t__ num; int orupper; int ocx; int orlower; int bg; scalar_t__ bigger; struct window_pane* wp; } ;
struct tty {int term; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tty*,struct tty_ctx const*,int ,int ) ;
 int FUNC_1 (struct tty*,struct window_pane*,int ) ;
 scalar_t__ FUNC_2 (struct tty*,struct window_pane*,int) ;
 int FUNC_3 (struct tty*,struct tty_ctx const*) ;
 int FUNC_4 (struct tty*,struct tty_ctx const*) ;
 int FUNC_5 (struct tty*,int ) ;
 int FUNC_6 (struct tty*,int ,scalar_t__) ;
 int FUNC_7 (struct tty*,struct tty_ctx const*) ;
 int FUNC_8 (struct tty*,struct tty_ctx const*,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (struct tty*) ;

void
FUNC_11(struct tty *VAR_3, const struct tty_ctx *VAR_4)
{
 struct window_pane *VAR_5 = VAR_4->wp;
 u_int VAR_6;

 if (VAR_4->bigger ||
     (!FUNC_4(VAR_3, VAR_4) && !FUNC_10(VAR_3)) ||
     FUNC_2(VAR_3, VAR_5, 8) ||
     !FUNC_9(VAR_3->term, VAR_0) ||
     (!FUNC_9(VAR_3->term, VAR_1) &&
     !FUNC_9(VAR_3->term, VAR_2)) ||
     VAR_5->sx == 1 ||
     VAR_5->sy == 1) {
  FUNC_7(VAR_3, VAR_4);
  return;
 }

 FUNC_1(VAR_3, VAR_5, VAR_4->bg);

 FUNC_8(VAR_3, VAR_4, VAR_4->orupper, VAR_4->orlower);
 FUNC_3(VAR_3, VAR_4);
 FUNC_0(VAR_3, VAR_4, VAR_4->ocx, VAR_4->orupper);

 if (FUNC_9(VAR_3->term, VAR_2))
  FUNC_6(VAR_3, VAR_2, VAR_4->num);
 else {
  for (VAR_6 = 0; VAR_6 < VAR_4->num; VAR_6++)
   FUNC_5(VAR_3, VAR_1);
 }
}
