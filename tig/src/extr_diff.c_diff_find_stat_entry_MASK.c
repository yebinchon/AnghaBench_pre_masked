
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct line {int dummy; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 int VAR_0 ;
 struct line* FUNC_0 (struct view*,struct line*,int) ;
 struct line* FUNC_1 (struct view*,struct line*,int ) ;

__attribute__((used)) static bool
FUNC_2(struct view *VAR_1, struct line *VAR_2, enum line_type VAR_3)
{
 struct line *VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 return VAR_4 &&
  VAR_2 == FUNC_1(VAR_1, VAR_4, VAR_0);
}
