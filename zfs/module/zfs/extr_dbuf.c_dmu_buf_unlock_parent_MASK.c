
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int db_objset; TYPE_1__* db_parent; } ;
typedef TYPE_2__ dmu_buf_impl_t ;
typedef scalar_t__ db_lock_type_t ;
struct TYPE_7__ {int ds_bp_rwlock; } ;
struct TYPE_5__ {int db_rwlock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(dmu_buf_impl_t *VAR_2, db_lock_type_t VAR_3, void *VAR_4)
{
 if (VAR_3 == VAR_1)
  FUNC_2(&VAR_2->db_parent->db_rwlock);
 else if (VAR_3 == VAR_0)
  FUNC_1(&FUNC_0(VAR_2->db_objset)->ds_bp_rwlock, VAR_4);
}
