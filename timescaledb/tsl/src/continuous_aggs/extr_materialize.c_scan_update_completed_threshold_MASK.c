
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_4__ {int scanrel; int tuple; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_5__ {scalar_t__ watermark; } ;
typedef int ScanTupleResult ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_continuous_aggs_completed_threshold ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_4(TupleInfo *VAR_2, void *VAR_3)
{
 int64 VAR_4 = *(int64 *) VAR_3;
 HeapTuple VAR_5 = FUNC_2(VAR_2->tuple);
 Form_continuous_aggs_completed_threshold VAR_6 =
  (Form_continuous_aggs_completed_threshold) FUNC_0(VAR_5);
 if (VAR_6->watermark > VAR_4)
  FUNC_1(VAR_0, "Internal Error: new completion threshold must not be less than the old one");
 VAR_6->watermark = VAR_4;
 FUNC_3(VAR_2->scanrel, VAR_5);
 return VAR_1;
}
