
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* argnull; int isnull; int * arg; } ;
struct TYPE_5__ {int is_null; int val; TYPE_2__ eq_fcinfo; } ;
typedef TYPE_1__ SegmentInfo ;
typedef TYPE_2__ FunctionCallInfoData ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_2(SegmentInfo *VAR_0, Datum VAR_1, bool VAR_2)
{
 Datum VAR_3;
 FunctionCallInfoData *VAR_4;

 if (VAR_0->is_null != VAR_2)
  return 0;


 if (VAR_0->is_null)
  return 1;


 VAR_4 = &VAR_0->eq_fcinfo;
 VAR_4->arg[0] = VAR_0->val;
 VAR_4->argnull[0] = 0;

 VAR_4->arg[1] = VAR_1;
 VAR_4->isnull = 0;

 VAR_3 = FUNC_1(VAR_4);

 if (VAR_4->isnull)
  return 0;

 return FUNC_0(VAR_3);
}
