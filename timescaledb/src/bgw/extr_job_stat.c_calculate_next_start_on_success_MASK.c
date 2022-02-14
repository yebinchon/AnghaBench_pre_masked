
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TimestampTz ;
struct TYPE_4__ {int schedule_interval; } ;
struct TYPE_5__ {TYPE_1__ fd; } ;
typedef TYPE_2__ BgwJob ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static TimestampTz
FUNC_4(TimestampTz VAR_1, BgwJob *VAR_2)
{

 TimestampTz VAR_3 =
  FUNC_0(FUNC_1(VAR_0,
            FUNC_3(VAR_1),
            FUNC_2(&VAR_2->fd.schedule_interval)));

 return VAR_3;
}
