
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,char const*,int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static enum status_code
FUNC_2(char *VAR_2, const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_1(VAR_3);

 switch (VAR_3[0]) {
 case '\"':
 case '\'':
  if (VAR_5 == 1 || VAR_3[VAR_5 - 1] != VAR_3[0])
   return VAR_0;
  VAR_3 += 1; VAR_5 -= 2;

 default:
  FUNC_0(VAR_2, VAR_4, VAR_3, VAR_5);
  return VAR_1;
 }
}
