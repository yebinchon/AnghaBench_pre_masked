
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total_workers; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

extern void
FUNC_5(int VAR_2)
{




 FUNC_0(&VAR_1->mutex);
 if (VAR_1->total_workers - VAR_2 >= 1)
 {
  VAR_1->total_workers -= VAR_2;
  FUNC_1(&VAR_1->mutex);
 }
 else
 {
  FUNC_1(&VAR_1->mutex);
  FUNC_2(VAR_0,
    (FUNC_4("TimescaleDB background worker cannot decrement workers below 1"),
     FUNC_3("The background worker scheduler is in an invalid state and may not be "
       "keeping track of workers allocated to TimescaleDB properly, please "
       "submit a bug report.")));
 }
}
