
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tuple; } ;
typedef TYPE_1__ TupleInfo ;
typedef int ScanTupleResult ;
typedef scalar_t__ Form_continuous_agg ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static ScanTupleResult
FUNC_1(TupleInfo *VAR_1, void *VAR_2)
{
 Form_continuous_agg *VAR_3 = VAR_2;
 *VAR_3 = (Form_continuous_agg) FUNC_0(VAR_1->tuple);
 return VAR_0;
}
