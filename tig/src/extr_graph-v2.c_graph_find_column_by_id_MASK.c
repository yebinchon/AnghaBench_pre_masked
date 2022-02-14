
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct graph_row {size_t size; TYPE_1__* columns; } ;
struct TYPE_2__ {char const* id; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static size_t
FUNC_1(struct graph_row *VAR_0, const char *VAR_1)
{
 size_t VAR_2 = VAR_0->size;
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->size; VAR_3++) {
  if (!FUNC_0(&VAR_0->columns[VAR_3]) && VAR_2 == VAR_0->size)
   VAR_2 = VAR_3;
  else if (VAR_0->columns[VAR_3].id == VAR_1)
   return VAR_3;
 }

 return VAR_2;
}
