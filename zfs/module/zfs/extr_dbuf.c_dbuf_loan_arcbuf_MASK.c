
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int spa_t ;
struct TYPE_13__ {int db_size; int db_data; } ;
struct TYPE_14__ {scalar_t__ db_blkid; int db_mtx; TYPE_4__* db_buf; TYPE_2__ db; TYPE_1__* db_objset; int db_holds; } ;
typedef TYPE_3__ dmu_buf_impl_t ;
struct TYPE_15__ {int b_data; } ;
typedef TYPE_4__ arc_buf_t ;
struct TYPE_12__ {int * os_spa; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

arc_buf_t *
FUNC_9(dmu_buf_impl_t *VAR_2)
{
 arc_buf_t *VAR_3;

 FUNC_0(VAR_2->db_blkid != VAR_1);
 FUNC_6(&VAR_2->db_mtx);
 if (FUNC_3(VAR_2->db_buf) || FUNC_8(&VAR_2->db_holds) > 1) {
  int VAR_4 = VAR_2->db.db_size;
  spa_t *VAR_5 = VAR_2->db_objset->os_spa;

  FUNC_7(&VAR_2->db_mtx);
  VAR_3 = FUNC_1(VAR_5, VAR_0, VAR_4);
  FUNC_4(VAR_2->db.db_data, VAR_3->b_data, VAR_4);
 } else {
  VAR_3 = VAR_2->db_buf;
  FUNC_2(VAR_3, VAR_2);
  VAR_2->db_buf = ((void*)0);
  FUNC_5(VAR_2);
  FUNC_7(&VAR_2->db_mtx);
 }
 return (VAR_3);
}
