
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int dummy; } ;
struct tty_ctx {int bg; scalar_t__ ocx; int ocy; struct window_pane* wp; } ;
struct tty {int dummy; } ;


 int FUNC_0 (struct tty*,struct tty_ctx const*,int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct tty*,struct window_pane*,int ) ;

void
FUNC_2(struct tty *VAR_0, const struct tty_ctx *VAR_1)
{
 struct window_pane *VAR_2 = VAR_1->wp;

 FUNC_1(VAR_0, VAR_2, VAR_1->bg);

 FUNC_0(VAR_0, VAR_1, VAR_1->ocy, 0, VAR_1->ocx + 1, VAR_1->bg);
}
