
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* lpVtbl; } ;
struct TYPE_10__ {TYPE_1__ ido; } ;
typedef TYPE_3__ WF_IDataObject ;
struct TYPE_11__ {int member_3; unsigned short cfFormat; int member_4; int member_2; int * member_1; int member_0; } ;
struct TYPE_9__ {scalar_t__ (* QueryGetData ) (int ,TYPE_4__*) ;} ;
typedef int LPDATAOBJECT ;
typedef TYPE_4__ FORMATETC ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_4__*) ;

__attribute__((used)) static BOOL FUNC_3(WF_IDataObject *VAR_5)
{
 FORMATETC VAR_6 = { VAR_1, 0, VAR_2, -1, &VAR_4 };
    unsigned short VAR_7 = FUNC_0(VAR_0);
    FORMATETC VAR_8 = {0, ((void*)0), VAR_2, -1, &VAR_4};
 VAR_8.cfFormat = VAR_7;


 return VAR_5->ido.lpVtbl->QueryGetData((LPDATAOBJECT)VAR_5, &VAR_6) == VAR_3 ||
   VAR_5->ido.lpVtbl->QueryGetData((LPDATAOBJECT)VAR_5, &VAR_8) == VAR_3;
}
