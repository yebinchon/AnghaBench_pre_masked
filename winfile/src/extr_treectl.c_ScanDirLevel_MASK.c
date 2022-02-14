
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {int dwFileAttributes; int cFileName; } ;
struct TYPE_10__ {TYPE_1__ fd; } ;
struct TYPE_9__ {int wFlags; } ;
typedef TYPE_2__* PDNODE ;
typedef int LPTSTR ;
typedef TYPE_3__ LFNDTA ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

VOID
FUNC_7(PDNODE VAR_5, LPTSTR VAR_6, DWORD VAR_7)
{
  BOOL VAR_8;
  LFNDTA VAR_9;


  FUNC_6(VAR_3, VAR_6);
  FUNC_0(VAR_3);
  FUNC_5(VAR_3, VAR_4);



  VAR_8 = FUNC_3(&VAR_9, VAR_3, VAR_0 | VAR_7);

  while (VAR_8)
    {

      if (!FUNC_1(VAR_9.fd.cFileName) &&
         (VAR_9.fd.dwFileAttributes & VAR_0)) {

         VAR_5->wFlags |= VAR_2;
         VAR_8 = VAR_1;
      } else

         VAR_8 = FUNC_4(&VAR_9);
    }

  FUNC_2(&VAR_9);
}
