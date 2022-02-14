
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char const*,char) ;

enum status_code
FUNC_4(double *VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);

 if (!VAR_3 && !FUNC_2(*VAR_2))
  return FUNC_1("Invalid double or percentage");

 *VAR_1 = VAR_3;
 if (!FUNC_3(VAR_2, '%'))
  return VAR_0;


 *VAR_1 /= 100;
 if (*VAR_1 >= 1.0) {
  *VAR_1 = 0.99;
  return FUNC_1("Percentage is larger than 100%%");
 }
 if (*VAR_1 < 0.0) {
  *VAR_1 = 1;
  return FUNC_1("Percentage is less than 0%%");
 }
 return VAR_0;
}
