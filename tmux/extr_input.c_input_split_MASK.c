
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct input_param {scalar_t__ type; int num; int str; } ;
struct input_ctx {size_t param_list_len; scalar_t__ param_len; char* param_buf; struct input_param* param_list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,...) ;
 size_t FUNC_2 (struct input_param*) ;
 int * FUNC_3 (char*,char) ;
 char* FUNC_4 (char**,char*) ;
 int FUNC_5 (char*,int ,int ,char const**) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(struct input_ctx *VAR_4)
{
 const char *VAR_5;
 char *VAR_6, *VAR_7;
 struct input_param *VAR_8;
 u_int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_4->param_list_len; VAR_9++) {
  if (VAR_4->param_list[VAR_9].type == VAR_2)
   FUNC_0(VAR_4->param_list[VAR_9].str);
 }
 VAR_4->param_list_len = 0;

 if (VAR_4->param_len == 0)
  return (0);
 VAR_8 = &VAR_4->param_list[0];

 VAR_6 = VAR_4->param_buf;
 while ((VAR_7 = FUNC_4(&VAR_6, ";")) != ((void*)0)) {
  if (*VAR_7 == '\0')
   VAR_8->type = VAR_0;
  else {
   if (FUNC_3(VAR_7, ':') != ((void*)0)) {
    VAR_8->type = VAR_2;
    VAR_8->str = FUNC_6(VAR_7);
   } else {
    VAR_8->type = VAR_1;
    VAR_8->num = FUNC_5(VAR_7, 0, VAR_3, &VAR_5);
    if (VAR_5 != ((void*)0))
     return (-1);
   }
  }
  VAR_8 = &VAR_4->param_list[++VAR_4->param_list_len];
  if (VAR_4->param_list_len == FUNC_2(VAR_4->param_list))
   return (-1);
 }

 for (VAR_9 = 0; VAR_9 < VAR_4->param_list_len; VAR_9++) {
  VAR_8 = &VAR_4->param_list[VAR_9];
  if (VAR_8->type == VAR_0)
   FUNC_1("parameter %u: missing", VAR_9);
  else if (VAR_8->type == VAR_2)
   FUNC_1("parameter %u: string %s", VAR_9, VAR_8->str);
  else if (VAR_8->type == VAR_1)
   FUNC_1("parameter %u: number %d", VAR_9, VAR_8->num);
 }

 return (0);
}
