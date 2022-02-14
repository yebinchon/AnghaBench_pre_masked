
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int krw_t ;
typedef enum db_lock_type { ____Placeholder_db_lock_type } db_lock_type ;
struct TYPE_6__ {int db_objset; TYPE_1__* db_parent; } ;
typedef TYPE_2__ dmu_buf_impl_t ;
typedef int db_lock_type_t ;
struct TYPE_7__ {int ds_bp_rwlock; } ;
struct TYPE_5__ {int db_rwlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,void*) ;
 int FUNC_2 (int *,int ) ;

db_lock_type_t
FUNC_3(dmu_buf_impl_t *VAR_3, krw_t VAR_4, void *VAR_5)
{
 enum db_lock_type VAR_6 = VAR_0;
 if (VAR_3->db_parent != ((void*)0)) {
  FUNC_2(&VAR_3->db_parent->db_rwlock, VAR_4);
  VAR_6 = VAR_2;
 } else if (FUNC_0(VAR_3->db_objset) != ((void*)0)) {
  FUNC_1(&FUNC_0(VAR_3->db_objset)->ds_bp_rwlock, VAR_4,
      VAR_5);
  VAR_6 = VAR_1;
 }




 return (VAR_6);
}
