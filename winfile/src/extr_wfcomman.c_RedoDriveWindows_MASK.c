
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ INT ;
typedef int * HWND ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int ,long) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;

VOID
FUNC_5(HWND VAR_6)
{
   INT VAR_7;
   INT VAR_8;

   if (VAR_6 == ((void*)0))
      VAR_6 = (HWND) FUNC_4(VAR_4, VAR_2,0,0L);

   VAR_7 = (INT)FUNC_1(VAR_6, VAR_1);

   if (VAR_7 >= 0) {
      for (VAR_8=0; VAR_8<VAR_3; VAR_8++) {
         if (VAR_5[VAR_8] == VAR_7) {




            FUNC_0(VAR_7);
            FUNC_3(VAR_8);

            break;
         }
      }
   }




   FUNC_2(VAR_6,VAR_0);
}
