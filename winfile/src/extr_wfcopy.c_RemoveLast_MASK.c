
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef scalar_t__* LPTSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

UINT
FUNC_0(LPTSTR VAR_3)
{
  LPTSTR VAR_4;
  UINT VAR_5 = 0;

  for (VAR_4=VAR_3; *VAR_3; VAR_3++) {

     if (*VAR_3 == VAR_0) {

        VAR_4 = VAR_3;
        VAR_5 = 0;

     } else if (*VAR_3 == VAR_1) {

        if (VAR_3[1] ==VAR_0) {

           VAR_3++;

        }

        VAR_4 = VAR_3 + 1;

        VAR_5 = 0;
        continue;
     }
     VAR_5++;
  }

  *VAR_4 = VAR_2;
  return VAR_5;
}
