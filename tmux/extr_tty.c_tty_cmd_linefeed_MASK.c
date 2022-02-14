
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int sx; int sy; } ;
struct tty_ctx {scalar_t__ ocy; scalar_t__ orlower; scalar_t__ xoff; scalar_t__ ocx; scalar_t__ yoff; int orupper; int bg; scalar_t__ bigger; struct window_pane* wp; } ;
struct tty {scalar_t__ rright; int term; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct tty*,struct tty_ctx const*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct tty*,struct window_pane*,int ) ;
 scalar_t__ FUNC_3 (struct tty*,struct window_pane*,int) ;
 int FUNC_4 (struct tty*,struct tty_ctx const*) ;
 int FUNC_5 (struct tty*,struct tty_ctx const*) ;
 int FUNC_6 (struct tty*,char) ;
 int FUNC_7 (struct tty*,struct tty_ctx const*) ;
 int FUNC_8 (struct tty*,struct tty_ctx const*,int ,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct tty*) ;

void
FUNC_11(struct tty *VAR_1, const struct tty_ctx *VAR_2)
{
 struct window_pane *VAR_3 = VAR_2->wp;

 if (VAR_2->ocy != VAR_2->orlower)
  return;

 if (VAR_2->bigger ||
     (!FUNC_5(VAR_1, VAR_2) && !FUNC_10(VAR_1)) ||
     FUNC_3(VAR_1, VAR_3, 8) ||
     !FUNC_9(VAR_1->term, VAR_0) ||
     VAR_3->sx == 1 ||
     VAR_3->sy == 1) {
  FUNC_7(VAR_1, VAR_2);
  return;
 }

 FUNC_2(VAR_1, VAR_3, VAR_2->bg);

 FUNC_8(VAR_1, VAR_2, VAR_2->orupper, VAR_2->orlower);
 FUNC_4(VAR_1, VAR_2);
 if (VAR_2->xoff + VAR_2->ocx > VAR_1->rright) {
  if (!FUNC_10(VAR_1))
   FUNC_0(VAR_1, 0, VAR_2->yoff + VAR_2->ocy);
  else
   FUNC_0(VAR_1, VAR_1->rright, VAR_2->yoff + VAR_2->ocy);
 } else
  FUNC_1(VAR_1, VAR_2, VAR_2->ocx, VAR_2->ocy);

 FUNC_6(VAR_1, '\n');
}
