
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_pane {int screen; } ;
struct tty_ctx {int bg; scalar_t__ ocy; scalar_t__ ocx; struct window_pane* wp; } ;
struct tty {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct tty*,struct tty_ctx const*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct tty*,struct tty_ctx const*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (struct tty*,struct window_pane*,int ) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*,struct tty_ctx const*,int ,scalar_t__) ;

void
FUNC_7(struct tty *VAR_0, const struct tty_ctx *VAR_1)
{
 struct window_pane *VAR_2 = VAR_1->wp;
 u_int VAR_3, VAR_4, VAR_5, VAR_6;

 FUNC_4(VAR_0, VAR_2, VAR_1->bg);

 FUNC_6(VAR_0, VAR_1, 0, FUNC_1(VAR_2->screen) - 1);
 FUNC_5(VAR_0);

 VAR_3 = 0;
 VAR_5 = FUNC_0(VAR_2->screen);
 VAR_4 = 0;
 VAR_6 = VAR_1->ocy;

 FUNC_2(VAR_0, VAR_1, VAR_4, VAR_6, VAR_3, VAR_5, VAR_1->bg);

 VAR_3 = 0;
 VAR_5 = VAR_1->ocx + 1;
 VAR_4 = VAR_1->ocy;

 FUNC_3(VAR_0, VAR_1, VAR_4, VAR_3, VAR_5, VAR_1->bg);
}
