
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dsl_pool_t ;
struct TYPE_3__ {int * dc_dp; } ;
typedef TYPE_1__ dmu_objset_find_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 dmu_objset_find_ctx_t *VAR_2 = VAR_1;
 dsl_pool_t *VAR_3 = VAR_2->dc_dp;
 FUNC_1(VAR_3, VAR_0);

 FUNC_0(VAR_2);

 FUNC_2(VAR_3, VAR_0);
}
