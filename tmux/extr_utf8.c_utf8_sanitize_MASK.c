
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct utf8_data {size_t width; int have; } ;
typedef enum utf8_state { ____Placeholder_utf8_state } utf8_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct utf8_data*,char const) ;
 int FUNC_1 (struct utf8_data*,char const) ;
 char* FUNC_2 (char*,size_t,int) ;

char *
FUNC_3(const char *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;
 enum utf8_state VAR_5;
 struct utf8_data VAR_6;
 u_int VAR_7;

 VAR_3 = ((void*)0);

 VAR_4 = 0;
 while (*VAR_2 != '\0') {
  VAR_3 = FUNC_2(VAR_3, VAR_4 + 1, sizeof *VAR_3);
  if ((VAR_5 = FUNC_1(&VAR_6, *VAR_2)) == VAR_1) {
   while (*++VAR_2 != '\0' && VAR_5 == VAR_1)
    VAR_5 = FUNC_0(&VAR_6, *VAR_2);
   if (VAR_5 == VAR_0) {
    VAR_3 = FUNC_2(VAR_3, VAR_4 + VAR_6.width,
        sizeof *VAR_3);
    for (VAR_7 = 0; VAR_7 < VAR_6.width; VAR_7++)
     VAR_3[VAR_4++] = '_';
    continue;
   }
   VAR_2 -= VAR_6.have;
  }
  if (*VAR_2 > 0x1f && *VAR_2 < 0x7f)
   VAR_3[VAR_4++] = *VAR_2;
  else
   VAR_3[VAR_4++] = '_';
  VAR_2++;
 }

 VAR_3 = FUNC_2(VAR_3, VAR_4 + 1, sizeof *VAR_3);
 VAR_3[VAR_4] = '\0';
 return (VAR_3);
}
