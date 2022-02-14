
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_row {int size; int * columns; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct graph_row *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->size;VAR_2++) {
  if (FUNC_0(&VAR_0->columns[VAR_2]))
   VAR_1++;
 }

 return VAR_1;
}
