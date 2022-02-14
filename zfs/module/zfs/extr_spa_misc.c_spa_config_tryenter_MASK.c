
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* spa_config_lock; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_6__ {scalar_t__ scl_writer; int scl_lock; int scl_count; scalar_t__ scl_write_wanted; } ;
typedef TYPE_2__ spa_config_lock_t ;
typedef scalar_t__ krw_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int,void*) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (int *) ;

int
FUNC_6(spa_t *VAR_3, int VAR_4, void *VAR_5, krw_t VAR_6)
{
 for (int VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  spa_config_lock_t *VAR_8 = &VAR_3->spa_config_lock[VAR_7];
  if (!(VAR_4 & (1 << VAR_7)))
   continue;
  FUNC_1(&VAR_8->scl_lock);
  if (VAR_6 == VAR_0) {
   if (VAR_8->scl_writer || VAR_8->scl_write_wanted) {
    FUNC_2(&VAR_8->scl_lock);
    FUNC_3(VAR_3, VAR_4 & ((1 << VAR_7) - 1),
        VAR_5);
    return (0);
   }
  } else {
   FUNC_0(VAR_8->scl_writer != VAR_2);
   if (!FUNC_5(&VAR_8->scl_count)) {
    FUNC_2(&VAR_8->scl_lock);
    FUNC_3(VAR_3, VAR_4 & ((1 << VAR_7) - 1),
        VAR_5);
    return (0);
   }
   VAR_8->scl_writer = VAR_2;
  }
  (void) FUNC_4(&VAR_8->scl_count, VAR_5);
  FUNC_2(&VAR_8->scl_lock);
 }
 return (1);
}
