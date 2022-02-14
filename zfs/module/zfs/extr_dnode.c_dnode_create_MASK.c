
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_14__ {int os_lock; int os_dnodes; } ;
typedef TYPE_1__ objset_t ;
struct TYPE_15__ {int dn_have_spill; TYPE_1__* dn_objset; TYPE_3__* dn_phys; int dn_zfetch; scalar_t__ dn_id_flags; int dn_maxblkid; scalar_t__ dn_num_slots; int dn_bonuslen; int dn_bonustype; int dn_compress; int dn_checksum; int dn_nblkptr; int dn_type; int dn_nlevels; int dn_indblkshift; scalar_t__ dn_datablkshift; scalar_t__ dn_datablkszsec; scalar_t__ dn_datablksz; TYPE_4__* dn_handle; int * dn_dbuf; int dn_object; scalar_t__ dn_moved; } ;
typedef TYPE_2__ dnode_t ;
struct TYPE_16__ {int dn_datablkszsec; int dn_flags; int dn_type; int dn_maxblkid; scalar_t__ dn_extra_slots; int dn_bonuslen; int dn_bonustype; int dn_compress; int dn_checksum; int dn_nblkptr; int dn_nlevels; int dn_indblkshift; } ;
typedef TYPE_3__ dnode_phys_t ;
struct TYPE_17__ {TYPE_2__* dnh_dnode; int dnh_zrlock; } ;
typedef TYPE_4__ dnode_handle_t ;
typedef int dmu_buf_impl_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static dnode_t *
FUNC_13(objset_t *VAR_5, dnode_phys_t *VAR_6, dmu_buf_impl_t *VAR_7,
    uint64_t VAR_8, dnode_handle_t *VAR_9)
{
 dnode_t *VAR_10;

 VAR_10 = FUNC_7(VAR_4, VAR_2);
 VAR_10->dn_moved = 0;





 VAR_10->dn_object = VAR_8;
 VAR_10->dn_dbuf = VAR_7;
 VAR_10->dn_handle = VAR_9;
 VAR_10->dn_phys = VAR_6;

 if (VAR_6->dn_datablkszsec) {
  FUNC_6(VAR_10, VAR_6->dn_datablkszsec << VAR_3);
 } else {
  VAR_10->dn_datablksz = 0;
  VAR_10->dn_datablkszsec = 0;
  VAR_10->dn_datablkshift = 0;
 }
 VAR_10->dn_indblkshift = VAR_6->dn_indblkshift;
 VAR_10->dn_nlevels = VAR_6->dn_nlevels;
 VAR_10->dn_type = VAR_6->dn_type;
 VAR_10->dn_nblkptr = VAR_6->dn_nblkptr;
 VAR_10->dn_checksum = VAR_6->dn_checksum;
 VAR_10->dn_compress = VAR_6->dn_compress;
 VAR_10->dn_bonustype = VAR_6->dn_bonustype;
 VAR_10->dn_bonuslen = VAR_6->dn_bonuslen;
 VAR_10->dn_num_slots = VAR_6->dn_extra_slots + 1;
 VAR_10->dn_maxblkid = VAR_6->dn_maxblkid;
 VAR_10->dn_have_spill = ((VAR_6->dn_flags & VAR_1) != 0);
 VAR_10->dn_id_flags = 0;

 FUNC_5(&VAR_10->dn_zfetch, VAR_10);

 FUNC_0(FUNC_2(VAR_10->dn_phys->dn_type));
 FUNC_0(FUNC_12(&VAR_9->dnh_zrlock));
 FUNC_0(!FUNC_3(VAR_9->dnh_dnode));

 FUNC_10(&VAR_5->os_lock);
 if (!FUNC_1(VAR_8))
  FUNC_8(&VAR_5->os_dnodes, VAR_10);
 FUNC_9();





 VAR_10->dn_objset = VAR_5;

 VAR_9->dnh_dnode = VAR_10;
 FUNC_11(&VAR_5->os_lock);

 FUNC_4(sizeof (dnode_t), VAR_0);

 return (VAR_10);
}
