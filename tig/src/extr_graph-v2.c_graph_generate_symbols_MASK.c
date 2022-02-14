
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_row {int size; struct graph_column* columns; } ;
struct graph_v2 {int position; char* id; int colors; struct graph_row parents; struct graph_row next_row; struct graph_row row; struct graph_row prev_row; } ;
struct graph_symbol {int commit; int boundary; int initial; int merge; int parent_right; int matches_commit; int empty; int color; int new_column; void* shift_left; void* below_shift; void* continue_shift; void* next_right; int flanked; int below_commit; int parent_down; void* continued_up_left; void* continued_left; void* continued_right; void* continued_up; void* continued_down; } ;
struct graph_column {char* id; struct graph_symbol symbol; } ;
struct graph_canvas {int dummy; } ;


 int FUNC_0 (int,struct graph_v2*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct graph_row*) ;
 void* FUNC_3 (struct graph_row*,struct graph_row*,int) ;
 void* FUNC_4 (struct graph_row*,int,int) ;
 void* FUNC_5 (struct graph_row*,int,int) ;
 int FUNC_6 (struct graph_row*,int,int,char*) ;
 int FUNC_7 (struct graph_v2*,char const*) ;
 int FUNC_8 (struct graph_v2*,struct graph_canvas*,struct graph_symbol*) ;
 scalar_t__ FUNC_9 (struct graph_column*) ;
 int FUNC_10 (struct graph_row*,struct graph_row*,int) ;
 int FUNC_11 (struct graph_row*,struct graph_row*,int) ;
 scalar_t__ FUNC_12 (struct graph_row*,struct graph_row*,struct graph_row*,int) ;
 void* FUNC_13 (struct graph_row*,struct graph_row*,int) ;

__attribute__((used)) static void
FUNC_14(struct graph_v2 *VAR_0, struct graph_canvas *VAR_1)
{
 struct graph_row *VAR_2 = &VAR_0->prev_row;
 struct graph_row *VAR_3 = &VAR_0->row;
 struct graph_row *VAR_4 = &VAR_0->next_row;
 struct graph_row *VAR_5 = &VAR_0->parents;
 int VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = VAR_6 < 1;
 int VAR_8 = VAR_6 > 1;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_3->size; VAR_9++) {
  struct graph_column *VAR_10 = &VAR_3->columns[VAR_9];
  struct graph_symbol *VAR_11 = &VAR_10->symbol;
  const char *VAR_12 = VAR_4->columns[VAR_9].id;

  VAR_11->commit = (VAR_9 == VAR_0->position);
  VAR_11->boundary = (VAR_9 == VAR_0->position && VAR_4->columns[VAR_9].symbol.boundary);
  VAR_11->initial = VAR_7;
  VAR_11->merge = VAR_8;

  VAR_11->continued_down = FUNC_3(VAR_3, VAR_4, VAR_9);
  VAR_11->continued_up = FUNC_3(VAR_2, VAR_3, VAR_9);
  VAR_11->continued_right = FUNC_5(VAR_3, VAR_9, VAR_0->position);
  VAR_11->continued_left = FUNC_4(VAR_3, VAR_9, VAR_0->position);
  VAR_11->continued_up_left = FUNC_4(VAR_2, VAR_9, VAR_2->size);

  VAR_11->parent_down = FUNC_11(VAR_5, VAR_4, VAR_9);
  VAR_11->parent_right = (VAR_9 > VAR_0->position && FUNC_12(VAR_5, VAR_3, VAR_4, VAR_9));

  VAR_11->below_commit = FUNC_0(VAR_9, VAR_0);
  VAR_11->flanked = FUNC_6(VAR_3, VAR_9, VAR_0->position, VAR_0->id);
  VAR_11->next_right = FUNC_5(VAR_4, VAR_9, 0);
  VAR_11->matches_commit = VAR_10->id == VAR_0->id;

  VAR_11->shift_left = FUNC_13(VAR_3, VAR_2, VAR_9);
  VAR_11->continue_shift = (VAR_9 + 1 < VAR_3->size) ? FUNC_13(VAR_3, VAR_2, VAR_9 + 1) : 0;
  VAR_11->below_shift = VAR_2->columns[VAR_9].symbol.shift_left;

  VAR_11->new_column = FUNC_10(VAR_3, VAR_2, VAR_9);
  VAR_11->empty = (!FUNC_9(&VAR_3->columns[VAR_9]));

  if (FUNC_9(VAR_10)) {
   VAR_12 = VAR_10->id;
  }
  VAR_11->color = FUNC_7(VAR_0, VAR_12);

  FUNC_8(VAR_0, VAR_1, VAR_11);
 }

 FUNC_1(&VAR_0->colors, VAR_0->id);
}
