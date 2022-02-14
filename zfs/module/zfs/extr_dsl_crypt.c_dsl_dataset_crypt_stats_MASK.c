
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef int nvlist_t ;
struct TYPE_11__ {scalar_t__ dd_crypto_obj; TYPE_5__* dd_pool; } ;
typedef TYPE_1__ dsl_dir_t ;
struct TYPE_12__ {scalar_t__ ds_object; TYPE_1__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_13__ {int dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ,int *,int ,TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ,int,int,int *) ;
 int FUNC_9 (int ) ;

void
FUNC_10(dsl_dataset_t *VAR_12, nvlist_t *VAR_13)
{
 uint64_t VAR_14;
 dsl_dir_t *VAR_15 = VAR_12->ds_dir;
 dsl_dir_t *VAR_16;
 char VAR_17[VAR_3];

 if (VAR_15->dd_crypto_obj == 0)
  return;

 VAR_14 = FUNC_0(VAR_15);
 FUNC_7(VAR_13, VAR_8, VAR_14);

 if (FUNC_1(VAR_15, &VAR_14) == 0)
  FUNC_7(VAR_13, VAR_4, VAR_14);
 if (FUNC_8(VAR_15->dd_pool->dp_meta_objset, VAR_15->dd_crypto_obj,
     VAR_0, 8, 1, &VAR_14) == 0) {
  FUNC_7(VAR_13, VAR_9, VAR_14);
 }
 if (FUNC_8(VAR_15->dd_pool->dp_meta_objset, VAR_15->dd_crypto_obj,
     FUNC_9(VAR_7), 8, 1, &VAR_14) == 0) {
  FUNC_7(VAR_13, VAR_7, VAR_14);
 }
 if (FUNC_8(VAR_15->dd_pool->dp_meta_objset, VAR_15->dd_crypto_obj,
     FUNC_9(VAR_11), 8, 1, &VAR_14) == 0) {
  FUNC_7(VAR_13, VAR_11, VAR_14);
 }
 if (FUNC_8(VAR_15->dd_pool->dp_meta_objset, VAR_15->dd_crypto_obj,
     FUNC_9(VAR_10), 8, 1, &VAR_14) == 0) {
  FUNC_7(VAR_13, VAR_10, VAR_14);
 }
 if (FUNC_8(VAR_15->dd_pool->dp_meta_objset, VAR_12->ds_object,
     VAR_1, 8, 1, &VAR_14) == 0) {
  FUNC_7(VAR_13, VAR_6, VAR_14);
 }

 if (FUNC_2(VAR_15, &VAR_14) == 0) {
  if (FUNC_3(VAR_15->dd_pool, VAR_14, ((void*)0), VAR_2,
      &VAR_16) == 0) {
   FUNC_4(VAR_16, VAR_17);
   FUNC_5(VAR_16, VAR_2);
   FUNC_6(VAR_13,
       VAR_5, VAR_17);
  }
 }
}
