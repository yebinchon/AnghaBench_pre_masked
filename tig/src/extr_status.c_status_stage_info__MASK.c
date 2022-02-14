
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
struct status {int status; TYPE_1__ new; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;






 int FUNC_0 (char*,size_t,int *,char const*,char const*) ;

bool
FUNC_1(char *VAR_0, size_t VAR_1,
     enum line_type VAR_2, struct status *VAR_3)
{
 const char *VAR_4 = VAR_3 ? VAR_3->new.name : "";
 const char *VAR_5;

 switch (VAR_2) {
 case 130:
  if (VAR_3 && VAR_3->status)
   VAR_5 = "Staged changes to %s";
  else
   VAR_5 = "Staged changes";
  break;

 case 129:
  if (VAR_3 && VAR_3->status)
   VAR_5 = "Unstaged changes to %s";
  else
   VAR_5 = "Unstaged changes";
  break;

 case 128:
  VAR_5 = "Untracked file %s";
  break;

 case 131:
 default:
  VAR_5 = "";
 }

 return FUNC_0(VAR_0, VAR_1, ((void*)0), VAR_5, VAR_4);
}
