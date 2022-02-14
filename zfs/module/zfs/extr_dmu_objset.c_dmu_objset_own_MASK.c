
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int objset_t ;
struct TYPE_13__ {TYPE_1__* dp_spa; } ;
typedef TYPE_3__ dsl_pool_t ;
struct TYPE_14__ {TYPE_2__* ds_dir; } ;
typedef TYPE_4__ dsl_dataset_t ;
typedef int ds_hold_flags_t ;
typedef int dmu_objset_type_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {scalar_t__ dd_crypto_obj; } ;
struct TYPE_11__ {int spa_claiming; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int ,scalar_t__,scalar_t__,void*,int **) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int ,void*) ;
 int FUNC_5 (TYPE_3__*,char const*,int ,void*,TYPE_4__**) ;
 int FUNC_6 (char const*,int ,TYPE_3__**) ;
 int FUNC_7 (TYPE_3__*,int ) ;

int
FUNC_8(const char *VAR_2, dmu_objset_type_t VAR_3,
    boolean_t VAR_4, boolean_t VAR_5, void *VAR_6, objset_t **VAR_7)
{
 dsl_pool_t *VAR_8;
 dsl_dataset_t *VAR_9;
 int VAR_10;
 ds_hold_flags_t VAR_11 = (VAR_5) ? VAR_0 : 0;

 VAR_10 = FUNC_6(VAR_2, VAR_1, &VAR_8);
 if (VAR_10 != 0)
  return (VAR_10);
 VAR_10 = FUNC_5(VAR_8, VAR_2, VAR_11, VAR_6, &VAR_9);
 if (VAR_10 != 0) {
  FUNC_7(VAR_8, VAR_1);
  return (VAR_10);
 }
 VAR_10 = FUNC_1(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_10 != 0) {
  FUNC_4(VAR_9, VAR_11, VAR_6);
  FUNC_7(VAR_8, VAR_1);
  return (VAR_10);
 }







 if ((FUNC_3(*VAR_7) ||
     FUNC_2(*VAR_7)) &&
     !VAR_4 && !VAR_8->dp_spa->spa_claiming &&
     (VAR_9->ds_dir->dd_crypto_obj == 0 || VAR_5))
  FUNC_0(*VAR_7);

 FUNC_7(VAR_8, VAR_1);
 return (0);
}
