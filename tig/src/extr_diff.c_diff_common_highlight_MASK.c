
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct diff_stat_context {char const* member_0; int member_1; int member_2; int text; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct diff_stat_context*,int ,int) ;
 scalar_t__ FUNC_1 (struct diff_stat_context*,char const*,int const) ;
 int FUNC_2 (struct view*,char const*,int,struct diff_stat_context*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(struct view *VAR_3, const char *VAR_4, enum line_type VAR_5)
{
 struct diff_stat_context VAR_6 = { VAR_4, VAR_5, 1 };
 enum line_type VAR_7 = VAR_5 == VAR_0
     ? VAR_1 : VAR_2;
 const char *VAR_8[] = { "\x1b[7m", "\x1b[27m" };
 const enum line_type VAR_9[] = { VAR_7, VAR_5 };
 int VAR_10;

 for (VAR_10 = 0; FUNC_1(&VAR_6, VAR_8[VAR_10], VAR_9[VAR_10]); VAR_10 = (VAR_10 + 1) % 2)
  ;

 FUNC_0(&VAR_6, FUNC_3(VAR_6.text), 1);
 return FUNC_2(VAR_3, VAR_4, VAR_5, &VAR_6);
}
