
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
struct TYPE_8__ {TYPE_1__ fd; } ;
struct TYPE_9__ {TYPE_2__ job; } ;
typedef TYPE_3__ ScheduledBgwJob ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(ScheduledBgwJob *VAR_4)
{
 FUNC_1();
 if (!FUNC_5(VAR_4->job.fd.id, VAR_0))
  FUNC_2(VAR_3,
    "scheduler detected that job %d was deleted while failing to start",
    VAR_4->job.fd.id);
 else
  FUNC_3(VAR_4, VAR_1);
 FUNC_4(VAR_4, VAR_2);
 FUNC_0();
}
