
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_pane {int screen; } ;
struct tty_ctx {int bg; scalar_t__ ocx; int ocy; struct window_pane* wp; } ;
struct tty {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct tty*,struct tty_ctx const*,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct tty*,struct window_pane*,int ) ;

void
FUNC_3(struct tty *VAR_0, const struct tty_ctx *VAR_1)
{
 struct window_pane *VAR_2 = VAR_1->wp;
 u_int VAR_3;

 FUNC_2(VAR_0, VAR_2, VAR_1->bg);

 VAR_3 = FUNC_0(VAR_2->screen) - VAR_1->ocx;
 FUNC_1(VAR_0, VAR_1, VAR_1->ocy, VAR_1->ocx, VAR_3, VAR_1->bg);
}
