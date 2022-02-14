
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
typedef scalar_t__ WCHAR ;
struct TYPE_3__ {scalar_t__ y; scalar_t__ x; } ;
typedef scalar_t__ TCHAR ;
typedef TYPE_1__ POINT ;
typedef scalar_t__ LONG_PTR ;
typedef scalar_t__ INT ;
typedef scalar_t__ HWND ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

INT
FUNC_4(HWND VAR_5, POINT VAR_6)
{
   WCHAR VAR_7;




   if (FUNC_1(VAR_5, VAR_2) != (LONG_PTR)VAR_3)
      return 0;

   VAR_7 = VAR_0;
   while (VAR_5 && (VAR_5 != VAR_4)) {
      VAR_7 = (TCHAR)FUNC_3(VAR_5, VAR_1, 0, FUNC_2((WORD)VAR_6.x, (WORD)VAR_6.y));

      if (VAR_7)
         return VAR_7;

      VAR_5 = FUNC_0(VAR_5);
   }

   return 0;
}
