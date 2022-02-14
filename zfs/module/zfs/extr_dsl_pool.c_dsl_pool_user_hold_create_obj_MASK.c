
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int objset_t ;
struct TYPE_3__ {scalar_t__ dp_tmp_userrefs_obj; int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,int *) ;

void
FUNC_3(dsl_pool_t *VAR_3, dmu_tx_t *VAR_4)
{
 objset_t *VAR_5 = VAR_3->dp_meta_objset;

 FUNC_0(VAR_3->dp_tmp_userrefs_obj == 0);
 FUNC_0(FUNC_1(VAR_4));

 VAR_3->dp_tmp_userrefs_obj = FUNC_2(VAR_5, VAR_0,
     VAR_1, VAR_2, VAR_4);
}
