
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_pane {int flags; struct screen* screen; } ;
struct tty_ctx {scalar_t__ bigger; struct window_pane* wp; } ;
struct tty {int dummy; } ;
struct screen {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct screen*) ;
 scalar_t__ FUNC_1 (struct screen*) ;
 int FUNC_2 (struct tty*,int *,struct window_pane*) ;
 int FUNC_3 (struct tty*,struct tty_ctx const*,int ,scalar_t__) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*,char) ;
 int FUNC_6 (struct tty*,struct tty_ctx const*,int ,scalar_t__) ;

void
FUNC_7(struct tty *VAR_2, const struct tty_ctx *VAR_3)
{
 struct window_pane *VAR_4 = VAR_3->wp;
 struct screen *VAR_5 = VAR_4->screen;
 u_int VAR_6, VAR_7;

 if (VAR_3->bigger) {
  VAR_4->flags |= VAR_0;
  return;
 }

 FUNC_2(VAR_2, &VAR_1, VAR_4);

 FUNC_6(VAR_2, VAR_3, 0, FUNC_1(VAR_5) - 1);
 FUNC_4(VAR_2);

 for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_5); VAR_7++) {
  FUNC_3(VAR_2, VAR_3, 0, VAR_7);
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++)
   FUNC_5(VAR_2, 'E');
 }
}
