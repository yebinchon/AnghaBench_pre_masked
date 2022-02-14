
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int watch; struct main_state* private; } ;
struct main_state {int with_graph; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct view*,int *,char const**,int) ;
 int FUNC_1 (char*) ;
 char* VAR_2 ;
 scalar_t__ FUNC_2 (struct view*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static enum status_code
FUNC_4(struct view *VAR_4, enum open_flags VAR_5)
{
 struct main_state *VAR_6 = VAR_4->private;
 const char *VAR_7[] = {
  "git", "reflog", "show", VAR_2, "%(cmdlineargs)",
   "%(revargs)", "--no-color", "--pretty=raw", ((void*)0)
 };

 if (FUNC_2(VAR_4) && VAR_3)
  FUNC_1("No revisions match the given arguments.");

 VAR_6->with_graph = 0;
 FUNC_3(&VAR_4->watch, VAR_0 | VAR_1);
 return FUNC_0(VAR_4, ((void*)0), VAR_7, VAR_5);
}
