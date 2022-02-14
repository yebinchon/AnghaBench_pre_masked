
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spa_props_lock; int * spa_config; } ;
typedef TYPE_1__ spa_t ;
typedef int nvlist_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(spa_t *VAR_0, nvlist_t *VAR_1)
{
 FUNC_0(&VAR_0->spa_props_lock);
 if (VAR_0->spa_config != ((void*)0) && VAR_0->spa_config != VAR_1)
  FUNC_2(VAR_0->spa_config);
 VAR_0->spa_config = VAR_1;
 FUNC_1(&VAR_0->spa_props_lock);
}
