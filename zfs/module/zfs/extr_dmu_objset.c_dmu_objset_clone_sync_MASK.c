
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_longlong_t ;
struct TYPE_17__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_18__ {int dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_19__ {scalar_t__ ds_object; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_20__ {int doca_clone; int doca_cred; int doca_origin; } ;
typedef TYPE_4__ dmu_objset_clone_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,char const*,TYPE_3__*,int ,int ,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ,TYPE_3__**) ;
 int FUNC_4 (int ,int ,int ,TYPE_3__**) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ,TYPE_2__**,char const**) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_3__*,char*,int *,char*,char*,int ) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_11(void *VAR_3, dmu_tx_t *VAR_4)
{
 dmu_objset_clone_arg_t *VAR_5 = VAR_3;
 dsl_pool_t *VAR_6 = FUNC_1(VAR_4);
 dsl_dir_t *VAR_7;
 const char *VAR_8;
 dsl_dataset_t *VAR_9, *VAR_10;
 uint64_t VAR_11;
 char VAR_12[VAR_2];

 FUNC_0(FUNC_7(VAR_6, VAR_5->doca_clone, VAR_1, &VAR_7, &VAR_8));
 FUNC_0(FUNC_3(VAR_6, VAR_5->doca_origin, VAR_1, &VAR_9));

 VAR_11 = FUNC_2(VAR_7, VAR_8, VAR_9, 0,
     VAR_5->doca_cred, ((void*)0), VAR_4);

 FUNC_0(FUNC_4(VAR_7->dd_pool, VAR_11, VAR_1, &VAR_10));
 FUNC_5(VAR_9, VAR_12);
 FUNC_9(VAR_10, "clone", VAR_4,
     "origin=%s (%llu)", VAR_12, (u_longlong_t)VAR_9->ds_object);
 FUNC_10(VAR_6->dp_spa, VAR_5->doca_clone, VAR_0);
 FUNC_6(VAR_10, VAR_1);
 FUNC_6(VAR_9, VAR_1);
 FUNC_8(VAR_7, VAR_1);
}
