
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * columns; } ;
struct TYPE_5__ {int size; int * columns; } ;
struct TYPE_4__ {int * columns; } ;
struct graph_v2 {int position; int prev_position; TYPE_3__ next_row; TYPE_2__ row; TYPE_1__ prev_row; int parents; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct graph_v2 *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->row.size; VAR_1++) {
  VAR_0->prev_row.columns[VAR_1] = VAR_0->row.columns[VAR_1];

  if (VAR_1 == VAR_0->position && FUNC_0(&VAR_0->parents) > 0)
   VAR_0->prev_row.columns[VAR_1] = VAR_0->next_row.columns[VAR_1];

  if (!FUNC_1(&VAR_0->prev_row.columns[VAR_1]))
   VAR_0->prev_row.columns[VAR_1] = VAR_0->next_row.columns[VAR_1];

  VAR_0->row.columns[VAR_1] = VAR_0->next_row.columns[VAR_1];
 }

 VAR_0->prev_position = VAR_0->position;
}
