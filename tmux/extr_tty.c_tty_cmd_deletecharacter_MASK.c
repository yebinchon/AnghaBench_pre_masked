
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int dummy; } ;
struct tty_ctx {int num; int ocy; int ocx; int bg; scalar_t__ bigger; struct window_pane* wp; } ;
struct tty {int term; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty*,struct tty_ctx const*,int ,int ) ;
 int FUNC_1 (struct tty*,struct window_pane*,int ) ;
 int FUNC_2 (struct tty*,struct tty_ctx const*,int ) ;
 int FUNC_3 (struct tty*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct tty*,struct window_pane*,int ) ;
 int FUNC_5 (struct tty*,struct tty_ctx const*) ;
 int FUNC_6 (int ,int ) ;

void
FUNC_7(struct tty *VAR_2, const struct tty_ctx *VAR_3)
{
 struct window_pane *VAR_4 = VAR_3->wp;

 if (VAR_3->bigger ||
     !FUNC_5(VAR_2, VAR_3) ||
     FUNC_4(VAR_2, VAR_4, VAR_3->bg) ||
     (!FUNC_6(VAR_2->term, VAR_0) &&
     !FUNC_6(VAR_2->term, VAR_1))) {
  FUNC_2(VAR_2, VAR_3, VAR_3->ocy);
  return;
 }

 FUNC_1(VAR_2, VAR_4, VAR_3->bg);

 FUNC_0(VAR_2, VAR_3, VAR_3->ocx, VAR_3->ocy);

 FUNC_3(VAR_2, VAR_0, VAR_1, VAR_3->num);
}
