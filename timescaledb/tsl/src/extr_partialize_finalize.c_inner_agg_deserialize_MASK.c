
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
typedef int bytea ;
struct TYPE_7__ {int* argnull; int isnull; void** arg; } ;
struct TYPE_6__ {scalar_t__ fn_strict; } ;
struct TYPE_8__ {TYPE_2__ internal_deserialfn_fcinfo; int typIOParam; TYPE_2__ deserialfn_fcinfo; TYPE_1__ deserialfn; int deserialfnoid; } ;
typedef int * StringInfo ;
typedef TYPE_2__ FunctionCallInfoData ;
typedef TYPE_3__ FACombineFnMeta ;
typedef int Datum ;


 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int * FUNC_10 () ;

__attribute__((used)) static Datum
FUNC_11(FACombineFnMeta *VAR_0, bytea *VAR_1,
       bool VAR_2, bool *VAR_3)
{
 Datum VAR_4 = (Datum) 0;
 FunctionCallInfoData *VAR_5 = &VAR_0->deserialfn_fcinfo;
 *VAR_3 = 1;
 if (FUNC_3(VAR_0->deserialfnoid))
 {
  if (VAR_2 && VAR_0->deserialfn.fn_strict)
  {
   FUNC_5();

  }
  VAR_5->arg[0] = FUNC_6(VAR_1);
  VAR_5->argnull[0] = VAR_2;
  VAR_0->deserialfn_fcinfo.isnull = 0;
  VAR_4 = FUNC_0(VAR_5);
  *VAR_3 = VAR_5->isnull;
 }
 else if (!VAR_2)
 {
  int32 VAR_6 = -1;
  StringInfo VAR_7 = FUNC_10();

  FUNC_9(VAR_7,
          FUNC_7(VAR_1),
          FUNC_8(VAR_1));
  VAR_0->internal_deserialfn_fcinfo.arg[0] = FUNC_6(VAR_7);
  VAR_0->internal_deserialfn_fcinfo.arg[1] =
   FUNC_2(VAR_0->typIOParam);
  VAR_0->internal_deserialfn_fcinfo.arg[2] = FUNC_1(VAR_6);
  VAR_0->internal_deserialfn_fcinfo.argnull[0] = 0;
  VAR_0->internal_deserialfn_fcinfo.argnull[1] = 0;
  VAR_0->internal_deserialfn_fcinfo.argnull[2] = 0;
  VAR_0->internal_deserialfn_fcinfo.isnull = 0;

  VAR_4 = FUNC_0(&VAR_0->internal_deserialfn_fcinfo);
  *VAR_3 = VAR_0->internal_deserialfn_fcinfo.isnull;
 }
 FUNC_4(VAR_4);
}
