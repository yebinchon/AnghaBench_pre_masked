
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPTSTR ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

BOOL
FUNC_3(HWND VAR_5, LPTSTR VAR_6)
{
   BOOL VAR_7 = VAR_3;

   if (VAR_6 != ((void*)0))
      FUNC_2(VAR_5, VAR_2, VAR_6);
   else {
      FUNC_0(VAR_5);
      VAR_7 = VAR_0;
   }

   VAR_6 = FUNC_1(VAR_4);

   if (VAR_6 != ((void*)0))
      FUNC_2(VAR_5, VAR_1, VAR_6);

   return VAR_7;
}
