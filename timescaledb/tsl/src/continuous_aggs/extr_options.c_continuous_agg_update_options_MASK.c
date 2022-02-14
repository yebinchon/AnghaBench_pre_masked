
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_18__ {int is_default; int parsed; } ;
typedef TYPE_3__ WithClauseResult ;
struct TYPE_16__ {void* retry_period; void* schedule_interval; } ;
struct TYPE_21__ {TYPE_1__ fd; } ;
struct TYPE_17__ {int job_id; int bucket_width; int raw_hypertable_id; } ;
struct TYPE_20__ {TYPE_2__ data; } ;
struct TYPE_19__ {int space; } ;
typedef TYPE_4__ Hypertable ;
typedef int Dimension ;
typedef TYPE_5__ ContinuousAgg ;
typedef int Cache ;
typedef TYPE_6__ BgwJob ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 void** FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,TYPE_3__*,int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int ,int ) ;
 TYPE_6__* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,TYPE_6__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_4__* FUNC_9 (int *,int ) ;
 int * FUNC_10 () ;
 int FUNC_11 (TYPE_5__*,int ) ;
 int FUNC_12 (TYPE_5__*,int ) ;

void
FUNC_13(ContinuousAgg *VAR_7, WithClauseResult *VAR_8)
{
 if (!VAR_8[VAR_0].is_default)
  FUNC_3(VAR_6, "cannot disable continuous aggregates");

 if (!VAR_8[VAR_4].is_default)
 {
  Cache *VAR_9 = FUNC_10();
  Hypertable *VAR_10 = FUNC_9(VAR_9, VAR_7->data.raw_hypertable_id);
  Dimension *VAR_11 = FUNC_4(VAR_10->space, 0);
  int64 VAR_12 =
   FUNC_2(FUNC_8(VAR_11),
            VAR_8);
  FUNC_12(VAR_7, VAR_12);
  FUNC_7(VAR_9);
 }

 if (!VAR_8[VAR_2].is_default)
 {
  Cache *VAR_13 = FUNC_10();
  Hypertable *VAR_14 = FUNC_9(VAR_13, VAR_7->data.raw_hypertable_id);
  Dimension *VAR_15 = FUNC_4(VAR_14->space, 0);
  int64 VAR_16 = FUNC_1(FUNC_8(
                  VAR_15),
                 VAR_8,
                 VAR_7->data.bucket_width);
  FUNC_11(VAR_7, VAR_16);
  FUNC_7(VAR_13);
 }

 if (!VAR_8[VAR_3].is_default)
 {
  BgwJob *VAR_17 = FUNC_5(VAR_7->data.job_id, VAR_5, 1);
  VAR_17->fd.schedule_interval =
   *FUNC_0(VAR_8[VAR_3].parsed);
  VAR_17->fd.retry_period =
   *FUNC_0(VAR_8[VAR_3].parsed);
  FUNC_6(VAR_7->data.job_id, VAR_17);
 }
 if (!VAR_8[VAR_1].is_default)
 {
  FUNC_3(VAR_6, "cannot alter create_group_indexes option for continuous aggregates");
 }
}
