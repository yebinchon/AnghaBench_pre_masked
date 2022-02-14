
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int id; } ;
struct TYPE_11__ {TYPE_1__ fd; } ;
struct TYPE_9__ {int last_start; } ;
struct TYPE_10__ {TYPE_2__ fd; } ;
typedef TYPE_3__ BgwJobStat ;
typedef TYPE_4__ BgwJob ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_3(BgwJob *VAR_1, const char *VAR_2)
{
 BgwJobStat *VAR_3 = FUNC_1(VAR_1->fd.id);

 FUNC_2(VAR_1, VAR_3->fd.last_start);
 FUNC_0(VAR_0, "the %s job is scheduled to run again immediately", VAR_2);
}
