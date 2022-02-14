
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lpRemoteName; int lpProvider; } ;
typedef TYPE_1__ WNET_CONNECTIONINFO ;
struct TYPE_5__ {size_t* lpszRemoteNameMinusFour; size_t* dwRemoteNameMax; int* dwLines; size_t dwAltNameError; TYPE_1__* lpConnectInfo; } ;
typedef TYPE_2__* PDRIVEINFO ;
typedef size_t LPTSTR ;
typedef size_t INT ;
typedef int HLOCAL ;
typedef size_t DWORD ;
typedef size_t DRIVE ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 size_t VAR_4 ;
 int FUNC_3 (size_t,size_t) ;
 size_t VAR_5 ;
 size_t FUNC_4 (int ,int ,size_t,size_t*,int ,int ) ;
 TYPE_2__* VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;

INT
FUNC_5(DRIVE VAR_9, DWORD VAR_10)
{
   PDRIVEINFO VAR_11 = &VAR_6[VAR_9];
   LPTSTR VAR_12;
   DWORD VAR_13;
   WNET_CONNECTIONINFO * VAR_14 = VAR_11->lpConnectInfo;
   DWORD VAR_15;

   for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {





      if (VAR_10)
         break;

      VAR_12 = VAR_11->lpszRemoteNameMinusFour[VAR_15];
      VAR_13 = VAR_11->dwRemoteNameMax[VAR_15];

      if (!VAR_13)
         VAR_13 = VAR_5;

      if (!VAR_12) {
Retry:
         VAR_12 = (LPTSTR) FUNC_1(VAR_3, FUNC_0(VAR_13 + VAR_0));
      }


      VAR_11->lpszRemoteNameMinusFour[VAR_15] = VAR_12;

      if (!VAR_12) {

         VAR_11->dwRemoteNameMax[VAR_15]=0;

         VAR_10 = VAR_2;
         goto Done;
      }

      VAR_10 = FUNC_4(VAR_14->lpProvider,
         VAR_14->lpRemoteName,
         VAR_12 + VAR_0,
         &VAR_13,
         VAR_7[VAR_15],
         VAR_8);

      if (VAR_1 == VAR_10) {






         FUNC_2((HLOCAL)VAR_12);
         goto Retry;
      }

      if (VAR_10) {
         break;
      }

      FUNC_3(VAR_9, VAR_15);
   }
Done:
   if (VAR_10)
   {



      for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
      {
         VAR_11->dwLines[VAR_15] = 1;
      }
   }
   VAR_11->dwAltNameError = VAR_10;
   return VAR_10;
}
