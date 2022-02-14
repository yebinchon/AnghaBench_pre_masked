
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* columns; } ;
struct graph_row {int size; TYPE_3__* columns; } ;
struct graph_v2 {int position; scalar_t__ id; TYPE_2__ prev_row; int parents; struct graph_row next_row; } ;
struct TYPE_5__ {scalar_t__ shift_left; } ;
struct TYPE_8__ {scalar_t__ id; TYPE_1__ symbol; } ;
struct TYPE_7__ {scalar_t__ id; } ;


 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct graph_v2 *VAR_0)
{
 struct graph_row *VAR_1 = &VAR_0->next_row;
 int VAR_2;

 for (VAR_2 = VAR_1->size - 1; VAR_2 > 0; VAR_2--) {
  if (VAR_2 == VAR_0->position)
   continue;

  if (VAR_2 == VAR_0->position + 1)
   continue;

  if (VAR_1->columns[VAR_2].id == VAR_0->id)
   continue;

  if (VAR_1->columns[VAR_2].id != VAR_1->columns[VAR_2 - 1].id)
   continue;

  if (FUNC_0(VAR_1->columns[VAR_2].id, &VAR_0->parents) && !FUNC_1(&VAR_0->prev_row.columns[VAR_2]))
   continue;

  if (VAR_1->columns[VAR_2 - 1].id != VAR_0->prev_row.columns[VAR_2 - 1].id || VAR_0->prev_row.columns[VAR_2 - 1].symbol.shift_left) {
   if (VAR_2 + 1 >= VAR_1->size)
    FUNC_2(&VAR_1->columns[VAR_2], 0, sizeof(VAR_1->columns[VAR_2]));
   else
    VAR_1->columns[VAR_2] = VAR_1->columns[VAR_2 + 1];
  }
 }
}
