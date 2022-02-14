
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ spa_state; } ;
typedef TYPE_1__ spa_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

void
FUNC_4(void)
{
 spa_t *VAR_2 = ((void*)0);

 FUNC_1(&VAR_1);
 while ((VAR_2 = FUNC_3(VAR_2))) {
  if (VAR_2->spa_state == VAR_0)
   FUNC_0(VAR_2);
 }
 FUNC_2(&VAR_1);
}
