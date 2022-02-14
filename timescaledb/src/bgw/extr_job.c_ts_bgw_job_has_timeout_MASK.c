
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int time; } ;
struct TYPE_6__ {TYPE_2__ max_runtime; } ;
struct TYPE_8__ {TYPE_1__ fd; } ;
typedef TYPE_2__ Interval ;
typedef TYPE_3__ BgwJob ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;

bool
FUNC_3(BgwJob *VAR_1)
{
 Interval VAR_2 = {
  .time = 0,
 };

 return FUNC_0(FUNC_1(VAR_0,
           FUNC_2(&VAR_1->fd.max_runtime),
           FUNC_2(&VAR_2)));
}
