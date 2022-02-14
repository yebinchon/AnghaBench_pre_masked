
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;
typedef struct TYPE_21__ TYPE_15__ ;


struct TYPE_24__ {int za_first_integer; } ;
typedef TYPE_2__ zap_cursor_t ;
typedef TYPE_2__ zap_attribute_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int list_t ;
struct TYPE_25__ {TYPE_19__* dd_pool; } ;
typedef TYPE_4__ dsl_dir_t ;
struct TYPE_26__ {int ds_remap_deadlist; int ds_deadlist; TYPE_1__* ds_dir; } ;
typedef TYPE_5__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_23__ {int dd_origin_txg; } ;
struct TYPE_22__ {int * dp_meta_objset; } ;
struct TYPE_21__ {scalar_t__ dd_clones; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_19__*,int ,void*,TYPE_5__**) ;
 int FUNC_2 (TYPE_5__*,void*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,int ,int *) ;
 TYPE_15__* FUNC_5 (TYPE_4__*) ;
 TYPE_2__* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int *,scalar_t__) ;
 scalar_t__ FUNC_13 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_14(dsl_dir_t *VAR_1, uint64_t VAR_2, dmu_tx_t *VAR_3,
    list_t *VAR_4, void *VAR_5)
{
 objset_t *VAR_6 = VAR_1->dd_pool->dp_meta_objset;






 if (FUNC_5(VAR_1)->dd_clones == 0)
  return;

 zap_cursor_t *VAR_7 = FUNC_6(sizeof (zap_cursor_t), VAR_0);
 zap_attribute_t *VAR_8 = FUNC_6(sizeof (zap_attribute_t), VAR_0);

 for (FUNC_12(VAR_7, VAR_6, FUNC_5(VAR_1)->dd_clones);
     FUNC_13(VAR_7, VAR_8) == 0;
     FUNC_10(VAR_7)) {
  dsl_dataset_t *VAR_9;

  FUNC_0(FUNC_1(VAR_1->dd_pool,
      VAR_8->za_first_integer, VAR_5, &VAR_9));

  if (VAR_9->ds_dir->dd_origin_txg > VAR_2) {
   FUNC_4(&VAR_9->ds_deadlist,
       VAR_2, VAR_3);

   if (FUNC_3(VAR_9)) {
    FUNC_4(
        &VAR_9->ds_remap_deadlist, VAR_2, VAR_3);
   }

   FUNC_8(VAR_4, FUNC_9(VAR_9));
  } else {
   FUNC_2(VAR_9, VAR_5);
  }
 }
 FUNC_11(VAR_7);

 FUNC_7(VAR_8, sizeof (zap_attribute_t));
 FUNC_7(VAR_7, sizeof (zap_cursor_t));
}
