
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int may_need_mark_end; int job; } ;
typedef TYPE_1__ ScheduledBgwJob ;
typedef int JobResult ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(ScheduledBgwJob *VAR_0, JobResult VAR_1)
{
 FUNC_0(VAR_0->may_need_mark_end);
 FUNC_1(&VAR_0->job, VAR_1);
 VAR_0->may_need_mark_end = 0;
}
