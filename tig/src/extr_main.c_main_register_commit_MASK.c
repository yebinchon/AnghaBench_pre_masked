
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {struct main_state* private; } ;
struct main_state {int add_changes_untracked; int add_changes_unstaged; int add_changes_staged; scalar_t__ with_graph; struct graph* graph; } ;
struct graph {int (* add_commit ) (struct graph*,int *,int ,char const*,int) ;} ;
struct commit {int id; int graph; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct view*,struct main_state*,char const*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (struct graph*,int *,int ,char const*,int) ;

__attribute__((used)) static void
FUNC_4(struct view *VAR_0, struct commit *VAR_1, const char *VAR_2, bool VAR_3)
{
 struct main_state *VAR_4 = VAR_0->private;
 struct graph *VAR_5 = VAR_4->graph;

 FUNC_2(VAR_1->id, VAR_2);


 if ((VAR_4->add_changes_untracked || VAR_4->add_changes_unstaged || VAR_4->add_changes_staged) && FUNC_0(VAR_1->id)) {
  FUNC_1(VAR_0, VAR_4, VAR_2);
  VAR_4->add_changes_untracked = VAR_4->add_changes_unstaged = VAR_4->add_changes_staged = 0;
 }

 if (VAR_4->with_graph)
  VAR_5->add_commit(VAR_5, &VAR_1->graph, VAR_1->id, VAR_2, VAR_3);
}
