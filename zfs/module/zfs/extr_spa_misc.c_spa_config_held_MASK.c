
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* spa_config_lock; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_5__ {scalar_t__ scl_writer; int scl_count; } ;
typedef TYPE_2__ spa_config_lock_t ;
typedef scalar_t__ krw_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;

int
FUNC_1(spa_t *VAR_4, int VAR_5, krw_t VAR_6)
{
 int VAR_7 = 0;

 for (int VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  spa_config_lock_t *VAR_9 = &VAR_4->spa_config_lock[VAR_8];
  if (!(VAR_5 & (1 << VAR_8)))
   continue;
  if ((VAR_6 == VAR_0 &&
      !FUNC_0(&VAR_9->scl_count)) ||
      (VAR_6 == VAR_1 && VAR_9->scl_writer == VAR_3))
   VAR_7 |= 1 << VAR_8;
 }

 return (VAR_7);
}
