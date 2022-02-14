
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int timer_latch; } ;
struct TYPE_6__ {int mutex; TYPE_1__ params; } ;
typedef TYPE_2__ TestParamsWrapper ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 () ;

void
FUNC_6()
{
 TestParamsWrapper *VAR_0 = FUNC_5();

 FUNC_0(VAR_0 != ((void*)0));

 FUNC_2(&VAR_0->mutex);

 FUNC_1(&VAR_0->params.timer_latch);

 FUNC_3(&VAR_0->mutex);

 FUNC_4(VAR_0);
}
