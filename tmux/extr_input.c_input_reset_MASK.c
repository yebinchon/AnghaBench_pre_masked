
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int base; int modes; struct input_ctx* ictx; } ;
struct screen_write_ctx {int dummy; } ;
struct input_ctx {int last; scalar_t__ flags; int * state; struct screen_write_ctx ctx; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct input_ctx*) ;
 int FUNC_2 (struct input_ctx*) ;
 int VAR_0 ;
 int FUNC_3 (struct screen_write_ctx*) ;
 int FUNC_4 (struct screen_write_ctx*,struct window_pane*,int *) ;
 int FUNC_5 (struct screen_write_ctx*) ;

void
FUNC_6(struct window_pane *VAR_1, int VAR_2)
{
 struct input_ctx *VAR_3 = VAR_1->ictx;
 struct screen_write_ctx *VAR_4 = &VAR_3->ctx;

 FUNC_2(VAR_3);

 if (VAR_2) {
  if (FUNC_0(&VAR_1->modes))
   FUNC_4(VAR_4, VAR_1, &VAR_1->base);
  else
   FUNC_4(VAR_4, ((void*)0), &VAR_1->base);
  FUNC_3(VAR_4);
  FUNC_5(VAR_4);
 }

 FUNC_1(VAR_3);

 VAR_3->last = -1;

 VAR_3->state = &VAR_0;
 VAR_3->flags = 0;
}
