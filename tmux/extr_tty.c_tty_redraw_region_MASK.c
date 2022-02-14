
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_pane {int flags; struct screen* screen; } ;
struct tty_ctx {scalar_t__ ocy; scalar_t__ orupper; scalar_t__ orlower; struct window_pane* wp; } ;
struct tty {int dummy; } ;
struct screen {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct screen*) ;
 int FUNC_1 (struct tty*,struct tty_ctx const*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct tty*,struct tty_ctx const*) ;

__attribute__((used)) static void
FUNC_3(struct tty *VAR_1, const struct tty_ctx *VAR_2)
{
 struct window_pane *VAR_3 = VAR_2->wp;
 struct screen *VAR_4 = VAR_3->screen;
 u_int VAR_5;





 if (FUNC_2(VAR_1, VAR_2)) {
  VAR_3->flags |= VAR_0;
  return;
 }

 if (VAR_2->ocy < VAR_2->orupper || VAR_2->ocy > VAR_2->orlower) {
  for (VAR_5 = VAR_2->ocy; VAR_5 < FUNC_0(VAR_4); VAR_5++)
   FUNC_1(VAR_1, VAR_2, VAR_5);
 } else {
  for (VAR_5 = VAR_2->orupper; VAR_5 <= VAR_2->orlower; VAR_5++)
   FUNC_1(VAR_1, VAR_2, VAR_5);
 }
}
