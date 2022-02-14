
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view_column {int dummy; } ;
struct view {int regex; } ;
struct ref {int name; struct ref* next; } ;
typedef int regmatch_t ;


 int FUNC_0 (int ,int ,int,int *,int ) ;

__attribute__((used)) static bool
FUNC_1(struct view *VAR_0, struct view_column *VAR_1, const struct ref *VAR_2)
{
 regmatch_t VAR_3;

 for (; VAR_2; VAR_2 = VAR_2->next) {
  if (!FUNC_0(VAR_0->regex, VAR_2->name, 1, &VAR_3, 0))
   return 1;
 }

 return 0;
}
