
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view_column_data {int box; int text; } ;
struct view {int dummy; } ;
struct line {int data; } ;


 int FUNC_0 (struct line const*) ;

bool
FUNC_1(struct view *VAR_0, const struct line *VAR_1, struct view_column_data *VAR_2)
{
 VAR_2->text = FUNC_0(VAR_1);
 VAR_2->box = VAR_1->data;
 return 1;
}
