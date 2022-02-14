
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int bRefresh; scalar_t__ bValid; } ;
struct TYPE_4__ {TYPE_1__ sVolInfo; } ;
typedef int TCHAR ;
typedef int * LPTSTR ;
typedef scalar_t__ DWORD ;
typedef size_t DRIVEIND ;
typedef size_t DRIVE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,size_t) ;
 scalar_t__ FUNC_2 (size_t,int **,scalar_t__) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 TYPE_2__* VAR_5 ;
 size_t* VAR_6 ;

VOID
FUNC_6(LPTSTR* VAR_7, DRIVEIND VAR_8,
   BOOL VAR_9, DWORD VAR_10)
{
   static TCHAR VAR_11[64];
   DRIVE VAR_12;
   LPTSTR VAR_13;
   DWORD VAR_14;

   VAR_12 = VAR_6[VAR_8];






   if (VAR_9 || (!FUNC_4(VAR_12) && !FUNC_3(VAR_12)) ||
      (VAR_5[VAR_12].sVolInfo.bValid && !VAR_5[VAR_12].sVolInfo.bRefresh)) {

      if ((VAR_14 = FUNC_2(VAR_6[VAR_8], VAR_7, VAR_10))) {

         if (VAR_4 == VAR_14) {

            goto UseRegName;
         }

         goto Failed;

      } else {




         if (VAR_0 == VAR_10) {

UseRegName:

            VAR_13 = *VAR_7;

            *VAR_7 = VAR_11;
            FUNC_5(VAR_11+3, VAR_13, FUNC_0(VAR_11)-4);

         } else {




            (*VAR_7) -=3;
         }
      }

   } else {

Failed:

      *VAR_7 = VAR_11;




      (*VAR_7)[3]=VAR_2;
   }

   FUNC_1(*VAR_7,VAR_6[VAR_8]);

   (*VAR_7)[1] = VAR_1;
   (*VAR_7)[2] = VAR_3;
}
