
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dn_datablksz; int dn_indblkshift; int dn_num_slots; int dn_maxblkid; int dn_nblkptr; int dn_compress; int dn_checksum; int dn_nlevels; int dn_bonuslen; int dn_bonustype; int dn_type; TYPE_2__* dn_phys; } ;
typedef TYPE_1__ dnode_t ;
struct TYPE_8__ {int dn_nblkptr; int * dn_blkptr; } ;
typedef TYPE_2__ dnode_phys_t ;
struct TYPE_9__ {int doi_data_block_size; unsigned long long doi_metadata_block_size; int doi_dnodesize; int doi_physical_blocks_512; int doi_max_offset; scalar_t__ doi_fill_count; int doi_nblkptr; int doi_compress; int doi_checksum; int doi_indirection; int doi_bonus_size; int doi_bonus_type; int doi_type; } ;
typedef TYPE_3__ dmu_object_info_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(dnode_t *VAR_1, dmu_object_info_t *VAR_2)
{
 dnode_phys_t *VAR_3 = VAR_1->dn_phys;

 VAR_2->doi_data_block_size = VAR_1->dn_datablksz;
 VAR_2->doi_metadata_block_size = VAR_1->dn_indblkshift ?
     1ULL << VAR_1->dn_indblkshift : 0;
 VAR_2->doi_type = VAR_1->dn_type;
 VAR_2->doi_bonus_type = VAR_1->dn_bonustype;
 VAR_2->doi_bonus_size = VAR_1->dn_bonuslen;
 VAR_2->doi_dnodesize = VAR_1->dn_num_slots << VAR_0;
 VAR_2->doi_indirection = VAR_1->dn_nlevels;
 VAR_2->doi_checksum = VAR_1->dn_checksum;
 VAR_2->doi_compress = VAR_1->dn_compress;
 VAR_2->doi_nblkptr = VAR_1->dn_nblkptr;
 VAR_2->doi_physical_blocks_512 = (FUNC_1(VAR_3) + 256) >> 9;
 VAR_2->doi_max_offset = (VAR_1->dn_maxblkid + 1) * VAR_1->dn_datablksz;
 VAR_2->doi_fill_count = 0;
 for (int VAR_4 = 0; VAR_4 < VAR_3->dn_nblkptr; VAR_4++)
  VAR_2->doi_fill_count += FUNC_0(&VAR_3->dn_blkptr[VAR_4]);
}
