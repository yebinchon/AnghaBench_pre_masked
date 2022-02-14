
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {int param_len; char* param_buf; char ch; int flags; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct input_ctx *VAR_1)
{
 if (VAR_1->param_len == (sizeof VAR_1->param_buf) - 1)
  VAR_1->flags |= VAR_0;
 else {
  VAR_1->param_buf[VAR_1->param_len++] = VAR_1->ch;
  VAR_1->param_buf[VAR_1->param_len] = '\0';
 }

 return (0);
}
