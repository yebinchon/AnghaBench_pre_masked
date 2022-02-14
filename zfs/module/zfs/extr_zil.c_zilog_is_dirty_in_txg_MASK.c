
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* zl_dmu_pool; } ;
typedef TYPE_1__ zilog_t ;
typedef int uint64_t ;
struct TYPE_6__ {int dp_dirty_zilogs; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int) ;

boolean_t
FUNC_1(zilog_t *VAR_3, uint64_t VAR_4)
{
 dsl_pool_t *VAR_5 = VAR_3->zl_dmu_pool;

 if (FUNC_0(&VAR_5->dp_dirty_zilogs, VAR_3, VAR_4 & VAR_2))
  return (VAR_1);
 return (VAR_0);
}
