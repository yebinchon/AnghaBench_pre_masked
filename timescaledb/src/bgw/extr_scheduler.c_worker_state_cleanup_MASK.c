
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
struct TYPE_8__ {TYPE_1__ fd; } ;
struct TYPE_9__ {int reserved_worker; int may_need_mark_end; TYPE_2__ job; int * handle; } ;
typedef TYPE_3__ ScheduledBgwJob ;
typedef int BgwJobStat ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(ScheduledBgwJob *VAR_3)
{




 if (VAR_3->handle != ((void*)0))
 {




  FUNC_4(VAR_3->handle);
  VAR_3->handle = ((void*)0);
 }





 if (VAR_3->reserved_worker)
 {
  FUNC_8();
  VAR_3->reserved_worker = 0;
 }

 if (VAR_3->may_need_mark_end)
 {
  BgwJobStat *VAR_4;

  if (!FUNC_5(VAR_3->job.fd.id, VAR_0))
  {
   FUNC_2(VAR_2,
     "scheduler detected that job %d was deleted after job quit",
     VAR_3->job.fd.id);
   VAR_3->may_need_mark_end = 0;
   return;
  }

  VAR_4 = FUNC_7(VAR_3->job.fd.id);

  FUNC_0(VAR_4 != ((void*)0));

  if (!FUNC_6(VAR_4))
  {





   FUNC_3(VAR_3, VAR_1);

   VAR_4 = FUNC_7(VAR_3->job.fd.id);
  }
  else
  {
   VAR_3->may_need_mark_end = 0;
  }
 }
}
