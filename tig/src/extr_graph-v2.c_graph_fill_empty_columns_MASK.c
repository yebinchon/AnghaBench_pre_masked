
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_row {int size; int * columns; } ;
struct graph_v2 {struct graph_row next_row; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct graph_v2 *VAR_0)
{
 struct graph_row *VAR_1 = &VAR_0->next_row;
 int VAR_2;

 for (VAR_2 = VAR_1->size - 2; VAR_2 >= 0; VAR_2--) {
  if (!FUNC_0(&VAR_1->columns[VAR_2])) {
   VAR_1->columns[VAR_2] = VAR_1->columns[VAR_2 + 1];
  }
 }
}
