
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; scalar_t__ state_transition_failures; } ;
typedef scalar_t__ SchedulerState ;
typedef TYPE_1__ DbHashEntry ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(DbHashEntry *VAR_0, SchedulerState VAR_1)
{
 FUNC_0(VAR_0->state != VAR_1);
 VAR_0->state_transition_failures = 0;
 VAR_0->state = VAR_1;
}
