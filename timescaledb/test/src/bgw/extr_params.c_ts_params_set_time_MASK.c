
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_5__ {int timer_latch; int current_time; } ;
struct TYPE_6__ {TYPE_1__ params; int mutex; } ;
typedef TYPE_2__ TestParamsWrapper ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 () ;

void
FUNC_6(int64 VAR_0, bool VAR_1)
{
 TestParamsWrapper *VAR_2 = FUNC_5();

 FUNC_0(VAR_2 != ((void*)0));

 FUNC_2(&VAR_2->mutex);
 VAR_2->params.current_time = VAR_0;
 FUNC_3(&VAR_2->mutex);

 if (VAR_1)
  FUNC_1(&VAR_2->params.timer_latch);

 FUNC_4(VAR_2);
}
