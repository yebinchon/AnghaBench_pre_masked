
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_2__ {int fdwStatus; } ;
typedef scalar_t__ LPXDTALINK ;
typedef int HWND ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,long) ;

VOID
FUNC_4(HWND VAR_3)
{
   register LPXDTALINK VAR_4;

   VAR_4 = (LPXDTALINK)FUNC_0(VAR_3, VAR_0);

   FUNC_3(VAR_3, VAR_0, 0L);




   if (VAR_4) {

       if (FUNC_2(VAR_4)->fdwStatus & VAR_2) {

           FUNC_2(VAR_4)->fdwStatus |= VAR_1;

       } else {

           FUNC_1(VAR_4);
       }
   }
}
