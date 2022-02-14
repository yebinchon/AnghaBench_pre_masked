
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct line {scalar_t__ type; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 struct line* FUNC_1 (struct view*,char const*,int) ;
 int FUNC_2 (struct view*,char const*) ;
 scalar_t__ VAR_2 ;
 struct line* FUNC_3 (struct view*,char const*,int) ;
 scalar_t__ FUNC_4 (struct view*,int ) ;

bool
FUNC_5(struct view *VAR_3, const char *VAR_4, enum line_type VAR_5, struct line **VAR_6)
{
 struct line *VAR_7;

 if (!VAR_4)
  return 1;

 if (VAR_2) {
  VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5);
 } else {
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);
 }

 if (!VAR_7)
  return 0;

 if (VAR_6)
  *VAR_6 = VAR_7;

 if (VAR_7->type == VAR_0 && FUNC_4(VAR_3, VAR_1))
  FUNC_2(VAR_3, VAR_4 + FUNC_0("commit "));

 return 1;
}
