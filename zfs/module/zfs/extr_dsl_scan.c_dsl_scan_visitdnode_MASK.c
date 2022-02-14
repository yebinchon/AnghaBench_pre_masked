
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
typedef int uint64_t ;
typedef int dsl_scan_t ;
struct TYPE_8__ {int ds_object; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_9__ {int dn_nblkptr; int dn_flags; int * dn_blkptr; scalar_t__ dn_nlevels; } ;
typedef TYPE_2__ dnode_phys_t ;
typedef int dmu_tx_t ;
typedef int dmu_objset_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,int ,scalar_t__,int) ;
 int FUNC_2 (int *,int *,TYPE_2__*,TYPE_1__*,int *,int ,int *) ;

__attribute__((used)) inline __attribute__((always_inline)) static void
FUNC_3(dsl_scan_t *VAR_2, dsl_dataset_t *VAR_3,
    dmu_objset_type_t VAR_4, dnode_phys_t *VAR_5,
    uint64_t VAR_6, dmu_tx_t *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5->dn_nblkptr; VAR_8++) {
  zbookmark_phys_t VAR_9;

  FUNC_1(&VAR_9, VAR_3 ? VAR_3->ds_object : 0, VAR_6,
      VAR_5->dn_nlevels - 1, VAR_8);
  FUNC_2(&VAR_5->dn_blkptr[VAR_8],
      &VAR_9, VAR_5, VAR_3, VAR_2, VAR_4, VAR_7);
 }

 if (VAR_5->dn_flags & VAR_1) {
  zbookmark_phys_t VAR_10;
  FUNC_1(&VAR_10, VAR_3 ? VAR_3->ds_object : 0, VAR_6,
      0, VAR_0);
  FUNC_2(FUNC_0(VAR_5),
      &VAR_10, VAR_5, VAR_3, VAR_2, VAR_4, VAR_7);
 }
}
