
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_15__ {scalar_t__ dn_type; scalar_t__ dn_free_txg; scalar_t__ dn_allocated_txg; int dn_num_slots; scalar_t__ dn_object; int dn_mtx; int dn_have_spill; scalar_t__ dn_maxblkid; TYPE_11__* dn_phys; TYPE_1__* dn_dbuf; scalar_t__* dn_next_maxblkid; scalar_t__* dn_next_blksz; scalar_t__* dn_next_indblkshift; scalar_t__* dn_next_nlevels; int * dn_dirty_records; } ;
typedef TYPE_2__ dnode_t ;
typedef int dnode_phys_t ;
struct TYPE_16__ {int tx_txg; } ;
typedef TYPE_3__ dmu_tx_t ;
struct TYPE_14__ {int db; } ;
struct TYPE_13__ {scalar_t__ dn_type; int dn_blkptr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_11__*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_11__*,int) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,void*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(dnode_t *VAR_4, dmu_tx_t *VAR_5)
{
 int VAR_6 = VAR_5->tx_txg & VAR_3;

 FUNC_0(FUNC_6(VAR_5));





 FUNC_1(FUNC_3(VAR_4->dn_phys));
 FUNC_0(FUNC_2(VAR_4->dn_phys->dn_blkptr));

 FUNC_10(&VAR_4->dn_dirty_records[VAR_6]);
 FUNC_7(VAR_4);
 VAR_4->dn_next_nlevels[VAR_6] = 0;
 VAR_4->dn_next_indblkshift[VAR_6] = 0;
 VAR_4->dn_next_blksz[VAR_6] = 0;
 VAR_4->dn_next_maxblkid[VAR_6] = 0;


 FUNC_0(VAR_4->dn_phys->dn_type != VAR_2);
 FUNC_0(VAR_4->dn_type != VAR_2);

 FUNC_0(VAR_4->dn_free_txg > 0);
 if (VAR_4->dn_allocated_txg != VAR_4->dn_free_txg)
  FUNC_5(&VAR_4->dn_dbuf->db, VAR_5);
 FUNC_4(VAR_4->dn_phys, sizeof (dnode_phys_t) * VAR_4->dn_num_slots);
 FUNC_8(VAR_4);

 FUNC_11(&VAR_4->dn_mtx);
 VAR_4->dn_type = VAR_2;
 VAR_4->dn_maxblkid = 0;
 VAR_4->dn_allocated_txg = 0;
 VAR_4->dn_free_txg = 0;
 VAR_4->dn_have_spill = VAR_0;
 VAR_4->dn_num_slots = 1;
 FUNC_12(&VAR_4->dn_mtx);

 FUNC_0(VAR_4->dn_object != VAR_1);

 FUNC_9(VAR_4, (void *)(uintptr_t)VAR_5->tx_txg);




}
