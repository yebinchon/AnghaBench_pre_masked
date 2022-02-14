
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_row {size_t size; int * columns; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static size_t
FUNC_1(struct graph_row *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++) {
  if (!FUNC_0(&VAR_0->columns[VAR_1]))
   return VAR_1;
 }

 return VAR_0->size;
}
