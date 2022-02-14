
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_row {int size; struct graph_column* columns; } ;
struct graph_v2 {struct graph_row parents; struct graph_row next_row; struct graph_row row; struct graph_row prev_row; } ;
struct graph_column {int * id; } ;


 scalar_t__ FUNC_0 (struct graph_column*) ;
 size_t FUNC_1 (struct graph_row*) ;
 int FUNC_2 (struct graph_v2*,struct graph_row*,int,int *) ;

__attribute__((used)) static void
FUNC_3(struct graph_v2 *VAR_0)
{
 struct graph_row *VAR_1 = &VAR_0->prev_row;
 struct graph_row *VAR_2 = &VAR_0->row;
 struct graph_row *VAR_3 = &VAR_0->next_row;
 struct graph_row *VAR_4 = &VAR_0->parents;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->size; VAR_5++) {
  struct graph_column *VAR_6 = &VAR_4->columns[VAR_5];

  if (FUNC_0(VAR_6)) {
   size_t VAR_7 = FUNC_1(VAR_3);

   if (VAR_7 == VAR_3->size && FUNC_0(&VAR_3->columns[VAR_3->size - 1])) {
    FUNC_2(VAR_0, VAR_3, VAR_3->size, VAR_6->id);
    FUNC_2(VAR_0, VAR_2, VAR_2->size, ((void*)0));
    FUNC_2(VAR_0, VAR_1, VAR_1->size, ((void*)0));
   } else {
    VAR_3->columns[VAR_7] = *VAR_6;
   }
  }
 }
}
