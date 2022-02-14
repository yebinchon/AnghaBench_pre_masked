
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct main_state {int add_changes_untracked; int add_changes_staged; int add_changes_unstaged; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_0 (struct view*,int ,char const*,char*) ;

__attribute__((used)) static bool
FUNC_1(struct view *VAR_4, struct main_state *VAR_5, const char *VAR_6)
{
 const char *VAR_7 = VAR_6;
 const char *VAR_8 = VAR_3;
 const char *VAR_9 = VAR_3;

 if (!VAR_5->add_changes_staged) {
  VAR_7 = ((void*)0);
  VAR_8 = VAR_6;
 }

 if (!VAR_5->add_changes_unstaged) {
  VAR_8 = ((void*)0);
  if (!VAR_5->add_changes_staged)
   VAR_9 = VAR_6;
 }

 if (!VAR_5->add_changes_untracked) {
  VAR_9 = ((void*)0);
 }

 return FUNC_0(VAR_4, VAR_2, VAR_9, "Untracked changes")
     && FUNC_0(VAR_4, VAR_1, VAR_8, "Unstaged changes")
     && FUNC_0(VAR_4, VAR_0, VAR_7, "Staged changes");
}
