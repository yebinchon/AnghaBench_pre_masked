
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_6__ {int dn_struct_rwlock; TYPE_2__* dn_bonus; } ;
typedef TYPE_1__ dnode_t ;
struct TYPE_7__ {int db_mtx; } ;
typedef TYPE_2__ dmu_buf_impl_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static dmu_buf_impl_t *
FUNC_5(objset_t *VAR_2, uint64_t VAR_3)
{
 dnode_t *VAR_4;
 dmu_buf_impl_t *VAR_5 = ((void*)0);

 if (FUNC_0(VAR_2, VAR_3, VAR_0, &VAR_4) == 0) {
  FUNC_3(&VAR_4->dn_struct_rwlock, VAR_1);
  if (VAR_4->dn_bonus != ((void*)0)) {
   VAR_5 = VAR_4->dn_bonus;
   FUNC_2(&VAR_5->db_mtx);
  }
  FUNC_4(&VAR_4->dn_struct_rwlock);
  FUNC_1(VAR_4, VAR_0);
 }
 return (VAR_5);
}
