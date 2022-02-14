
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view_column {int opt; int prev_opt; struct view_column* next; } ;
struct view {struct view_column* columns; } ;


 scalar_t__ FUNC_0 (int *,int *,int) ;

bool
FUNC_1(struct view *VAR_0, bool VAR_1)
{
 struct view_column *VAR_2;
 bool VAR_3 = 0;

 for (VAR_2 = VAR_0->columns; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_0(&VAR_2->prev_opt, &VAR_2->opt, sizeof(VAR_2->opt))) {
   if (!VAR_1)
    return 1;
   VAR_2->prev_opt = VAR_2->opt;
   VAR_3 = 1;
  }
 }

 return VAR_3;
}
