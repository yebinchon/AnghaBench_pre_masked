
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tx_txg; } ;
typedef TYPE_1__ dmu_tx_t ;
typedef int dmu_buf_t ;
struct TYPE_6__ {int db_mtx; TYPE_3__* db_last_dirty; } ;
typedef TYPE_2__ dmu_buf_impl_t ;
struct TYPE_7__ {scalar_t__ dr_txg; struct TYPE_7__* dr_next; } ;
typedef TYPE_3__ dbuf_dirty_record_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

boolean_t
FUNC_2(dmu_buf_t *VAR_2, dmu_tx_t *VAR_3)
{
 dmu_buf_impl_t *VAR_4 = (dmu_buf_impl_t *)VAR_2;

 FUNC_0(&VAR_4->db_mtx);
 for (dbuf_dirty_record_t *VAR_5 = VAR_4->db_last_dirty;
     VAR_5 != ((void*)0) && VAR_5->dr_txg >= VAR_3->tx_txg; VAR_5 = VAR_5->dr_next) {
  if (VAR_5->dr_txg == VAR_3->tx_txg) {
   FUNC_1(&VAR_4->db_mtx);
   return (VAR_1);
  }
 }
 FUNC_1(&VAR_4->db_mtx);
 return (VAR_0);
}
