
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
typedef int space ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct view*) ;
 scalar_t__ FUNC_2 (struct view*,int,char*,int,int,int) ;

__attribute__((used)) static bool
FUNC_3(struct view *VAR_0, enum line_type VAR_1, int VAR_2, int VAR_3)
{
 static char VAR_4[] = "                    ";

 VAR_3 = FUNC_0(VAR_2, VAR_3);

 while (VAR_3 > 0) {
  int VAR_5 = FUNC_0(VAR_3, sizeof(VAR_4) - 1);

  if (FUNC_2(VAR_0, VAR_1, VAR_4, -1, VAR_5, 0))
   return 1;
  VAR_3 -= VAR_5;
 }

 return FUNC_1(VAR_0) <= 0;
}
