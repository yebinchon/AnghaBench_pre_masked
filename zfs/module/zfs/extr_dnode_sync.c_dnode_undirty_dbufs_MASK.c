
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int list_t ;
struct TYPE_14__ {scalar_t__ db_level; int db_dirtycnt; scalar_t__ db_blkid; scalar_t__ db_buf; TYPE_5__* db_last_dirty; int db_mtx; } ;
typedef TYPE_4__ dmu_buf_impl_t ;
struct TYPE_12__ {int dr_children; int dr_mtx; } ;
struct TYPE_11__ {scalar_t__ dr_data; } ;
struct TYPE_13__ {TYPE_2__ di; TYPE_1__ dl; } ;
struct TYPE_15__ {TYPE_3__ dt; scalar_t__ dr_txg; TYPE_4__* dr_dbuf; } ;
typedef TYPE_5__ dbuf_dirty_record_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_4__*,void*,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (int *) ;
 TYPE_5__* FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_5__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(list_t *VAR_2)
{
 dbuf_dirty_record_t *VAR_3;

 while ((VAR_3 = FUNC_5(VAR_2))) {
  dmu_buf_impl_t *VAR_4 = VAR_3->dr_dbuf;
  uint64_t VAR_5 = VAR_3->dr_txg;

  if (VAR_4->db_level != 0)
   FUNC_9(&VAR_3->dt.di.dr_children);

  FUNC_8(&VAR_4->db_mtx);

  FUNC_6(VAR_2, VAR_3);
  FUNC_0(VAR_4->db_last_dirty == VAR_3);
  VAR_4->db_last_dirty = ((void*)0);
  VAR_4->db_dirtycnt -= 1;
  if (VAR_4->db_level == 0) {
   FUNC_0(VAR_4->db_blkid == VAR_1 ||
       VAR_3->dt.dl.dr_data == VAR_4->db_buf);
   FUNC_2(VAR_3);
  } else {
   FUNC_7(&VAR_3->dt.di.dr_mtx);
   FUNC_4(&VAR_3->dt.di.dr_children);
  }
  FUNC_3(VAR_3, sizeof (dbuf_dirty_record_t));
  FUNC_1(VAR_4, (void *)(uintptr_t)VAR_5, VAR_0);
 }
}
