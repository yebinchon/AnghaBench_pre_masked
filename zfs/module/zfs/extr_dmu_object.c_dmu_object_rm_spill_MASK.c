
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_8__ {int dn_struct_rwlock; TYPE_1__* dn_phys; } ;
typedef TYPE_2__ dnode_t ;
typedef int dmu_tx_t ;
struct TYPE_7__ {int dn_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int *,int ,int ,int ,int ,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

int
FUNC_6(objset_t *VAR_4, uint64_t VAR_5, dmu_tx_t *VAR_6)
{
 dnode_t *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_1, 0,
     VAR_2, &VAR_7);
 if (VAR_8)
  return (VAR_8);

 FUNC_4(&VAR_7->dn_struct_rwlock, VAR_3);
 if (VAR_7->dn_phys->dn_flags & VAR_0) {
  FUNC_0(VAR_7, VAR_6);
  FUNC_3(VAR_7, VAR_6);
 }
 FUNC_5(&VAR_7->dn_struct_rwlock);

 FUNC_2(VAR_7, VAR_2);
 return (VAR_8);
}
