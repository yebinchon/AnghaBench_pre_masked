
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view_column {int type; struct view_column* next; } ;
struct view {struct view_column* columns; } ;
typedef enum view_column_type { ____Placeholder_view_column_type } view_column_type ;



struct view_column *
FUNC_0(struct view *VAR_0, enum view_column_type VAR_1)
{
 struct view_column *VAR_2;

 for (VAR_2 = VAR_0->columns; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_2->type == VAR_1)
   return VAR_2;
 return ((void*)0);
}
