
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ PDNODE ;
typedef long LPARAM ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef int HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,long) ;
 int FUNC_3 (int ,int ,int ) ;

VOID
FUNC_4(HWND VAR_4)
{
  INT VAR_5;
  PDNODE VAR_6;



  VAR_5 = (INT)FUNC_2(VAR_4, VAR_1, 0, 0L) - 1;
  while (VAR_5 >= 0)
  {
      FUNC_2(VAR_4, VAR_2, VAR_5, (LPARAM)&VAR_6);
      FUNC_1((HANDLE)VAR_6);
      VAR_5--;
  }

  FUNC_2(VAR_4, VAR_3, 0, 0L);
  FUNC_3(FUNC_0(VAR_4), VAR_0, 0);
}
