
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ UINT ;
struct TYPE_2__ {int hModule; } ;
typedef int TCHAR ;
typedef int * LPTSTR ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (char) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;

VOID
FUNC_5(int VAR_3, LPTSTR VAR_4)
{
  TCHAR VAR_5[256];
  LPTSTR VAR_6;

  *VAR_4 = FUNC_4('\0');

  if ((UINT)VAR_3<(UINT)VAR_2
   && FUNC_1(VAR_1[VAR_3].hModule, VAR_5,
   FUNC_0(VAR_5)) && (VAR_6=FUNC_3 (VAR_5, ((void*)0), FUNC_4('\\'))))
    FUNC_2(VAR_4, VAR_6+1, VAR_0);
}
