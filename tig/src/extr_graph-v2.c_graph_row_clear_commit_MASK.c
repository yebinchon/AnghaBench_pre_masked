
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct graph_row {int size; TYPE_1__* columns; } ;
struct TYPE_2__ {char const* id; } ;



__attribute__((used)) static void
FUNC_0(struct graph_row *VAR_0, const char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->size; VAR_2++) {
  if (VAR_0->columns[VAR_2].id == VAR_1) {
   VAR_0->columns[VAR_2].id = ((void*)0);
  }
 }
}
