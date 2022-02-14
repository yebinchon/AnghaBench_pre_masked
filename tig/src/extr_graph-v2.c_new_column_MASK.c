
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct graph_row {int size; TYPE_1__* columns; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_1(struct graph_row *VAR_0, struct graph_row *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!FUNC_0(&VAR_1->columns[VAR_2]))
  return 1;

 for (VAR_3 = VAR_2; VAR_3 < VAR_0->size; VAR_3++) {
  if (VAR_0->columns[VAR_2].id == VAR_1->columns[VAR_3].id)
   return 0;
 }

 return 1;
}
