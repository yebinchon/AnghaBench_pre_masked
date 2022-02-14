
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {char* interm_buf; char* param_buf; char* input_buf; int flags; int input_end; scalar_t__ input_len; scalar_t__ param_len; scalar_t__ interm_len; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct input_ctx *VAR_2)
{
 FUNC_0(&VAR_2->timer);

 *VAR_2->interm_buf = '\0';
 VAR_2->interm_len = 0;

 *VAR_2->param_buf = '\0';
 VAR_2->param_len = 0;

 *VAR_2->input_buf = '\0';
 VAR_2->input_len = 0;

 VAR_2->input_end = VAR_1;

 VAR_2->flags &= ~VAR_0;
}
