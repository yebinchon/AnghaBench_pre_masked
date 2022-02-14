
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scanrel; int tuple; } ;
typedef TYPE_1__ TupleInfo ;
typedef int TimestampTz ;
struct TYPE_5__ {int next_start; } ;
typedef int ScanTupleResult ;
typedef int HeapTuple ;
typedef TYPE_2__ FormData_bgw_job_stat ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_4(TupleInfo *VAR_1, void *const VAR_2)
{
 TimestampTz *VAR_3 = VAR_2;
 HeapTuple VAR_4 = FUNC_1(VAR_1->tuple);
 FormData_bgw_job_stat *VAR_5 = (FormData_bgw_job_stat *) FUNC_0(VAR_4);

 VAR_5->next_start = *VAR_3;

 FUNC_3(VAR_1->scanrel, VAR_4);
 FUNC_2(VAR_4);

 return VAR_0;
}
