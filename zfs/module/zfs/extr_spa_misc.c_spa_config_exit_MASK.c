
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* spa_config_lock; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_5__ {int scl_lock; int scl_cv; int * scl_writer; int scl_count; } ;
typedef TYPE_2__ spa_config_lock_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,void const*) ;

void
FUNC_6(spa_t *VAR_2, int VAR_3, const void *VAR_4)
{
 for (int VAR_5 = VAR_0 - 1; VAR_5 >= 0; VAR_5--) {
  spa_config_lock_t *VAR_6 = &VAR_2->spa_config_lock[VAR_5];
  if (!(VAR_3 & (1 << VAR_5)))
   continue;
  FUNC_2(&VAR_6->scl_lock);
  FUNC_0(!FUNC_4(&VAR_6->scl_count));
  if (FUNC_5(&VAR_6->scl_count, VAR_4) == 0) {
   FUNC_0(VAR_6->scl_writer == ((void*)0) ||
       VAR_6->scl_writer == VAR_1);
   VAR_6->scl_writer = ((void*)0);
   FUNC_1(&VAR_6->scl_cv);
  }
  FUNC_3(&VAR_6->scl_lock);
 }
}
