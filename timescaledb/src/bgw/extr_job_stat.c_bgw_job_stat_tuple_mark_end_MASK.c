
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int scanrel; int tuple; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_8__ {int last_run_success; scalar_t__ consecutive_failures; int last_finish; int next_start; int total_failures; int last_successful_finish; int total_success; scalar_t__ consecutive_crashes; int total_crashes; int total_duration; int last_start; } ;
struct TYPE_7__ {scalar_t__ result; int job; } ;
typedef int ScanTupleResult ;
typedef TYPE_2__ JobResultCtx ;
typedef int Interval ;
typedef int HeapTuple ;
typedef TYPE_3__ FormData_bgw_job_stat ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;

__attribute__((used)) static ScanTupleResult
FUNC_12(TupleInfo *VAR_4, void *const VAR_5)
{
 JobResultCtx *VAR_6 = VAR_5;
 HeapTuple VAR_7 = FUNC_8(VAR_4->tuple);
 FormData_bgw_job_stat *VAR_8 = (FormData_bgw_job_stat *) FUNC_2(VAR_7);
 Interval *VAR_9;

 VAR_8->last_finish = FUNC_11();

 VAR_9 = FUNC_0(FUNC_1(VAR_3,
              FUNC_4(VAR_8->last_finish),
              FUNC_4(VAR_8->last_start)));
 VAR_8->total_duration =
  *FUNC_0(FUNC_1(VAR_2,
              FUNC_3(&VAR_8->total_duration),
              FUNC_3(VAR_9)));


 VAR_8->last_run_success = VAR_6->result == VAR_0 ? 1 : 0;
 VAR_8->total_crashes--;
 VAR_8->consecutive_crashes = 0;

 if (VAR_6->result == VAR_0)
 {
  VAR_8->total_success++;
  VAR_8->consecutive_failures = 0;
  VAR_8->last_successful_finish = VAR_8->last_finish;

  if (!FUNC_5(VAR_8))
   VAR_8->next_start = FUNC_7(VAR_8->last_finish, VAR_6->job);
 }
 else
 {
  VAR_8->total_failures++;
  VAR_8->consecutive_failures++;





  if (!FUNC_5(VAR_8))
   VAR_8->next_start = FUNC_6(VAR_8->last_finish,
                VAR_8->consecutive_failures,
                VAR_6->job);
 }

 FUNC_10(VAR_4->scanrel, VAR_7);
 FUNC_9(VAR_7);

 return VAR_1;
}
