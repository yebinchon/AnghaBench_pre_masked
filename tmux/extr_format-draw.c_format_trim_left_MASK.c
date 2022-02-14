
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct utf8_data {scalar_t__ width; char const* data; int size; int have; } ;
typedef enum utf8_state { ____Placeholder_utf8_state } utf8_state ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (struct utf8_data*,char const) ;
 int FUNC_4 (struct utf8_data*,char const) ;
 char* FUNC_5 (scalar_t__) ;

char *
FUNC_6(const char *VAR_2, u_int VAR_3)
{
 char *VAR_4, *VAR_5;
 const char *VAR_6 = VAR_2, *VAR_7;
 u_int VAR_8 = 0;
 struct utf8_data VAR_9;
 enum utf8_state VAR_10;

 VAR_5 = VAR_4 = FUNC_5(FUNC_2(VAR_2) + 1);
 while (*VAR_6 != '\0') {
  if (VAR_6[0] == '#' && VAR_6[1] == '[') {
   VAR_7 = FUNC_0(VAR_6 + 2, "]");
   if (VAR_7 == ((void*)0))
    break;
   FUNC_1(VAR_5, VAR_6, VAR_7 + 1 - VAR_6);
   VAR_5 += (VAR_7 + 1 - VAR_6);
   VAR_6 = VAR_7 + 1;
  } else if ((VAR_10 = FUNC_4(&VAR_9, *VAR_6)) == VAR_1) {
   while (*++VAR_6 != '\0' && VAR_10 == VAR_1)
    VAR_10 = FUNC_3(&VAR_9, *VAR_6);
   if (VAR_10 == VAR_0) {
    if (VAR_8 + VAR_9.width <= VAR_3) {
     FUNC_1(VAR_5, VAR_9.data, VAR_9.size);
     VAR_5 += VAR_9.size;
    }
    VAR_8 += VAR_9.width;
   } else
    VAR_6 -= VAR_9.have;
  } else if (*VAR_6 > 0x1f && *VAR_6 < 0x7f) {
   if (VAR_8 + 1 <= VAR_3)
    *VAR_5++ = *VAR_6;
   VAR_8++;
   VAR_6++;
  } else
   VAR_6++;
 }
 *VAR_5 = '\0';
 return (VAR_4);
}
