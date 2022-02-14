
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zthr_t ;
struct TYPE_3__ {scalar_t__ syncing; scalar_t__ cancelled; int * ds; } ;
struct TYPE_4__ {TYPE_1__ spa_to_condense; } ;
typedef TYPE_2__ spa_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static boolean_t
FUNC_0(void *VAR_2, zthr_t *VAR_3)
{
 spa_t *VAR_4 = VAR_2;
 if ((VAR_4->spa_to_condense.ds != ((void*)0)) &&
     (VAR_4->spa_to_condense.syncing == VAR_0) &&
     (VAR_4->spa_to_condense.cancelled == VAR_0)) {
  return (VAR_1);
 }
 return (VAR_0);
}
