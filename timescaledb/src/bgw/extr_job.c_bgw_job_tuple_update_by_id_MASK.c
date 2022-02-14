
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int scanrel; int tuple; } ;
typedef TYPE_3__ TupleInfo ;
typedef int TimestampTz ;
struct TYPE_12__ {int retry_period; int max_retries; int max_runtime; int schedule_interval; } ;
struct TYPE_16__ {TYPE_2__ fd; } ;
struct TYPE_11__ {int last_finish; } ;
struct TYPE_15__ {TYPE_1__ fd; } ;
struct TYPE_14__ {int retry_period; int max_retries; int max_runtime; int schedule_interval; int id; } ;
typedef int ScanTupleResult ;
typedef int HeapTuple ;
typedef TYPE_4__ FormData_bgw_job ;
typedef TYPE_5__ BgwJobStat ;
typedef TYPE_6__ BgwJob ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (TYPE_6__*) ;
 TYPE_5__* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_6__*,int ,int) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_12(TupleInfo *VAR_3, void *const VAR_4)
{
 BgwJob *VAR_5 = (BgwJob *) VAR_4;
 HeapTuple VAR_6 = FUNC_6(VAR_3->tuple);
 FormData_bgw_job *VAR_7 = (FormData_bgw_job *) FUNC_3(VAR_6);
 TimestampTz VAR_8;

 FUNC_8(VAR_5);

 if (!FUNC_0(FUNC_2(VAR_1,
            FUNC_4(&VAR_7->schedule_interval),
            FUNC_4(&VAR_5->fd.schedule_interval))))
 {
  BgwJobStat *VAR_9 = FUNC_9(VAR_7->id);

  if (VAR_9 != ((void*)0))
  {
   VAR_8 = FUNC_1(
    FUNC_2(VAR_2,
         FUNC_5(VAR_9->fd.last_finish),
         FUNC_4(&VAR_5->fd.schedule_interval)));



   FUNC_10(VAR_5, VAR_8, 1);
  }
  VAR_7->schedule_interval = VAR_5->fd.schedule_interval;
 }
 VAR_7->max_runtime = VAR_5->fd.max_runtime;
 VAR_7->max_retries = VAR_5->fd.max_retries;
 VAR_7->retry_period = VAR_5->fd.retry_period;

 FUNC_11(VAR_3->scanrel, VAR_6);
 FUNC_7(VAR_6);
 return VAR_0;
}
