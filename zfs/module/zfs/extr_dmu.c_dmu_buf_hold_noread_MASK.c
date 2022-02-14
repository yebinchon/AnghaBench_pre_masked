
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_8__ {int dn_struct_rwlock; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_buf_t ;
struct TYPE_9__ {int db; } ;
typedef TYPE_2__ dmu_buf_impl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ,void*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

int
FUNC_7(objset_t *VAR_3, uint64_t VAR_4, uint64_t VAR_5,
    void *VAR_6, dmu_buf_t **VAR_7)
{
 dnode_t *VAR_8;
 uint64_t VAR_9;
 dmu_buf_impl_t *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_1, &VAR_8);
 if (VAR_11)
  return (VAR_11);
 FUNC_5(&VAR_8->dn_struct_rwlock, VAR_2);
 VAR_9 = FUNC_2(VAR_8, 0, VAR_5);
 VAR_10 = FUNC_1(VAR_8, VAR_9, VAR_6);
 FUNC_6(&VAR_8->dn_struct_rwlock);
 FUNC_4(VAR_8, VAR_1);

 if (VAR_10 == ((void*)0)) {
  *VAR_7 = ((void*)0);
  return (FUNC_0(VAR_0));
 }

 *VAR_7 = &VAR_10->db;
 return (VAR_11);
}
