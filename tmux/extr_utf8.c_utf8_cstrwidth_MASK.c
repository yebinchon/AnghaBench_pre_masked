
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct utf8_data {int have; scalar_t__ width; } ;
typedef enum utf8_state { ____Placeholder_utf8_state } utf8_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct utf8_data*,char const) ;
 int FUNC_1 (struct utf8_data*,char const) ;

u_int
FUNC_2(const char *VAR_2)
{
 struct utf8_data VAR_3;
 u_int VAR_4;
 enum utf8_state VAR_5;

 VAR_4 = 0;
 while (*VAR_2 != '\0') {
  if ((VAR_5 = FUNC_1(&VAR_3, *VAR_2)) == VAR_1) {
   while (*++VAR_2 != '\0' && VAR_5 == VAR_1)
    VAR_5 = FUNC_0(&VAR_3, *VAR_2);
   if (VAR_5 == VAR_0) {
    VAR_4 += VAR_3.width;
    continue;
   }
   VAR_2 -= VAR_3.have;
  }
  if (*VAR_2 > 0x1f && *VAR_2 != 0x7f)
   VAR_4++;
  VAR_2++;
 }
 return (VAR_4);
}
