
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct TYPE_8__ {TYPE_1__ fd; } ;
struct TYPE_7__ {int result; TYPE_3__* job; } ;
typedef TYPE_2__ JobResultCtx ;
typedef int JobResult ;
typedef TYPE_3__ BgwJob ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;

void
FUNC_2(BgwJob *VAR_3, JobResult VAR_4)
{
 JobResultCtx VAR_5 = {
  .job = VAR_3,
  .result = VAR_4,
 };

 if (!FUNC_0(VAR_3->fd.id,
          VAR_2,
          ((void*)0),
          &VAR_5,
          VAR_1))
  FUNC_1(VAR_0, "unable to find job statistics for job %d", VAR_3->fd.id);
}
