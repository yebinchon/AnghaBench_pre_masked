
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 size_t FUNC_0 (char*,char*) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static enum status_code
FUNC_2(char **VAR_1, const char **VAR_2, const char **VAR_3, bool VAR_4)
{
 size_t VAR_5 = FUNC_0(*VAR_1, ",");
 size_t VAR_6;

 if (FUNC_1(*VAR_1) > VAR_5)
  (*VAR_1)[VAR_5] = 0;
 VAR_6 = FUNC_0(*VAR_1, ":=");

 if (VAR_4) {
  *VAR_2 = "display";

  if (VAR_6 == VAR_5) {
   *VAR_3 = VAR_5 ? *VAR_1 : "yes";
   *VAR_1 += VAR_5 + 1;
   return VAR_0;
  }


  *VAR_3 = "yes";
  return VAR_0;
 }

 *VAR_2 = *VAR_1;
 if (VAR_6 == VAR_5)
  *VAR_3 = "yes";
 else
  *VAR_3 = *VAR_1 + VAR_6 + 1;
 (*VAR_1)[VAR_6] = 0;
 *VAR_1 += VAR_5 + 1;

 return VAR_0;
}
