
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_2__ {size_t* dwLines; scalar_t__* lpszRemoteNameMinusFour; } ;
typedef scalar_t__ LPTSTR ;
typedef size_t DWORD ;
typedef size_t DRIVE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 TYPE_1__* VAR_2 ;

VOID
FUNC_1(DRIVE VAR_3, DWORD VAR_4)
{
   LPTSTR VAR_5;
   DWORD VAR_6=0;





   VAR_5 = VAR_2[VAR_3].lpszRemoteNameMinusFour[VAR_4] +
      VAR_1;

   do
   {
      VAR_6++;
      VAR_5 = FUNC_0(VAR_5, VAR_0);
   } while (VAR_5++);

   VAR_2[VAR_3].dwLines[VAR_4] = VAR_6;
}
