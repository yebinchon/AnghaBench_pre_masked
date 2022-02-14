
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {struct view* parent; } ;
struct status {int dummy; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 int FUNC_0 (struct view*,int) ;
 struct view VAR_0 ;
 int FUNC_1 (struct view*,struct status*,int) ;
 struct view VAR_1 ;

__attribute__((used)) static bool
FUNC_2(struct view *VAR_2, struct status *VAR_3, enum line_type VAR_4)
{
 struct view *VAR_5 = VAR_2->parent;

 if (VAR_5 == &VAR_1)
  return FUNC_1(VAR_5, VAR_3, VAR_4);

 if (VAR_5 == &VAR_0)
  return FUNC_0(VAR_5, VAR_4);

 return 0;
}
