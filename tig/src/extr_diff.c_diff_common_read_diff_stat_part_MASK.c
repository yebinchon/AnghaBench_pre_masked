
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_stat_context {char const* text; int type; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 int FUNC_0 (struct diff_stat_context*,int,int) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static bool
FUNC_3(struct diff_stat_context *VAR_0, char VAR_1, enum line_type VAR_2)
{
 const char *VAR_3 = VAR_1 == '|' ? FUNC_2(VAR_0->text, VAR_1) : FUNC_1(VAR_0->text, VAR_1);

 if (VAR_3 == ((void*)0))
  return 0;

 FUNC_0(VAR_0, VAR_3 - VAR_0->text, 0);
 VAR_0->text = VAR_3;
 VAR_0->type = VAR_2;

 return 1;
}
