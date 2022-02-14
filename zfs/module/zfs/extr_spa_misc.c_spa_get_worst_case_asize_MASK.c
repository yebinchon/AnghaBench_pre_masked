
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int spa_max_ashift; } ;
typedef TYPE_1__ spa_t ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;

uint64_t
FUNC_1(spa_t *VAR_1, uint64_t VAR_2)
{
 if (VAR_2 == 0)
  return (0);
 return (FUNC_0(VAR_2, 1 << VAR_1->spa_max_ashift) * VAR_0);
}
