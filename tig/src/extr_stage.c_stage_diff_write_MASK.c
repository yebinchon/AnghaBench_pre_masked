
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int dummy; } ;
struct io {int dummy; } ;


 char* FUNC_0 (struct line*) ;
 int FUNC_1 (struct io*,char const*,int) ;
 scalar_t__ FUNC_2 (struct line*,struct line*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static bool
FUNC_4(struct io *VAR_0, struct line *VAR_1, struct line *VAR_2)
{
 while (VAR_1 < VAR_2) {
  const char *VAR_3 = FUNC_0(VAR_1);

  if (!FUNC_1(VAR_0, VAR_3, FUNC_3(VAR_3)) ||
      !FUNC_1(VAR_0, "\n", 1))
   return 0;
  VAR_1++;
  if (FUNC_2(VAR_1, VAR_2))
   break;
 }

 return 1;
}
