
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ spa_minref; int spa_refcount; } ;
typedef TYPE_1__ spa_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;

boolean_t
FUNC_3(spa_t *VAR_1)
{
 FUNC_0(FUNC_1(&VAR_0));

 return (FUNC_2(&VAR_1->spa_refcount) == VAR_1->spa_minref);
}
