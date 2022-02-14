
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int VOID ;
typedef scalar_t__* LPWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;

VOID
FUNC_2(
   LPWSTR VAR_5)
{
  WCHAR VAR_6[VAR_2+1];
  register LPWSTR VAR_7;

  if (*VAR_5 == VAR_0) {
    FUNC_1(VAR_6, VAR_4);
    FUNC_0(VAR_6, VAR_5);
    FUNC_1(VAR_5, VAR_6);
  }





  VAR_7 = VAR_5;
  while ((*VAR_7) && (*VAR_7 != VAR_0))
      ++VAR_7;

  if ((!*VAR_7) && (VAR_7 != VAR_5)) {
     --VAR_7;

     if (*VAR_7 == VAR_1)
        FUNC_0(VAR_7, VAR_3);
  }
}
