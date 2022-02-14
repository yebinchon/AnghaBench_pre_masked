
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zap_t ;
struct TYPE_9__ {int * zs_buckets_with_n_entries; int * zs_entries_using_n_chunks; int * zs_blocks_n_tenths_full; int * zs_blocks_with_n5_entries; int * zs_leafs_with_2n_pointers; } ;
typedef TYPE_3__ zap_stats_t ;
typedef int zap_leaf_t ;
struct zap_leaf_entry {int le_name_numints; int le_value_numints; int le_value_intlen; int le_next; } ;
struct TYPE_7__ {int zt_shift; } ;
struct TYPE_11__ {TYPE_1__ zap_ptrtbl; } ;
struct TYPE_8__ {int lh_prefix_len; int lh_nentries; int lh_nfree; } ;
struct TYPE_10__ {int* l_hash; TYPE_2__ l_hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 struct zap_leaf_entry* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 TYPE_6__* FUNC_5 (int *) ;
 TYPE_5__* FUNC_6 (int *) ;

void
FUNC_7(zap_t *VAR_3, zap_leaf_t *VAR_4, zap_stats_t *VAR_5)
{
 int VAR_6 = FUNC_5(VAR_3)->zap_ptrtbl.zt_shift -
     FUNC_6(VAR_4)->l_hdr.lh_prefix_len;
 VAR_6 = FUNC_1(VAR_6, VAR_1-1);
 VAR_5->zs_leafs_with_2n_pointers[VAR_6]++;


 VAR_6 = FUNC_6(VAR_4)->l_hdr.lh_nentries/5;
 VAR_6 = FUNC_1(VAR_6, VAR_1-1);
 VAR_5->zs_blocks_with_n5_entries[VAR_6]++;

 VAR_6 = ((1<<FUNC_0(VAR_3)) -
     FUNC_6(VAR_4)->l_hdr.lh_nfree * (VAR_2+1))*10 /
     (1<<FUNC_0(VAR_3));
 VAR_6 = FUNC_1(VAR_6, VAR_1-1);
 VAR_5->zs_blocks_n_tenths_full[VAR_6]++;

 for (int VAR_7 = 0; VAR_7 < FUNC_4(VAR_4); VAR_7++) {
  int VAR_8 = 0;
  int VAR_9 = FUNC_6(VAR_4)->l_hash[VAR_7];

  while (VAR_9 != VAR_0) {
   struct zap_leaf_entry *VAR_10 =
       FUNC_3(VAR_4, VAR_9);

   VAR_6 = 1 + FUNC_2(VAR_10->le_name_numints) +
       FUNC_2(VAR_10->le_value_numints *
       VAR_10->le_value_intlen);
   VAR_6 = FUNC_1(VAR_6, VAR_1-1);
   VAR_5->zs_entries_using_n_chunks[VAR_6]++;

   VAR_9 = VAR_10->le_next;
   VAR_8++;
  }

  VAR_6 = VAR_8;
  VAR_6 = FUNC_1(VAR_6, VAR_1-1);
  VAR_5->zs_buckets_with_n_entries[VAR_6]++;
 }
}
