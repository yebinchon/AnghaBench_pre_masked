
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_6__ {scalar_t__ dn_type; scalar_t__ dn_datablkszsec; scalar_t__ dn_bonuslen; int dn_extra_slots; scalar_t__ dn_indblkshift; int dn_nblkptr; int dn_flags; scalar_t__ dn_bonus; int dn_bonustype; void* dn_used; void* dn_maxblkid; int dn_blkptr; } ;
typedef TYPE_1__ dnode_phys_t ;
typedef size_t dmu_object_byteswap_t ;
typedef int blkptr_t ;
struct TYPE_7__ {int (* ob_func ) (scalar_t__,size_t) ;} ;


 int FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 TYPE_3__* VAR_4 ;
 int FUNC_10 (scalar_t__,size_t) ;

void
FUNC_11(dnode_phys_t *VAR_5)
{
 uint64_t *VAR_6 = (void*)&VAR_5->dn_blkptr;
 int VAR_7;

 if (VAR_5->dn_type == VAR_0) {
  FUNC_9(VAR_5, sizeof (dnode_phys_t));
  return;
 }

 VAR_5->dn_datablkszsec = FUNC_1(VAR_5->dn_datablkszsec);
 VAR_5->dn_bonuslen = FUNC_1(VAR_5->dn_bonuslen);
 VAR_5->dn_extra_slots = FUNC_3(VAR_5->dn_extra_slots);
 VAR_5->dn_maxblkid = FUNC_2(VAR_5->dn_maxblkid);
 VAR_5->dn_used = FUNC_2(VAR_5->dn_used);





 FUNC_0(VAR_5->dn_indblkshift <= VAR_3);
 FUNC_0(VAR_5->dn_nblkptr <= VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_5->dn_nblkptr * sizeof (blkptr_t)/8; VAR_7++)
  VAR_6[VAR_7] = FUNC_2(VAR_6[VAR_7]);






 if (VAR_5->dn_bonuslen != 0) {







  int VAR_8 = (VAR_5->dn_nblkptr-1) * sizeof (blkptr_t);
  int VAR_9 = VAR_5->dn_extra_slots + 1;
  size_t VAR_10 = FUNC_6(VAR_9) - VAR_8;
  dmu_object_byteswap_t VAR_11;
  FUNC_0(FUNC_5(VAR_5->dn_bonustype));
  VAR_11 = FUNC_4(VAR_5->dn_bonustype);
  VAR_4[VAR_11].ob_func(VAR_5->dn_bonus + VAR_8, VAR_10);
 }


 if (VAR_5->dn_flags & VAR_1)
  FUNC_8(FUNC_7(VAR_5), sizeof (blkptr_t));
}
