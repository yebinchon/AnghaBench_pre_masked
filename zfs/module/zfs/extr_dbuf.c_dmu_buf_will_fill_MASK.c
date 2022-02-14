
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ tx_txg; } ;
typedef TYPE_2__ dmu_tx_t ;
typedef int dmu_buf_t ;
struct TYPE_9__ {scalar_t__ db_object; } ;
struct TYPE_11__ {scalar_t__ db_blkid; scalar_t__ db_level; TYPE_1__ db; int db_holds; } ;
typedef TYPE_3__ dmu_buf_impl_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(dmu_buf_t *VAR_2, dmu_tx_t *VAR_3)
{
 dmu_buf_impl_t *VAR_4 = (dmu_buf_impl_t *)VAR_2;

 FUNC_0(VAR_4->db_blkid != VAR_0);
 FUNC_0(VAR_3->tx_txg != 0);
 FUNC_0(VAR_4->db_level == 0);
 FUNC_0(!FUNC_4(&VAR_4->db_holds));

 FUNC_0(VAR_4->db.db_object != VAR_1 ||
     FUNC_3(VAR_3));

 FUNC_2(VAR_4);
 (void) FUNC_1(VAR_4, VAR_3);
}
