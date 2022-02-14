
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dwFileAttributes; int * cAlternateFileName; int * cFileName; } ;
struct TYPE_4__ {int dwAttrFilter; scalar_t__ nSpaceLeft; scalar_t__ err; TYPE_3__ fd; int hFindFile; } ;
typedef int PVOID ;
typedef TYPE_1__* LPLFNDTA ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;

BOOL
FUNC_6(LPLFNDTA VAR_3)
{
 PVOID VAR_4;
 FUNC_2(&VAR_4);

   while (FUNC_0(VAR_3->hFindFile, &VAR_3->fd)) {

   VAR_3->fd.dwFileAttributes &= VAR_0;




      if ((VAR_3->fd.dwFileAttributes & ~VAR_3->dwAttrFilter) != 0)
         continue;




      if (FUNC_5(VAR_3->fd.cFileName) > VAR_3->nSpaceLeft) {

         if (!VAR_3->fd.cAlternateFileName[0] ||
            FUNC_5(VAR_3->fd.cAlternateFileName) > VAR_3->nSpaceLeft) {

            continue;
         }




         FUNC_4(VAR_3->fd.cFileName, VAR_3->fd.cAlternateFileName);
      }

   FUNC_3(VAR_4);
      VAR_3->err = 0;
      return VAR_2;
   }

   VAR_3->err = FUNC_1();

   FUNC_3(VAR_4);
   return(VAR_1);
}
