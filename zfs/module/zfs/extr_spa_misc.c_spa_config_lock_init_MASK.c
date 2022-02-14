
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* spa_config_lock; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_5__ {scalar_t__ scl_write_wanted; int * scl_writer; int scl_count; int scl_cv; int scl_lock; } ;
typedef TYPE_2__ spa_config_lock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(spa_t *VAR_3)
{
 for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  spa_config_lock_t *VAR_5 = &VAR_3->spa_config_lock[VAR_4];
  FUNC_1(&VAR_5->scl_lock, ((void*)0), VAR_1, ((void*)0));
  FUNC_0(&VAR_5->scl_cv, ((void*)0), VAR_0, ((void*)0));
  FUNC_2(&VAR_5->scl_count);
  VAR_5->scl_writer = ((void*)0);
  VAR_5->scl_write_wanted = 0;
 }
}
