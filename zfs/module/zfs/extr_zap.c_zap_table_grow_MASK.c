
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int zt_blk; int zt_numblks; scalar_t__ zt_nextblk; int zt_blks_copied; int zt_shift; } ;
typedef TYPE_1__ zap_table_phys_t ;
struct TYPE_12__ {int zap_object; int zap_objset; int zap_rwlock; } ;
typedef TYPE_2__ zap_t ;
typedef int uint64_t ;
typedef int dmu_tx_t ;
struct TYPE_13__ {uint64_t const* db_data; } ;
typedef TYPE_3__ dmu_buf_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int,int ,TYPE_3__**,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (int ,int ,int,int,int *) ;
 int FUNC_9 (int ,int ,int ,int,int,int ) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_12(zap_t *VAR_3, zap_table_phys_t *VAR_4,
    void (*VAR_5)(const uint64_t *VAR_6, uint64_t *VAR_7, int VAR_8),
    dmu_tx_t *VAR_9)
{
 uint64_t VAR_10;
 int VAR_11 = FUNC_2(VAR_3);
 int VAR_12 = 1<<(VAR_11-4);


 FUNC_0(FUNC_3(&VAR_3->zap_rwlock));
 FUNC_0(VAR_4->zt_blk != 0);
 FUNC_0(VAR_4->zt_numblks > 0);

 if (VAR_4->zt_nextblk != 0) {
  VAR_10 = VAR_4->zt_nextblk;
 } else {
  VAR_10 = FUNC_11(VAR_3, VAR_4->zt_numblks * 2);
  VAR_4->zt_nextblk = VAR_10;
  FUNC_1(VAR_4->zt_blks_copied);
  FUNC_9(VAR_3->zap_objset, VAR_3->zap_object, 0,
      VAR_4->zt_blk << VAR_11, VAR_4->zt_numblks << VAR_11,
      VAR_2);
 }





 uint64_t VAR_13 = VAR_4->zt_blks_copied;
 dmu_buf_t *VAR_14;
 int VAR_15 = FUNC_5(VAR_3->zap_objset, VAR_3->zap_object,
     (VAR_4->zt_blk + VAR_13) << VAR_11, VAR_1, &VAR_14, VAR_0);
 if (VAR_15 != 0)
  return (VAR_15);


 dmu_buf_t *VAR_16;
 FUNC_4(FUNC_5(VAR_3->zap_objset, VAR_3->zap_object,
     (VAR_10 + 2*VAR_13+0) << VAR_11, VAR_1, &VAR_16, VAR_0));
 FUNC_7(VAR_16, VAR_9);
 VAR_5(VAR_14->db_data, VAR_16->db_data, VAR_12);
 FUNC_6(VAR_16, VAR_1);


 FUNC_4(FUNC_5(VAR_3->zap_objset, VAR_3->zap_object,
     (VAR_10 + 2*VAR_13+1) << VAR_11, VAR_1, &VAR_16, VAR_0));
 FUNC_7(VAR_16, VAR_9);
 VAR_5((uint64_t *)VAR_14->db_data + VAR_12,
     VAR_16->db_data, VAR_12);
 FUNC_6(VAR_16, VAR_1);

 FUNC_6(VAR_14, VAR_1);

 VAR_4->zt_blks_copied++;

 FUNC_10("copied block %llu of %llu\n",
     VAR_4->zt_blks_copied, VAR_4->zt_numblks);

 if (VAR_4->zt_blks_copied == VAR_4->zt_numblks) {
  (void) FUNC_8(VAR_3->zap_objset, VAR_3->zap_object,
      VAR_4->zt_blk << VAR_11, VAR_4->zt_numblks << VAR_11, VAR_9);

  VAR_4->zt_blk = VAR_10;
  VAR_4->zt_numblks *= 2;
  VAR_4->zt_shift++;
  VAR_4->zt_nextblk = 0;
  VAR_4->zt_blks_copied = 0;

  FUNC_10("finished; numblocks now %llu (%uk entries)\n",
      VAR_4->zt_numblks, 1<<(VAR_4->zt_shift-10));
 }

 return (0);
}
