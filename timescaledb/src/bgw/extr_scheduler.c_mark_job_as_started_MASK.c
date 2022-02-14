
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
struct TYPE_7__ {int may_need_mark_end; TYPE_2__ job; } ;
typedef TYPE_3__ ScheduledBgwJob ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(ScheduledBgwJob *VAR_0)
{
 FUNC_0(!VAR_0->may_need_mark_end);
 FUNC_1(VAR_0->job.fd.id);
 VAR_0->may_need_mark_end = 1;
}
