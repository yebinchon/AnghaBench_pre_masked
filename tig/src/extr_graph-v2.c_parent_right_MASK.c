
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct graph_row {int size; TYPE_1__* columns; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_1(struct graph_row *VAR_0, struct graph_row *VAR_1, struct graph_row *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0->size; VAR_4++) {
  if (!FUNC_0(&VAR_0->columns[VAR_4]))
   continue;

  for (VAR_5 = VAR_3 + 1; VAR_5 < VAR_2->size; VAR_5++) {
   if (VAR_0->columns[VAR_4].id != VAR_2->columns[VAR_5].id)
    continue;

   if (VAR_0->columns[VAR_4].id != VAR_1->columns[VAR_5].id)
    return 1;
  }
 }

 return 0;
}
