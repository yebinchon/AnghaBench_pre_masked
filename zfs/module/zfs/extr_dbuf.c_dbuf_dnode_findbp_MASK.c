
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_6__ {TYPE_1__* dn_phys; int dn_struct_rwlock; } ;
typedef TYPE_2__ dnode_t ;
typedef int dmu_buf_impl_t ;
typedef int blkptr_t ;
struct TYPE_5__ {int dn_indblkshift; int dn_datablkszsec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int **,int **) ;
 int FUNC_3 (int *,int *) ;

int
FUNC_4(dnode_t *VAR_1, uint64_t VAR_2, uint64_t VAR_3,
    blkptr_t *VAR_4, uint16_t *VAR_5, uint8_t *VAR_6)
{
 dmu_buf_impl_t *VAR_7 = ((void*)0);
 blkptr_t *VAR_8;
 int VAR_9 = 0;
 FUNC_0(FUNC_1(&VAR_1->dn_struct_rwlock));

 VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_0, &VAR_7, &VAR_8);
 if (VAR_9 == 0) {
  *VAR_4 = *VAR_8;
  if (VAR_7 != ((void*)0))
   FUNC_3(VAR_7, ((void*)0));
  if (VAR_5 != ((void*)0))
   *VAR_5 = VAR_1->dn_phys->dn_datablkszsec;
  if (VAR_6 != ((void*)0))
   *VAR_6 = VAR_1->dn_phys->dn_indblkshift;
 }

 return (VAR_9);
}
