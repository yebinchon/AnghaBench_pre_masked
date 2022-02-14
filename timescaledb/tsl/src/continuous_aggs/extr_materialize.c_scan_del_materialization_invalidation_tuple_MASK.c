
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int tuple; int scanrel; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_11__ {scalar_t__ lowest_modified_value; scalar_t__ greatest_modified_value; } ;
struct TYPE_10__ {scalar_t__ lowest_modified_value; scalar_t__ greatest_modified_value; } ;
struct TYPE_9__ {scalar_t__ materialization_invalidation_threshold; int * invalidations; int mctx; } ;
typedef int ScanTupleResult ;
typedef int MemoryContext ;
typedef TYPE_2__ InvalidationScanState ;
typedef TYPE_3__ Invalidation ;
typedef TYPE_4__* Form_continuous_aggs_materialization_invalidation_log ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_6(TupleInfo *VAR_1, void *VAR_2)
{
 InvalidationScanState *VAR_3 = (InvalidationScanState *) VAR_2;

 MemoryContext VAR_4 = FUNC_2(VAR_3->mctx);
 Form_continuous_aggs_materialization_invalidation_log VAR_5 =
  ((Form_continuous_aggs_materialization_invalidation_log) FUNC_1(VAR_1->tuple));
 Invalidation *VAR_6 = FUNC_4(sizeof(*VAR_6));

 VAR_6->lowest_modified_value = VAR_5->lowest_modified_value;
 VAR_6->greatest_modified_value = VAR_5->greatest_modified_value;

 FUNC_0(VAR_6->lowest_modified_value <= VAR_6->greatest_modified_value);




 if (VAR_6->lowest_modified_value < VAR_3->materialization_invalidation_threshold)
 {
  *VAR_3->invalidations = FUNC_3(*VAR_3->invalidations, VAR_6);
  FUNC_5(VAR_1->scanrel, VAR_1->tuple);
 }

 FUNC_2(VAR_4);

 return VAR_0;
}
