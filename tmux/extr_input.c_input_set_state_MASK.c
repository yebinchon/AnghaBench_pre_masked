
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_pane {struct input_ctx* ictx; } ;
struct input_transition {TYPE_1__* state; } ;
struct input_ctx {TYPE_1__* state; } ;
struct TYPE_2__ {int (* enter ) (struct input_ctx*) ;int (* exit ) (struct input_ctx*) ;} ;


 int FUNC_0 (struct input_ctx*) ;
 int FUNC_1 (struct input_ctx*) ;

__attribute__((used)) static void
FUNC_2(struct window_pane *VAR_0, const struct input_transition *VAR_1)
{
 struct input_ctx *VAR_2 = VAR_0->ictx;

 if (VAR_2->state->exit != ((void*)0))
  VAR_2->state->exit(VAR_2);
 VAR_2->state = VAR_1->state;
 if (VAR_2->state->enter != ((void*)0))
  VAR_2->state->enter(VAR_2);
}
