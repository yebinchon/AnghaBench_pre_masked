
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int spa_t ;
struct TYPE_5__ {int dp_root_dir; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int boolean_t ;
struct TYPE_6__ {scalar_t__ dd_used_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

boolean_t
FUNC_4(spa_t *VAR_3)
{
 dsl_pool_t *VAR_4 = FUNC_2(VAR_3);

 uint64_t VAR_5 = FUNC_1(VAR_4,
     VAR_2);
 uint64_t VAR_6 = FUNC_0(VAR_4->dp_root_dir)->dd_used_bytes;
 uint64_t VAR_7 = (VAR_5 > VAR_6) ? (VAR_5 - VAR_6) : 0;

 if (FUNC_3(VAR_3) && VAR_7 == 0)
  return (VAR_1);

 return (VAR_0);
}
