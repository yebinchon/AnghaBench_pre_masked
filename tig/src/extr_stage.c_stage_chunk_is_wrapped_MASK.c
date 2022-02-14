
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct line {scalar_t__ wrapped; } ;


 int VAR_0 ;
 struct line* FUNC_0 (struct view*,struct line*,int ) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_1(struct view *VAR_2, struct line *VAR_3)
{
 struct line *VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0);

 if (!VAR_1 || !VAR_4)
  return 0;

 for (; VAR_4 <= VAR_3; VAR_4++)
  if (VAR_4->wrapped)
   return 1;

 return 0;
}
