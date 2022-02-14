
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* bShareChkTried; void* bShareChkFail; } ;
struct TYPE_5__ {int dwNetType; } ;
typedef int TCHAR ;
typedef TYPE_1__* PDNODE ;
typedef int DWORD ;
typedef size_t DRIVE ;
typedef int BOOL ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 TYPE_2__* VAR_5 ;

BOOL
FUNC_3(PDNODE VAR_6)
{

   TCHAR VAR_7[VAR_1 * 2];
   DWORD VAR_8;
   DRIVE VAR_9;


   if (!VAR_3)
      return VAR_0;





   if (VAR_6->dwNetType == (DWORD)-1)
   {
      FUNC_1(VAR_6, VAR_7);
      VAR_9 = FUNC_0(VAR_7);

      if (!VAR_5[VAR_9].bShareChkFail &&
          FUNC_2( VAR_7,
                                &VAR_8,
                                !VAR_5[VAR_9].bShareChkTried ) == VAR_4)
      {
         VAR_6->dwNetType = VAR_8;
      }
      else
      {
         VAR_6->dwNetType = 0;
         VAR_5[VAR_9].bShareChkFail = VAR_2;
      }

      VAR_5[VAR_9].bShareChkTried = VAR_2;
   }

   return VAR_6->dwNetType;
}
