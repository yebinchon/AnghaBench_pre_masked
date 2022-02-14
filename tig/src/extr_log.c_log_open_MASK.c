
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;


 int FUNC_0 (struct view*,int *,char const**,int) ;
 char* FUNC_1 () ;
 char* VAR_0 ;

__attribute__((used)) static enum status_code
FUNC_2(struct view *VAR_1, enum open_flags VAR_2)
{
 const char *VAR_3[] = {
  "git", "log", VAR_0, FUNC_1(), "--cc",
   "--stat", "%(logargs)", "%(cmdlineargs)", "%(revargs)",
   "--no-color", "--", "%(fileargs)", ((void*)0)
 };

 return FUNC_0(VAR_1, ((void*)0), VAR_3, VAR_2);
}
