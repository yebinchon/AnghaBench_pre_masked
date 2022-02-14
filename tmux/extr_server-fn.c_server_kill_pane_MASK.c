
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {struct window* window; } ;
struct window {int dummy; } ;


 int FUNC_0 (struct window_pane*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct window*) ;
 int FUNC_3 (struct window*) ;
 int FUNC_4 (struct window*) ;
 int FUNC_5 (struct window*) ;
 int FUNC_6 (struct window*,struct window_pane*) ;

void
FUNC_7(struct window_pane *VAR_0)
{
 struct window *VAR_1 = VAR_0->window;

 if (FUNC_5(VAR_1) == 1) {
  FUNC_2(VAR_1);
  FUNC_1();
 } else {
  FUNC_4(VAR_1);
  FUNC_0(VAR_0);
  FUNC_6(VAR_1, VAR_0);
  FUNC_3(VAR_1);
 }
}
