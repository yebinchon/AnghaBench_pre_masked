
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int dn_struct_rwlock; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_buf_t ;
struct TYPE_8__ {int db; } ;
typedef TYPE_2__ dmu_buf_impl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ,void*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(dnode_t *VAR_2, uint64_t VAR_3,
    void *VAR_4, dmu_buf_t **VAR_5)
{
 uint64_t VAR_6;
 dmu_buf_impl_t *VAR_7;

 FUNC_3(&VAR_2->dn_struct_rwlock, VAR_1);
 VAR_6 = FUNC_2(VAR_2, 0, VAR_3);
 VAR_7 = FUNC_1(VAR_2, VAR_6, VAR_4);
 FUNC_4(&VAR_2->dn_struct_rwlock);

 if (VAR_7 == ((void*)0)) {
  *VAR_5 = ((void*)0);
  return (FUNC_0(VAR_0));
 }

 *VAR_5 = &VAR_7->db;
 return (0);
}
