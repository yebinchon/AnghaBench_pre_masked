
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct window_pane {struct input_ctx* ictx; } ;
struct input_ctx {size_t param_list_len; int since_ground; struct input_ctx* input_buf; int timer; TYPE_1__* param_list; } ;
struct TYPE_2__ {scalar_t__ type; struct input_ctx* str; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct input_ctx*) ;

void
FUNC_3(struct window_pane *VAR_1)
{
 struct input_ctx *VAR_2 = VAR_1->ictx;
 u_int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->param_list_len; VAR_3++) {
  if (VAR_2->param_list[VAR_3].type == VAR_0)
   FUNC_2(VAR_2->param_list[VAR_3].str);
 }

 FUNC_1(&VAR_2->timer);

 FUNC_2(VAR_2->input_buf);
 FUNC_0(VAR_2->since_ground);

 FUNC_2(VAR_2);
 VAR_1->ictx = ((void*)0);
}
