
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bpo_object; } ;
struct TYPE_4__ {TYPE_3__ dp_obsolete_bpobj; int dp_meta_objset; int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,int *) ;

void
FUNC_5(dsl_pool_t *VAR_3, dmu_tx_t *VAR_4)
{
 FUNC_3(VAR_3->dp_spa, VAR_2, VAR_4);
 FUNC_0(FUNC_4(VAR_3->dp_meta_objset,
     VAR_0,
     VAR_1, VAR_4));
 FUNC_2(VAR_3->dp_meta_objset,
     VAR_3->dp_obsolete_bpobj.bpo_object, VAR_4);
 FUNC_1(&VAR_3->dp_obsolete_bpobj);
}
