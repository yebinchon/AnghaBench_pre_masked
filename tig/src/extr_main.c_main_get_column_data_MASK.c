
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view_column_data {int refs; int * graph_canvas; int graph; int commit_title; int reflog; int id; int * date; int author; } ;
struct view {struct main_state* private; } ;
struct main_state {int graph; scalar_t__ with_graph; int * reflog; scalar_t__ reflogs; } ;
struct line {int lineno; struct commit* data; } ;
struct commit {int graph; int title; int id; int time; int author; } ;


 int FUNC_0 (struct line const*,struct commit*) ;

bool
FUNC_1(struct view *VAR_0, const struct line *VAR_1, struct view_column_data *VAR_2)
{
 struct main_state *VAR_3 = VAR_0->private;
 struct commit *VAR_4 = VAR_1->data;

 VAR_2->author = VAR_4->author;
 VAR_2->date = &VAR_4->time;
 VAR_2->id = VAR_4->id;
 if (VAR_3->reflogs)
  VAR_2->reflog = VAR_3->reflog[VAR_1->lineno - 1];

 VAR_2->commit_title = VAR_4->title;
 if (VAR_3->with_graph) {
  VAR_2->graph = VAR_3->graph;
  VAR_2->graph_canvas = &VAR_4->graph;
 }

 VAR_2->refs = FUNC_0(VAR_1, VAR_4);

 return 1;
}
