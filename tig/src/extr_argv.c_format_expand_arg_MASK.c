
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct format_var {int (* formatter ) (struct format_context*,struct format_var*) ;int * value_ref; int namelen; int name; } ;
struct format_context {int vars_size; int file_filter; int bufpos; int buf; struct format_var* vars; } ;
struct TYPE_2__ {int file; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,int ,int ) ;
 scalar_t__ FUNC_5 (char*,char*,int const,char const*) ;
 int FUNC_6 (int ,int *,char*,char const*) ;
 int FUNC_7 (struct format_context*,struct format_var*) ;

__attribute__((used)) static bool
FUNC_8(struct format_context *VAR_2, const char *VAR_3, const char *VAR_4)
{
 struct format_var *VAR_5 = VAR_2->vars;
 int VAR_6;

 if (!FUNC_2(VAR_3, "%(prompt")) {
  const char *VAR_7 = "Command argument: ";
  char VAR_8[VAR_0];
  const char *VAR_9;
  const char *VAR_10 = VAR_3 + FUNC_0("%(prompt");
  const int VAR_11 = VAR_4 - VAR_10 - 1;

  if (VAR_4 && VAR_11 > 0 && FUNC_5(VAR_8, "%.*s", VAR_11, VAR_10)) {
   const char *VAR_12 = VAR_8;

   while (FUNC_1(*VAR_12))
    VAR_12++;
   if (*VAR_12)
    VAR_7 = VAR_12;
  }

  VAR_9 = FUNC_3(VAR_7);
  if (VAR_9 == ((void*)0))
   return 0;
  return FUNC_6(VAR_2->buf, &VAR_2->bufpos, "%s", VAR_9);
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->vars_size; VAR_6++) {
  if (FUNC_4(VAR_3, VAR_5[VAR_6].name, VAR_5[VAR_6].namelen))
   continue;

  if (VAR_5[VAR_6].value_ref == &VAR_1.file && !VAR_2->file_filter)
   return 1;

  return VAR_5[VAR_6].formatter(VAR_2, &VAR_5[VAR_6]);
 }

 return 0;
}
