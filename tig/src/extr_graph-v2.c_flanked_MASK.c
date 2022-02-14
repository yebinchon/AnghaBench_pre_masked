
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct graph_row {int size; TYPE_1__* columns; } ;
struct TYPE_2__ {char const* id; } ;



__attribute__((used)) static bool
FUNC_0(struct graph_row *VAR_0, int VAR_1, int VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 if (VAR_1 < VAR_2) {
  VAR_5 = 0;
  VAR_6 = VAR_1;
 } else {
  VAR_5 = VAR_1 + 1;
  VAR_6 = VAR_0->size;
 }

 for (VAR_4 = VAR_5; VAR_4 < VAR_6; VAR_4++) {
  if (VAR_0->columns[VAR_4].id == VAR_3)
   return 1;
 }

 return 0;
}
