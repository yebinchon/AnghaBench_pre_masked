
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int (* job_main_func ) () ;
typedef scalar_t__ int64 ;
typedef int TimestampTz ;
struct TYPE_8__ {int id; } ;
struct TYPE_11__ {TYPE_1__ fd; } ;
struct TYPE_9__ {scalar_t__ total_runs; int last_start; } ;
struct TYPE_10__ {TYPE_2__ fd; } ;
typedef int Interval ;
typedef TYPE_3__ BgwJobStat ;
typedef TYPE_4__ BgwJob ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;

bool
FUNC_8(BgwJob *VAR_1, job_main_func VAR_2, int64 VAR_3,
          Interval *VAR_4)
{
 BgwJobStat *VAR_5;
 bool VAR_6 = VAR_2();


 FUNC_4();

 VAR_5 = FUNC_6(VAR_1->fd.id);





 if (VAR_5->fd.total_runs < VAR_3)
 {
  TimestampTz VAR_7 =
   FUNC_1(FUNC_2(VAR_0,
             FUNC_5(VAR_5->fd.last_start),
             FUNC_3(VAR_4)));

  FUNC_7(VAR_1, VAR_7);
 }
 FUNC_0();

 return VAR_6;
}
