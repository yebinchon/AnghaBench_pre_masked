
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int watch; } ;
struct main_state {int add_changes_untracked; int add_changes_unstaged; int add_changes_staged; } ;
struct index_diff {int staged; int unstaged; int untracked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct index_diff*,int ,int) ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static bool
FUNC_2(struct view *VAR_7, struct main_state *VAR_8)
{
 struct index_diff VAR_9;

 if (!FUNC_0(&VAR_9, VAR_6, 0))
  return 0;

 if (!VAR_9.untracked) {
  FUNC_1(&VAR_7->watch, VAR_4);
 } else {
  FUNC_1(&VAR_7->watch, VAR_5);
  VAR_8->add_changes_untracked = 1;
 }

 if (!VAR_9.unstaged) {
  FUNC_1(&VAR_7->watch, VAR_2);
 } else {
  FUNC_1(&VAR_7->watch, VAR_3);
  VAR_8->add_changes_unstaged = 1;
 }

 if (!VAR_9.staged) {
  FUNC_1(&VAR_7->watch, VAR_0);
 } else {
  FUNC_1(&VAR_7->watch, VAR_1);
  VAR_8->add_changes_staged = 1;
 }

 return 1;
}
