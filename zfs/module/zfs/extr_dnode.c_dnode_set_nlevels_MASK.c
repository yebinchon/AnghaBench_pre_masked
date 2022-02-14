
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dn_nlevels; int dn_struct_rwlock; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(dnode_t *VAR_2, int VAR_3, dmu_tx_t *VAR_4)
{
 int VAR_5 = 0;

 FUNC_2(&VAR_2->dn_struct_rwlock, VAR_1);

 if (VAR_2->dn_nlevels == VAR_3) {
  VAR_5 = 0;
  goto out;
 } else if (VAR_3 < VAR_2->dn_nlevels) {
  VAR_5 = FUNC_0(VAR_0);
  goto out;
 }

 FUNC_1(VAR_2, VAR_3, VAR_4);

out:
 FUNC_3(&VAR_2->dn_struct_rwlock);
 return (VAR_5);
}
