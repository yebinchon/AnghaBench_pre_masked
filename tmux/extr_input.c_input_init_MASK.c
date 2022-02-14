
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {struct input_ctx* ictx; } ;
struct input_ctx {int timer; int * since_ground; int input_buf; int input_space; } ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,int ,struct input_ctx*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct window_pane*,int ) ;
 int VAR_1 ;
 struct input_ctx* FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct window_pane *VAR_2)
{
 struct input_ctx *VAR_3;

 VAR_3 = VAR_2->ictx = FUNC_4(1, sizeof *VAR_3);

 VAR_3->input_space = VAR_0;
 VAR_3->input_buf = FUNC_5(VAR_0);

 VAR_3->since_ground = FUNC_0();
 if (VAR_3->since_ground == ((void*)0))
  FUNC_2("out of memory");

 FUNC_1(&VAR_3->timer, VAR_1, VAR_3);

 FUNC_3(VAR_2, 0);
}
