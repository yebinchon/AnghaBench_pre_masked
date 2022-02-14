
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct input_param {scalar_t__ type; int num; } ;
struct input_ctx {size_t param_list_len; struct input_param* param_list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct input_ctx *VAR_2, u_int VAR_3, int VAR_4, int VAR_5)
{
 struct input_param *VAR_6;
 int VAR_7;

 if (VAR_3 >= VAR_2->param_list_len)
     return (VAR_5);
 VAR_6 = &VAR_2->param_list[VAR_3];
 if (VAR_6->type == VAR_0)
  return (VAR_5);
 if (VAR_6->type == VAR_1)
  return (-1);
 VAR_7 = VAR_6->num;
 if (VAR_7 < VAR_4)
  return (VAR_4);
 return (VAR_7);
}
