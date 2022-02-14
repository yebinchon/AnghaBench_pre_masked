
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct utf8_data {int have; scalar_t__ width; } ;
typedef enum utf8_state { ____Placeholder_utf8_state } utf8_state ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char*) ;
 int FUNC_1 (struct utf8_data*,char const) ;
 int FUNC_2 (struct utf8_data*,char const) ;

u_int
FUNC_3(const char *VAR_2)
{
 const char *VAR_3, *VAR_4;
 u_int VAR_5 = 0;
 struct utf8_data VAR_6;
 enum utf8_state VAR_7;

 VAR_3 = VAR_2;
 while (*VAR_3 != '\0') {
  if (VAR_3[0] == '#' && VAR_3[1] == '[') {
   VAR_4 = FUNC_0(VAR_3 + 2, "]");
   if (VAR_4 == ((void*)0))
    return 0;
   VAR_3 = VAR_4 + 1;
  } else if ((VAR_7 = FUNC_2(&VAR_6, *VAR_3)) == VAR_1) {
   while (*++VAR_3 != '\0' && VAR_7 == VAR_1)
    VAR_7 = FUNC_1(&VAR_6, *VAR_3);
   if (VAR_7 == VAR_0)
    VAR_5 += VAR_6.width;
   else
    VAR_3 -= VAR_6.have;
  } else if (*VAR_3 > 0x1f && *VAR_3 < 0x7f) {
   VAR_5++;
   VAR_3++;
  } else
   VAR_3++;
 }
 return (VAR_5);
}
