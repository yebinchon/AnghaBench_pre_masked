
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utf8_data {int dummy; } ;
typedef enum utf8_state { ____Placeholder_utf8_state } utf8_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct utf8_data*,char const) ;
 int FUNC_2 (struct utf8_data*,char const) ;

int
FUNC_3(const char *VAR_2)
{
 struct utf8_data VAR_3;
 const char *VAR_4;
 enum utf8_state VAR_5;

 VAR_4 = VAR_2 + FUNC_0(VAR_2);
 while (VAR_2 < VAR_4) {
  if ((VAR_5 = FUNC_2(&VAR_3, *VAR_2)) == VAR_1) {
   while (++VAR_2 < VAR_4 && VAR_5 == VAR_1)
    VAR_5 = FUNC_1(&VAR_3, *VAR_2);
   if (VAR_5 == VAR_0)
    continue;
   return (0);
  }
  if (*VAR_2 < 0x20 || *VAR_2 > 0x7e)
   return (0);
  VAR_2++;
 }
 return (1);
}
