
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

 int FUNC_1 (int *,int ) ;

__attribute__((used)) static enum status_code
FUNC_2(struct view *VAR_2, enum open_flags VAR_3)
{
 static const char *VAR_4[] = { "git", "stash", "list",
  128, "--no-color", "--pretty=raw", ((void*)0) };
 struct main_state *VAR_5 = VAR_2->private;

 VAR_5->with_graph = 0;
 FUNC_1(&VAR_2->watch, VAR_1);
 return FUNC_0(VAR_2, ((void*)0), VAR_4, VAR_3 | VAR_0);
}
