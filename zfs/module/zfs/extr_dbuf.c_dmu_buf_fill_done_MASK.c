
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dmu_tx_t ;
typedef int dmu_buf_t ;
struct TYPE_4__ {int db_size; int db_data; } ;
struct TYPE_5__ {scalar_t__ db_state; scalar_t__ db_level; scalar_t__ db_blkid; int db_mtx; int db_changed; scalar_t__ db_freed_in_flight; TYPE_1__ db; } ;
typedef TYPE_2__ dmu_buf_impl_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(dmu_buf_t *VAR_4, dmu_tx_t *VAR_5)
{
 dmu_buf_impl_t *VAR_6 = (dmu_buf_impl_t *)VAR_4;
 FUNC_4(&VAR_6->db_mtx);
 FUNC_1(VAR_6);

 if (VAR_6->db_state == VAR_1) {
  if (VAR_6->db_level == 0 && VAR_6->db_freed_in_flight) {
   FUNC_0(VAR_6->db_blkid != VAR_2);


   FUNC_2(VAR_6->db.db_data, VAR_6->db.db_size);
   VAR_6->db_freed_in_flight = VAR_3;
  }
  VAR_6->db_state = VAR_0;
  FUNC_3(&VAR_6->db_changed);
 }
 FUNC_5(&VAR_6->db_mtx);
}
