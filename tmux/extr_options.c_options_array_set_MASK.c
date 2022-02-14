
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct options_entry {int dummy; } ;
struct TYPE_2__ {char* string; int cmdlist; } ;
struct options_array_item {TYPE_1__ value; } ;
struct cmd_parse_result {int status; char* error; int cmdlist; } ;





 int FUNC_0 (struct options_entry*) ;
 scalar_t__ FUNC_1 (struct options_entry*) ;
 scalar_t__ FUNC_2 (struct options_entry*) ;
 struct cmd_parse_result* FUNC_3 (char const*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct options_entry*,struct options_array_item*) ;
 struct options_array_item* FUNC_6 (struct options_entry*,int ) ;
 struct options_array_item* FUNC_7 (struct options_entry*,int ) ;
 int FUNC_8 (struct options_entry*,TYPE_1__*) ;
 int FUNC_9 (char**,char*,char*,char const*) ;
 char* FUNC_10 (char const*) ;

int
FUNC_11(struct options_entry *VAR_0, u_int VAR_1, const char *VAR_2,
    int VAR_3, char **VAR_4)
{
 struct options_array_item *VAR_5;
 char *VAR_6;
 struct cmd_parse_result *VAR_7;

 if (!FUNC_0(VAR_0)) {
  if (VAR_4 != ((void*)0))
   *VAR_4 = FUNC_10("not an array");
  return (-1);
 }

 if (VAR_2 == ((void*)0)) {
  VAR_5 = FUNC_6(VAR_0, VAR_1);
  if (VAR_5 != ((void*)0))
   FUNC_5(VAR_0, VAR_5);
  return (0);
 }

 if (FUNC_1(VAR_0)) {
  VAR_7 = FUNC_3(VAR_2, ((void*)0));
  switch (VAR_7->status) {
  case 130:
   if (VAR_4 != ((void*)0))
    *VAR_4 = FUNC_10("empty command");
   return (-1);
  case 129:
   if (VAR_4 != ((void*)0))
    *VAR_4 = VAR_7->error;
   else
    FUNC_4(VAR_7->error);
   return (-1);
  case 128:
   break;
  }

  VAR_5 = FUNC_6(VAR_0, VAR_1);
  if (VAR_5 == ((void*)0))
   VAR_5 = FUNC_7(VAR_0, VAR_1);
  else
   FUNC_8(VAR_0, &VAR_5->value);
  VAR_5->value.cmdlist = VAR_7->cmdlist;
  return (0);
 }

 if (FUNC_2(VAR_0)) {
  VAR_5 = FUNC_6(VAR_0, VAR_1);
  if (VAR_5 != ((void*)0) && VAR_3)
   FUNC_9(&VAR_6, "%s%s", VAR_5->value.string, VAR_2);
  else
   VAR_6 = FUNC_10(VAR_2);
  if (VAR_5 == ((void*)0))
   VAR_5 = FUNC_7(VAR_0, VAR_1);
  else
   FUNC_8(VAR_0, &VAR_5->value);
  VAR_5->value.string = VAR_6;
  return (0);
 }

 if (VAR_4 != ((void*)0))
  *VAR_4 = FUNC_10("wrong array type");
 return (-1);
}
