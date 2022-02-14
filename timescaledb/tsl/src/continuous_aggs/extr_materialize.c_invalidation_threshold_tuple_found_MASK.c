
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_4__ {int tuple; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_5__ {int watermark; } ;
typedef int ScanTupleResult ;
typedef TYPE_2__* Form_continuous_aggs_invalidation_threshold ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static ScanTupleResult
FUNC_1(TupleInfo *VAR_1, void *VAR_2)
{
 int64 *VAR_3 = VAR_2;
 *VAR_3 = ((Form_continuous_aggs_invalidation_threshold) FUNC_0(VAR_1->tuple))->watermark;
 return VAR_0;
}
