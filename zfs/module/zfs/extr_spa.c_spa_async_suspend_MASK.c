
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zthr_t ;
struct TYPE_4__ {int * spa_livelist_condense_zthr; int * spa_livelist_delete_zthr; int * spa_checkpoint_discard_zthr; int * spa_condense_zthr; int spa_async_lock; int spa_async_cv; int * spa_async_thread; int spa_async_suspended; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(spa_t *VAR_0)
{
 FUNC_1(&VAR_0->spa_async_lock);
 VAR_0->spa_async_suspended++;
 while (VAR_0->spa_async_thread != ((void*)0))
  FUNC_0(&VAR_0->spa_async_cv, &VAR_0->spa_async_lock);
 FUNC_2(&VAR_0->spa_async_lock);

 FUNC_3(VAR_0);

 zthr_t *VAR_1 = VAR_0->spa_condense_zthr;
 if (VAR_1 != ((void*)0))
  FUNC_4(VAR_1);

 zthr_t *VAR_2 = VAR_0->spa_checkpoint_discard_zthr;
 if (VAR_2 != ((void*)0))
  FUNC_4(VAR_2);

 zthr_t *VAR_3 = VAR_0->spa_livelist_delete_zthr;
 if (VAR_3 != ((void*)0))
  FUNC_4(VAR_3);

 zthr_t *VAR_4 = VAR_0->spa_livelist_condense_zthr;
 if (VAR_4 != ((void*)0))
  FUNC_4(VAR_4);
}
