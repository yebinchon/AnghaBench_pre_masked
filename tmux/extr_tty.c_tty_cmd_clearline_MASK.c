
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {int screen; } ;
struct tty_ctx {int bg; int ocy; struct window_pane* wp; } ;
struct tty {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tty*,struct tty_ctx const*,int ,int ,int ,int ) ;
 int FUNC_2 (struct tty*,struct window_pane*,int ) ;

void
FUNC_3(struct tty *VAR_0, const struct tty_ctx *VAR_1)
{
 struct window_pane *VAR_2 = VAR_1->wp;
 u_int VAR_3;

 FUNC_2(VAR_0, VAR_2, VAR_1->bg);

 VAR_3 = FUNC_0(VAR_2->screen);
 FUNC_1(VAR_0, VAR_1, VAR_1->ocy, 0, VAR_3, VAR_1->bg);
}
