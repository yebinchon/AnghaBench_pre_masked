
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zfs_bookmark_phys_t ;
typedef int uint64_t ;
struct TYPE_14__ {int ds_is_snapshot; TYPE_1__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_replay_record_t ;
typedef int boolean_t ;
struct TYPE_15__ {int ds_uncompressed_bytes; int ds_compressed_bytes; } ;
struct TYPE_13__ {int dd_pool; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int,int,int ,int*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int ) ;
 TYPE_6__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int*,int*,int*) ;
 int FUNC_6 (int *,TYPE_2__*,int*,int*,int*) ;
 int FUNC_7 (int ) ;

int
FUNC_8(dsl_dataset_t *VAR_2, dsl_dataset_t *VAR_3,
    zfs_bookmark_phys_t *VAR_4, boolean_t VAR_5, uint64_t *VAR_6)
{
 int VAR_7;
 uint64_t VAR_8, VAR_9;

 FUNC_0(FUNC_7(VAR_2->ds_dir->dd_pool));
 FUNC_0(VAR_3 == ((void*)0) || VAR_4 == ((void*)0));


 if (!VAR_2->ds_is_snapshot)
  return (FUNC_1(VAR_0));

 if (VAR_3 != ((void*)0)) {
  uint64_t VAR_10;
  if (!VAR_3->ds_is_snapshot)
   return (FUNC_1(VAR_0));

  if (!FUNC_3(VAR_2, VAR_3, 0))
   return (FUNC_1(VAR_1));

  VAR_7 = FUNC_5(VAR_3, VAR_2, &VAR_10, &VAR_9,
      &VAR_8);
  if (VAR_7 != 0)
   return (VAR_7);
 } else if (VAR_4 != ((void*)0)) {
  uint64_t VAR_11;
  VAR_7 = FUNC_6(VAR_4, VAR_2, &VAR_11,
      &VAR_9, &VAR_8);
  if (VAR_7 != 0)
   return (VAR_7);
 } else {
  VAR_8 = FUNC_4(VAR_2)->ds_uncompressed_bytes;
  VAR_9 = FUNC_4(VAR_2)->ds_compressed_bytes;
 }

 VAR_7 = FUNC_2(VAR_2, VAR_8, VAR_9,
     VAR_5, VAR_6);



 *VAR_6 += 2 * sizeof (dmu_replay_record_t);
 return (VAR_7);
}
