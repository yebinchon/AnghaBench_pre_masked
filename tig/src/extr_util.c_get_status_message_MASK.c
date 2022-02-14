
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char const** VAR_3 ;
 int VAR_4 ;

const char *
FUNC_0(enum status_code VAR_5)
{
 if (VAR_5 == VAR_1) {
  const char *VAR_6 = VAR_4 ? VAR_2 : "";

  VAR_4 = 0;
  return VAR_6;
 }
 if (VAR_5 == VAR_0)
  return VAR_2;
 return VAR_3[VAR_5];
}
