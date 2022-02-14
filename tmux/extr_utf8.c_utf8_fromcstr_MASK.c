
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utf8_data {scalar_t__ size; int have; } ;
typedef enum utf8_state { ____Placeholder_utf8_state } utf8_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct utf8_data*,char const) ;
 int FUNC_1 (struct utf8_data*,char const) ;
 int FUNC_2 (struct utf8_data*,char const) ;
 struct utf8_data* FUNC_3 (struct utf8_data*,size_t,int) ;

struct utf8_data *
FUNC_4(const char *VAR_2)
{
 struct utf8_data *VAR_3;
 size_t VAR_4;
 enum utf8_state VAR_5;

 VAR_3 = ((void*)0);

 VAR_4 = 0;
 while (*VAR_2 != '\0') {
  VAR_3 = FUNC_3(VAR_3, VAR_4 + 1, sizeof *VAR_3);
  if ((VAR_5 = FUNC_1(&VAR_3[VAR_4], *VAR_2)) == VAR_1) {
   while (*++VAR_2 != '\0' && VAR_5 == VAR_1)
    VAR_5 = FUNC_0(&VAR_3[VAR_4], *VAR_2);
   if (VAR_5 == VAR_0) {
    VAR_4++;
    continue;
   }
   VAR_2 -= VAR_3[VAR_4].have;
  }
  FUNC_2(&VAR_3[VAR_4], *VAR_2);
  VAR_4++;
  VAR_2++;
 }

 VAR_3 = FUNC_3(VAR_3, VAR_4 + 1, sizeof *VAR_3);
 VAR_3[VAR_4].size = 0;
 return (VAR_3);
}
