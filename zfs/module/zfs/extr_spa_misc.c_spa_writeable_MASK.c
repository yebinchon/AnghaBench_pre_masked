
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spa_mode; scalar_t__ spa_trust_config; } ;
typedef TYPE_1__ spa_t ;
typedef int boolean_t ;


 int VAR_0 ;

boolean_t
FUNC_0(spa_t *VAR_1)
{
 return (!!(VAR_1->spa_mode & VAR_0) && VAR_1->spa_trust_config);
}
