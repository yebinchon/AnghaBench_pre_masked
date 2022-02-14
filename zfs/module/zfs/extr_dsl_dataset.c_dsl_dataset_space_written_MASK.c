
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zbm_uncompressed_bytes_refd; int zbm_compressed_bytes_refd; int zbm_referenced_bytes_refd; int zbm_creation_time; int zbm_creation_txg; int zbm_guid; int member_0; } ;
typedef TYPE_1__ zfs_bookmark_phys_t ;
typedef int uint64_t ;
typedef int dsl_dataset_t ;
struct TYPE_6__ {int ds_uncompressed_bytes; int ds_compressed_bytes; int ds_referenced_bytes; int ds_creation_time; int ds_creation_txg; int ds_guid; } ;
typedef TYPE_2__ dsl_dataset_phys_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *,int *,int *) ;

int
FUNC_4(dsl_dataset_t *VAR_1, dsl_dataset_t *VAR_2,
    uint64_t *VAR_3, uint64_t *VAR_4, uint64_t *VAR_5)
{
 if (!FUNC_1(VAR_2, VAR_1, 0))
  return (FUNC_0(VAR_0));

 zfs_bookmark_phys_t VAR_6 = { 0 };
 dsl_dataset_phys_t *VAR_7 = FUNC_2(VAR_1);
 VAR_6.zbm_guid = VAR_7->ds_guid;
 VAR_6.zbm_creation_txg = VAR_7->ds_creation_txg;
 VAR_6.zbm_creation_time = VAR_7->ds_creation_time;
 VAR_6.zbm_referenced_bytes_refd = VAR_7->ds_referenced_bytes;
 VAR_6.zbm_compressed_bytes_refd = VAR_7->ds_compressed_bytes;
 VAR_6.zbm_uncompressed_bytes_refd = VAR_7->ds_uncompressed_bytes;
 return (FUNC_3(&VAR_6, VAR_2,
     VAR_3, VAR_4, VAR_5));
}
