
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zs_ptrtbl_len; int zs_num_blocks; int zs_buckets_with_n_entries; int zs_entries_using_n_chunks; int zs_blocks_n_tenths_full; int zs_blocks_with_n5_entries; int zs_leafs_with_2n_pointers; scalar_t__ zs_salt; scalar_t__ zs_magic; scalar_t__ zs_block_type; scalar_t__ zs_num_leafs; scalar_t__ zs_num_entries; scalar_t__ zs_ptrtbl_nextblk; scalar_t__ zs_ptrtbl_blks_copied; scalar_t__ zs_ptrtbl_zt_shift; scalar_t__ zs_ptrtbl_zt_numblks; scalar_t__ zs_ptrtbl_zt_blk; scalar_t__ zs_blocksize; } ;
typedef TYPE_1__ zap_stats_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
typedef int objset_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(objset_t *VAR_1, uint64_t VAR_2)
{
 int VAR_3;
 zap_stats_t VAR_4;

 VAR_3 = FUNC_3(VAR_1, VAR_2, &VAR_4);
 if (VAR_3)
  return;

 if (VAR_4.zs_ptrtbl_len == 0) {
  FUNC_0(VAR_4.zs_num_blocks == 1);
  (void) FUNC_2("\tmicrozap: %llu bytes, %llu entries\n",
      (u_longlong_t)VAR_4.zs_blocksize,
      (u_longlong_t)VAR_4.zs_num_entries);
  return;
 }

 (void) FUNC_2("\tFat ZAP stats:\n");

 (void) FUNC_2("\t\tPointer table:\n");
 (void) FUNC_2("\t\t\t%llu elements\n",
     (u_longlong_t)VAR_4.zs_ptrtbl_len);
 (void) FUNC_2("\t\t\tzt_blk: %llu\n",
     (u_longlong_t)VAR_4.zs_ptrtbl_zt_blk);
 (void) FUNC_2("\t\t\tzt_numblks: %llu\n",
     (u_longlong_t)VAR_4.zs_ptrtbl_zt_numblks);
 (void) FUNC_2("\t\t\tzt_shift: %llu\n",
     (u_longlong_t)VAR_4.zs_ptrtbl_zt_shift);
 (void) FUNC_2("\t\t\tzt_blks_copied: %llu\n",
     (u_longlong_t)VAR_4.zs_ptrtbl_blks_copied);
 (void) FUNC_2("\t\t\tzt_nextblk: %llu\n",
     (u_longlong_t)VAR_4.zs_ptrtbl_nextblk);

 (void) FUNC_2("\t\tZAP entries: %llu\n",
     (u_longlong_t)VAR_4.zs_num_entries);
 (void) FUNC_2("\t\tLeaf blocks: %llu\n",
     (u_longlong_t)VAR_4.zs_num_leafs);
 (void) FUNC_2("\t\tTotal blocks: %llu\n",
     (u_longlong_t)VAR_4.zs_num_blocks);
 (void) FUNC_2("\t\tzap_block_type: 0x%llx\n",
     (u_longlong_t)VAR_4.zs_block_type);
 (void) FUNC_2("\t\tzap_magic: 0x%llx\n",
     (u_longlong_t)VAR_4.zs_magic);
 (void) FUNC_2("\t\tzap_salt: 0x%llx\n",
     (u_longlong_t)VAR_4.zs_salt);

 (void) FUNC_2("\t\tLeafs with 2^n pointers:\n");
 FUNC_1(VAR_4.zs_leafs_with_2n_pointers, VAR_0, 0);

 (void) FUNC_2("\t\tBlocks with n*5 entries:\n");
 FUNC_1(VAR_4.zs_blocks_with_n5_entries, VAR_0, 0);

 (void) FUNC_2("\t\tBlocks n/10 full:\n");
 FUNC_1(VAR_4.zs_blocks_n_tenths_full, VAR_0, 0);

 (void) FUNC_2("\t\tEntries with n chunks:\n");
 FUNC_1(VAR_4.zs_entries_using_n_chunks, VAR_0, 0);

 (void) FUNC_2("\t\tBuckets with n entries:\n");
 FUNC_1(VAR_4.zs_buckets_with_n_entries, VAR_0, 0);
}
