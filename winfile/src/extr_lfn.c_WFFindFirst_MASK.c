
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {long dwFileAttributes; } ;
struct TYPE_7__ {scalar_t__ hFindFile; int nSpaceLeft; long dwAttrFilter; TYPE_5__ fd; scalar_t__ err; } ;
typedef int PVOID ;
typedef scalar_t__* LPTSTR ;
typedef TYPE_1__* LPLFNDTA ;
typedef int INT ;
typedef long DWORD ;
typedef int BOOL ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;
 long VAR_9 ;
 long VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (scalar_t__*,TYPE_5__*) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,TYPE_5__*,int ,int *,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__*) ;

BOOL
FUNC_8(
   LPLFNDTA VAR_18,
   LPTSTR VAR_19,
   DWORD VAR_20)
{
   INT VAR_21;
   LPTSTR VAR_22;







   PVOID VAR_23;
   FUNC_5(&VAR_23);

   if ((VAR_20 & ~(VAR_2 | VAR_4)) == 0)
   {

    VAR_18->hFindFile = FUNC_1(VAR_19, VAR_13, &VAR_18->fd, VAR_14, ((void*)0), 0);
   }
   else
   {

    VAR_18->hFindFile = FUNC_0(VAR_19, &VAR_18->fd);
   }

   if (VAR_18->hFindFile == VAR_15) {
       VAR_18->err = FUNC_2();
   } else {
       VAR_18->err = 0;
   }


   VAR_20 |= VAR_0 | VAR_7 | VAR_5 | VAR_8 |
    VAR_9 | VAR_1 | VAR_3 | VAR_6;

   VAR_18->fd.dwFileAttributes &= VAR_10;

   FUNC_6(VAR_23);




   VAR_21 = FUNC_7(VAR_19);
   VAR_22 = &VAR_19[VAR_21-1];

   while (VAR_11 != *VAR_22) {
      VAR_22--;
      VAR_21--;
   }

   VAR_18->nSpaceLeft = VAR_16-VAR_21-1;

   if (VAR_18->hFindFile != VAR_15) {
      VAR_18->dwAttrFilter = VAR_20;
      if ((~VAR_20 & VAR_18->fd.dwFileAttributes) == 0L ||
         FUNC_4(VAR_18)) {
         return(VAR_17);
      } else {
         FUNC_3(VAR_18);
         return(VAR_12);
      }
   } else {
      return(VAR_12);
   }
}
