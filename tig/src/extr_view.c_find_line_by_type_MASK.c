
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct line {int type; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 scalar_t__ FUNC_0 (struct view*,struct line*) ;

struct line *
FUNC_1(struct view *VAR_0, struct line *VAR_1, enum line_type VAR_2, int VAR_3)
{
 for (; FUNC_0(VAR_0, VAR_1); VAR_1 += VAR_3)
  if (VAR_1->type == VAR_2)
   return VAR_1;

 return ((void*)0);
}
