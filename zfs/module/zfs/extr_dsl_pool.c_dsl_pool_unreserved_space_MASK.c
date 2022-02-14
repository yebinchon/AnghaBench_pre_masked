
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_space_check_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

uint64_t
FUNC_3(dsl_pool_t *VAR_0, zfs_space_check_t VAR_1)
{
 uint64_t VAR_2 = FUNC_0(VAR_0, VAR_1);
 uint64_t VAR_3 =
     FUNC_1(FUNC_2(VAR_0->dp_spa));
 uint64_t VAR_4 = (VAR_2 >= VAR_3) ? (VAR_2 - VAR_3) : 0;
 return (VAR_4);
}
