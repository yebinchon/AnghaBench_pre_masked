
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_2__ {size_t uDesc; int * lpszBuf; } ;
typedef TYPE_1__* PFILETYPE ;
typedef long LPARAM ;
typedef int INT ;
typedef int HWND ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,long) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

VOID
FUNC_3(HWND VAR_9)
{
   INT VAR_10;
   PFILETYPE VAR_11;




   VAR_10 = (INT)FUNC_2(VAR_9, VAR_0, VAR_4, 0, 0L);

   if (-1 == VAR_10) {
      FUNC_2(VAR_9, VAR_0, VAR_6, 0, 0L);
      VAR_10=0;
   }

   FUNC_0(FUNC_1(VAR_9, VAR_2), VAR_10);
   FUNC_0(FUNC_1(VAR_9, VAR_3), VAR_10);

   if (VAR_10) {

      VAR_11 = (PFILETYPE) FUNC_2(VAR_9, VAR_0, VAR_5, VAR_10, 0L);




      FUNC_2(VAR_9, VAR_1, VAR_7, 0,
         (LPARAM) &VAR_11->lpszBuf[VAR_11->uDesc]);

   } else {

      FUNC_2(VAR_9, VAR_1, VAR_7, 0, (LPARAM)VAR_8);
   }
}
