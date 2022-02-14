
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int XDTALINK ;
struct TYPE_7__ {scalar_t__ dwSize; } ;
struct TYPE_6__ {struct TYPE_6__* next; scalar_t__ dwNextFree; } ;
typedef scalar_t__ PBYTE ;
typedef TYPE_1__* LPXDTALINK ;
typedef TYPE_2__* LPXDTA ;
typedef scalar_t__ INT ;



LPXDTA
FUNC_0(register LPXDTALINK* VAR_0, register LPXDTA VAR_1)
{
   register LPXDTALINK VAR_2 = *VAR_0;

   if ((PBYTE)VAR_1 + VAR_1->dwSize - (PBYTE)VAR_2 == (INT)VAR_2->dwNextFree)
   {
      *VAR_0 = VAR_2->next;
      return (LPXDTA)(((PBYTE)*VAR_0)+sizeof(XDTALINK));
   }
   else
   {
      return (LPXDTA)((PBYTE)VAR_1 + VAR_1->dwSize);
   }
}
