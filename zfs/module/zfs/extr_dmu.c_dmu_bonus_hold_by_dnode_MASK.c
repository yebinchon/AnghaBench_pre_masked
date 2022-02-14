
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int dn_struct_rwlock; int dn_dbufs_count; TYPE_2__* dn_bonus; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_buf_t ;
struct TYPE_11__ {int db; int db_holds; } ;
typedef TYPE_2__ dmu_buf_impl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int *,int) ;
 int FUNC_4 (TYPE_2__*,void*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,void*) ;

int FUNC_10(dnode_t *VAR_7, void *VAR_8, dmu_buf_t **VAR_9,
    uint32_t VAR_10)
{
 dmu_buf_impl_t *VAR_11;
 int VAR_12;
 uint32_t VAR_13 = VAR_0;

 if (VAR_10 & VAR_4)
  VAR_13 |= VAR_1;
 if (VAR_10 & VAR_3)
  VAR_13 |= VAR_2;

 FUNC_7(&VAR_7->dn_struct_rwlock, VAR_5);
 if (VAR_7->dn_bonus == ((void*)0)) {
  FUNC_8(&VAR_7->dn_struct_rwlock);
  FUNC_7(&VAR_7->dn_struct_rwlock, VAR_6);
  if (VAR_7->dn_bonus == ((void*)0))
   FUNC_2(VAR_7);
 }
 VAR_11 = VAR_7->dn_bonus;


 if (FUNC_9(&VAR_11->db_holds, VAR_8) == 1) {
  FUNC_0(FUNC_5(VAR_7, VAR_11));
  FUNC_1(&VAR_7->dn_dbufs_count);
 }






 FUNC_8(&VAR_7->dn_struct_rwlock);

 VAR_12 = FUNC_3(VAR_11, ((void*)0), VAR_13);
 if (VAR_12) {
  FUNC_6(VAR_7);
  FUNC_4(VAR_11, VAR_8);
  *VAR_9 = ((void*)0);
  return (VAR_12);
 }

 *VAR_9 = &VAR_11->db;
 return (0);
}
