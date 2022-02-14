
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int timer_latch; } ;
struct TYPE_6__ {TYPE_1__ params; } ;
typedef TYPE_2__ TestParamsWrapper ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 () ;

void
FUNC_5()
{
 TestParamsWrapper *VAR_3 = FUNC_4();

 FUNC_0(VAR_3 != ((void*)0));

 FUNC_1(&VAR_3->params.timer_latch);
 FUNC_2(&VAR_3->params.timer_latch,
     VAR_0 | VAR_2 | VAR_1,
     10000);

 FUNC_3(VAR_3);
}
