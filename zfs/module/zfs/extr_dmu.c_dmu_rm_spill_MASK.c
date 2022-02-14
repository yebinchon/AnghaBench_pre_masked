
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_6__ {int dn_struct_rwlock; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

int
FUNC_6(objset_t *VAR_2, uint64_t VAR_3, dmu_tx_t *VAR_4)
{
 dnode_t *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_0, &VAR_5);
 FUNC_0(VAR_5, VAR_4);
 FUNC_4(&VAR_5->dn_struct_rwlock, VAR_1);
 FUNC_3(VAR_5, VAR_4);
 FUNC_5(&VAR_5->dn_struct_rwlock);
 FUNC_2(VAR_5, VAR_0);
 return (VAR_6);
}
