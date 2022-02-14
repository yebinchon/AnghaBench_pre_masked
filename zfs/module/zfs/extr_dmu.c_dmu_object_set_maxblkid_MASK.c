
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_5__ {int dn_struct_rwlock; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(objset_t *VAR_4, uint64_t VAR_5, uint64_t VAR_6,
    dmu_tx_t *VAR_7)
{
 dnode_t *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_2, &VAR_8);
 if (VAR_9)
  return (VAR_9);
 FUNC_3(&VAR_8->dn_struct_rwlock, VAR_3);
 FUNC_1(VAR_8, VAR_6, VAR_7, VAR_0, VAR_1);
 FUNC_4(&VAR_8->dn_struct_rwlock);
 FUNC_2(VAR_8, VAR_2);
 return (0);
}
