
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state_transition_failures; } ;
typedef TYPE_1__ DbHashEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(DbHashEntry *VAR_3)
{
 if (VAR_3->state_transition_failures == 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("TimescaleDB background worker limit of %d exceeded",
      VAR_2),
     FUNC_2("Consider increasing timescaledb.max_background_workers.")));
 VAR_3->state_transition_failures++;
}
