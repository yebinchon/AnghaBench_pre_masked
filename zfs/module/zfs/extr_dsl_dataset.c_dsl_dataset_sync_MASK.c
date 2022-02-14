
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zio_t ;
typedef size_t spa_feature_t ;
struct TYPE_14__ {scalar_t__* ds_resume_bytes; scalar_t__* ds_resume_object; scalar_t__* ds_resume_offset; int * ds_feature_activation; int * ds_feature; int ds_object; int * ds_objset; int ds_fsid_guid; int ds_dbuf; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_15__ {size_t tx_txg; TYPE_1__* tx_pool; } ;
typedef TYPE_3__ dmu_tx_t ;
struct TYPE_16__ {scalar_t__ ds_next_snap_obj; int ds_fsid_guid; } ;
struct TYPE_13__ {int dp_meta_objset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int *,int *,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,size_t,int ,TYPE_3__*) ;
 TYPE_7__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ,int ,int,int,scalar_t__*,TYPE_3__*) ;
 scalar_t__ FUNC_8 (size_t,int ) ;

void
FUNC_9(dsl_dataset_t *VAR_5, zio_t *VAR_6, dmu_tx_t *VAR_7)
{
 FUNC_0(FUNC_4(VAR_7));
 FUNC_0(VAR_5->ds_objset != ((void*)0));
 FUNC_0(FUNC_6(VAR_5)->ds_next_snap_obj == 0);





 FUNC_2(VAR_5->ds_dbuf, VAR_7);
 FUNC_6(VAR_5)->ds_fsid_guid = VAR_5->ds_fsid_guid;

 if (VAR_5->ds_resume_bytes[VAR_7->tx_txg & VAR_4] != 0) {
  FUNC_1(FUNC_7(VAR_7->tx_pool->dp_meta_objset,
      VAR_5->ds_object, VAR_1, 8, 1,
      &VAR_5->ds_resume_object[VAR_7->tx_txg & VAR_4], VAR_7));
  FUNC_1(FUNC_7(VAR_7->tx_pool->dp_meta_objset,
      VAR_5->ds_object, VAR_2, 8, 1,
      &VAR_5->ds_resume_offset[VAR_7->tx_txg & VAR_4], VAR_7));
  FUNC_1(FUNC_7(VAR_7->tx_pool->dp_meta_objset,
      VAR_5->ds_object, VAR_0, 8, 1,
      &VAR_5->ds_resume_bytes[VAR_7->tx_txg & VAR_4], VAR_7));
  VAR_5->ds_resume_object[VAR_7->tx_txg & VAR_4] = 0;
  VAR_5->ds_resume_offset[VAR_7->tx_txg & VAR_4] = 0;
  VAR_5->ds_resume_bytes[VAR_7->tx_txg & VAR_4] = 0;
 }

 FUNC_3(VAR_5->ds_objset, VAR_6, VAR_7);

 for (spa_feature_t VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (FUNC_8(VAR_8, VAR_5->ds_feature_activation[VAR_8])) {
   if (FUNC_8(VAR_8, VAR_5->ds_feature[VAR_8]))
    continue;
   FUNC_5(VAR_5->ds_object, VAR_8,
       VAR_5->ds_feature_activation[VAR_8], VAR_7);
   VAR_5->ds_feature[VAR_8] = VAR_5->ds_feature_activation[VAR_8];
  }
 }
}
