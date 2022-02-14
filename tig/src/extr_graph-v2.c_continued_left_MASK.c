
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct graph_row {TYPE_1__* columns; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_1(struct graph_row *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_1 < VAR_2)
  VAR_4 = 0;
 else
  VAR_4 = VAR_2;

 for (VAR_3 = VAR_4; VAR_3 < VAR_1; VAR_3++) {
  if (!FUNC_0(&VAR_0->columns[VAR_3]))
   continue;

  if (VAR_0->columns[VAR_1].id == VAR_0->columns[VAR_3].id)
   return 1;
 }

 return 0;
}
