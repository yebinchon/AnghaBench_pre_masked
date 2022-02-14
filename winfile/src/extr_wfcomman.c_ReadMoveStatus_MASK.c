
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_13__ {int member_3; int member_4; int member_2; int member_1; int member_0; } ;
struct TYPE_12__ {TYPE_1__* lpVtbl; } ;
struct TYPE_11__ {int * hGlobal; } ;
struct TYPE_10__ {scalar_t__ (* GetData ) (TYPE_3__*,TYPE_4__*,TYPE_2__*) ;} ;
typedef TYPE_2__ STGMEDIUM ;
typedef int* LPDWORD ;
typedef TYPE_3__ IDataObject ;
typedef TYPE_4__ FORMATETC ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_4__*,TYPE_2__*) ;

DWORD
FUNC_6()
{
 IDataObject *VAR_6;
 FORMATETC VAR_7 = { 0, 0, VAR_3, -1, VAR_5 };
 UINT VAR_8 = FUNC_3(VAR_0);
 FORMATETC VAR_9 = { VAR_8, 0, VAR_3, -1, VAR_5 };
 STGMEDIUM VAR_10;
 DWORD VAR_11 = VAR_1;

 FUNC_2(&VAR_6);

 if (VAR_6 != ((void*)0) && VAR_6->lpVtbl->GetData(VAR_6, &VAR_9, &VAR_10) == VAR_4 && VAR_10.hGlobal != ((void*)0))
 {
  LPDWORD VAR_12 = FUNC_0(VAR_10.hGlobal);
  if (*VAR_12 & VAR_1) VAR_11 = VAR_1;
  if (*VAR_12 & VAR_2) VAR_11 = VAR_2;
  FUNC_1(VAR_10.hGlobal);
  FUNC_4(&VAR_10);
 }

 return VAR_11;
}
