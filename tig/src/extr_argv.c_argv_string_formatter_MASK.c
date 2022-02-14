
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_var {char** value_ref; char* value_if_empty; } ;
struct format_context {int bufpos; int buf; } ;
typedef char* argv_string ;


 int FUNC_0 (int ,int *,char*,char const*) ;

__attribute__((used)) static bool
FUNC_1(struct format_context *VAR_0, struct format_var *VAR_1)
{
 argv_string *VAR_2 = VAR_1->value_ref;
 const char *VAR_3 = *VAR_2;

 if (!*VAR_3)
  VAR_3 = VAR_1->value_if_empty;

 if (!*VAR_3)
  return 1;

 return FUNC_0(VAR_0->buf, &VAR_0->bufpos, "%s", VAR_3);
}
