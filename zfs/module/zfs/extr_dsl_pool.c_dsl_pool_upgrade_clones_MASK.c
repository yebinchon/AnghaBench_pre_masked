
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dp_root_dir_obj; int * dp_origin_snap; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int *,int) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

void
FUNC_4(dsl_pool_t *VAR_3, dmu_tx_t *VAR_4)
{
 FUNC_0(FUNC_3(VAR_4));
 FUNC_0(VAR_3->dp_origin_snap != ((void*)0));

 FUNC_1(FUNC_2(VAR_3, VAR_3->dp_root_dir_obj, VAR_2,
     VAR_4, VAR_0 | VAR_1));
}
