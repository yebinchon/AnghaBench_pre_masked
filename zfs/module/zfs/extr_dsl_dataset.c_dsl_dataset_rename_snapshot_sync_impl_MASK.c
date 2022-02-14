
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint64_t ;
struct TYPE_15__ {int dp_spa; int dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_16__ {int ds_object; int ds_snapname; int ds_lock; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_17__ {int ddrsa_newsnapname; int ddrsa_oldsnapname; int * ddrsa_tx; } ;
typedef TYPE_3__ dsl_dataset_rename_snapshot_arg_t ;
typedef int dmu_tx_t ;
struct TYPE_14__ {int ds_snapnames_zapobj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,TYPE_2__**) ;
 TYPE_10__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int *) ;
 int FUNC_6 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,char*,int *,char*,int ) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int ,int ,int,int,int *,int *) ;
 int FUNC_12 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_13(dsl_pool_t *VAR_4,
    dsl_dataset_t *VAR_5, void *VAR_6)
{
 dsl_dataset_rename_snapshot_arg_t *VAR_7 = VAR_6;
 dsl_dataset_t *VAR_8;
 uint64_t VAR_9;
 dmu_tx_t *VAR_10 = VAR_7->ddrsa_tx;
 int VAR_11;

 VAR_11 = FUNC_5(VAR_5, VAR_7->ddrsa_oldsnapname, &VAR_9);
 FUNC_0(VAR_11 == 0 || VAR_11 == VAR_2);
 if (VAR_11 == VAR_2) {

  return (0);
 }

 FUNC_1(FUNC_2(VAR_4, VAR_9, VAR_3, &VAR_8));


 FUNC_9(VAR_8, "rename", VAR_10,
     "-> @%s", VAR_7->ddrsa_newsnapname);

 FUNC_1(FUNC_6(VAR_5, VAR_7->ddrsa_oldsnapname, VAR_10,
     VAR_0));
 FUNC_7(&VAR_8->ds_lock);
 (void) FUNC_10(VAR_8->ds_snapname, VAR_7->ddrsa_newsnapname,
     sizeof (VAR_8->ds_snapname));
 FUNC_8(&VAR_8->ds_lock);
 FUNC_1(FUNC_11(VAR_4->dp_meta_objset,
     FUNC_3(VAR_5)->ds_snapnames_zapobj,
     VAR_8->ds_snapname, 8, 1, &VAR_8->ds_object, VAR_10));
 FUNC_12(VAR_4->dp_spa, VAR_7->ddrsa_oldsnapname,
     VAR_7->ddrsa_newsnapname, VAR_1);

 FUNC_4(VAR_8, VAR_3);
 return (0);
}
