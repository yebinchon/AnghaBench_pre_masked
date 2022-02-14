
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ LowPart; scalar_t__ HighPart; } ;
struct TYPE_10__ {scalar_t__ fdwStatus; int * alpxdtaSorted; TYPE_1__ qTotalSize; scalar_t__ dwTotalCount; scalar_t__ dwEntries; } ;
struct TYPE_9__ {int dwNextFree; int dwSize; int * next; } ;
typedef int TCHAR ;
typedef TYPE_2__* LPXDTALINK ;
typedef TYPE_3__* LPXDTAHEAD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,TYPE_2__*) ;

LPXDTALINK
FUNC_4()
{
   LPXDTALINK VAR_3;
   LPXDTAHEAD VAR_4;

   VAR_3 = (LPXDTALINK) FUNC_0(VAR_2, VAR_0);

   if (!VAR_3)
      return ((void*)0);




   VAR_3->next = ((void*)0);



   VAR_3->dwNextFree = VAR_1;




   VAR_4 = FUNC_1(VAR_3);




   VAR_4->dwEntries = 0;
   VAR_4->dwTotalCount = 0;
   VAR_4->qTotalSize.HighPart = 0;
   VAR_4->qTotalSize.LowPart = 0;
   VAR_4->alpxdtaSorted = ((void*)0);
   VAR_4->fdwStatus = 0;
   return VAR_3;
}
