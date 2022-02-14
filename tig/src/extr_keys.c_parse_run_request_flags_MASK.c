
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run_request_flags {int internal; int silent; int confirm; int exit; int echo; int quick; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char const) ;

enum status_code
FUNC_2(struct run_request_flags *VAR_2, const char **VAR_3)
{
 if (!VAR_3[0])
  return FUNC_0("No arguments");

 if (!FUNC_1(VAR_0, *VAR_3[0]))
  return FUNC_0("Unknown command flag '%c'; expected one of %s", VAR_3[0][0], VAR_0);

 while (*VAR_3[0]) {
  if (*VAR_3[0] == ':') {
   VAR_2->internal = 1;
   VAR_3[0]++;
   break;
  } else if (*VAR_3[0] == '@') {
   VAR_2->silent = 1;
  } else if (*VAR_3[0] == '?') {
   VAR_2->confirm = 1;
  } else if (*VAR_3[0] == '<') {
   VAR_2->exit = 1;
  } else if (*VAR_3[0] == '+') {
   VAR_2->echo = 1;
  } else if (*VAR_3[0] == '>') {
   VAR_2->quick = 1;
  } else if (*VAR_3[0] != '!') {
   break;
  }
  VAR_3[0]++;
 }

 return VAR_1;
}
