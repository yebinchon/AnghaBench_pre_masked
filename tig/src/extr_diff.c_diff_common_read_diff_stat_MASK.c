
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct line {int dummy; } ;
struct diff_stat_context {char const* member_0; int text; int member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct diff_stat_context*,int ,int) ;
 struct line* FUNC_1 (struct view*,char const*,int ,struct diff_stat_context*) ;
 scalar_t__ FUNC_2 (struct diff_stat_context*,char,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct line *
FUNC_4(struct view *VAR_4, const char *VAR_5)
{
 struct diff_stat_context VAR_6 = { VAR_5, VAR_3 };

 FUNC_2(&VAR_6, '|', VAR_0);
 if (FUNC_2(&VAR_6, 'B', VAR_0)) {

  FUNC_2(&VAR_6, ' ', VAR_2);
  FUNC_2(&VAR_6, '-', VAR_0);
  FUNC_2(&VAR_6, ' ', VAR_1);
  FUNC_2(&VAR_6, 'b', VAR_0);

 } else {
  FUNC_2(&VAR_6, '+', VAR_1);
  FUNC_2(&VAR_6, '-', VAR_2);
 }
 FUNC_0(&VAR_6, FUNC_3(VAR_6.text), 0);

 return FUNC_1(VAR_4, VAR_5, VAR_3, &VAR_6);
}
