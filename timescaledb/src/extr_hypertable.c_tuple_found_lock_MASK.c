
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lockresult; } ;
typedef TYPE_1__ TupleInfo ;
typedef int ScanTupleResult ;
typedef int HTSU_Result ;


 int VAR_0 ;

__attribute__((used)) static ScanTupleResult
FUNC_0(TupleInfo *VAR_1, void *VAR_2)
{
 HTSU_Result *VAR_3 = VAR_2;

 *VAR_3 = VAR_1->lockresult;
 return VAR_0;
}
