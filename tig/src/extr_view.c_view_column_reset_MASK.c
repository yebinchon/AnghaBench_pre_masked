
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view_column {scalar_t__ width; struct view_column* next; } ;
struct view {struct view_column* columns; } ;


 int FUNC_0 (struct view*,int) ;

void
FUNC_1(struct view *VAR_0)
{
 struct view_column *VAR_1;

 FUNC_0(VAR_0, 1);
 for (VAR_1 = VAR_0->columns; VAR_1; VAR_1 = VAR_1->next)
  VAR_1->width = 0;
}
