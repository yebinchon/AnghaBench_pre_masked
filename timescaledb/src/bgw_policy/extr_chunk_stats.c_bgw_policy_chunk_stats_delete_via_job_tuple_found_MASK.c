
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tuple; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_5__ {int job_id; } ;
typedef int ScanTupleResult ;
typedef TYPE_2__ FormData_bgw_policy_chunk_stats ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_2(TupleInfo *VAR_1, void *const VAR_2)
{
 FormData_bgw_policy_chunk_stats *VAR_3 = (FormData_bgw_policy_chunk_stats *) FUNC_0(VAR_1->tuple);


 FUNC_1(VAR_3->job_id);
 return VAR_0;
}
