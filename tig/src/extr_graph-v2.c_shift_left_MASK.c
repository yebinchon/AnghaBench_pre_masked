
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct graph_row {TYPE_1__* columns; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 int FUNC_0 (struct graph_row*,struct graph_row*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_2(struct graph_row *VAR_0, struct graph_row *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!FUNC_1(&VAR_0->columns[VAR_2]))
  return 0;

 for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--) {
  if (!FUNC_1(&VAR_0->columns[VAR_3]))
   continue;

  if (VAR_0->columns[VAR_3].id != VAR_0->columns[VAR_2].id)
   continue;

  if (!FUNC_0(VAR_1, VAR_0, VAR_3))
   return 1;

  break;
 }

 return 0;
}
