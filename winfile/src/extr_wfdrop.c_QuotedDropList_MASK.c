
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_13__ {int member_3; int member_4; int member_2; int member_1; int member_0; } ;
struct TYPE_12__ {TYPE_1__* lpVtbl; } ;
struct TYPE_11__ {int hGlobal; } ;
struct TYPE_10__ {scalar_t__ (* GetData ) (TYPE_3__*,TYPE_4__*,TYPE_2__*) ;} ;
typedef TYPE_2__ STGMEDIUM ;
typedef int * LPWSTR ;
typedef TYPE_3__ IDataObject ;
typedef int HDROP ;
typedef TYPE_4__ FORMATETC ;
typedef int DWORD ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int *,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_4__*,TYPE_2__*) ;

LPWSTR FUNC_4(IDataObject *VAR_8)
{
 HDROP VAR_9;
 DWORD VAR_10, VAR_11, VAR_12;
 LPWSTR VAR_13 = ((void*)0), VAR_14;
 FORMATETC VAR_15 = { VAR_0, 0, VAR_4, -1, VAR_7 };
 STGMEDIUM VAR_16;

 if (VAR_8->lpVtbl->GetData(VAR_8, &VAR_15, &VAR_16) == VAR_6)
 {

  VAR_9 = VAR_16.hGlobal;

  VAR_10 = FUNC_0(VAR_9, 0xffffffff, ((void*)0), 0);
  VAR_12 = 0;
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
   VAR_12 += FUNC_0(VAR_9, VAR_11, ((void*)0), 0) + 1 + 2;

  VAR_14 = VAR_13 = (LPWSTR)FUNC_1(VAR_5, VAR_12 * sizeof(WCHAR));
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  {
   DWORD VAR_17;

   *VAR_14++ = VAR_1;

   VAR_17 = FUNC_0(VAR_9, VAR_11, VAR_14, VAR_12);
   VAR_14 += VAR_17;
   *VAR_14++ = VAR_1;

   if (VAR_11+1 < VAR_10)
    *VAR_14++ = VAR_3;
   else
    *VAR_14 = VAR_2;

   VAR_12 -= VAR_17 + 1 + 2;
  }


  FUNC_2(&VAR_16);
 }

 return VAR_13;
}
