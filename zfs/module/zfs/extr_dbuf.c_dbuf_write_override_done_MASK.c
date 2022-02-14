
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int * io_abd; int io_txg; int io_spa; int io_bp; TYPE_5__* io_private; } ;
typedef TYPE_3__ zio_t ;
struct TYPE_13__ {int db_mtx; } ;
typedef TYPE_4__ dmu_buf_impl_t ;
struct TYPE_10__ {int dr_data; int dr_overridden_by; } ;
struct TYPE_11__ {TYPE_1__ dl; } ;
struct TYPE_14__ {TYPE_2__ dt; TYPE_4__* dr_dbuf; } ;
typedef TYPE_5__ dbuf_dirty_record_t ;
typedef int blkptr_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,int *,TYPE_4__*) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(zio_t *VAR_0)
{
 dbuf_dirty_record_t *VAR_1 = VAR_0->io_private;
 dmu_buf_impl_t *VAR_2 = VAR_1->dr_dbuf;
 blkptr_t *VAR_3 = &VAR_1->dt.dl.dr_overridden_by;

 FUNC_6(&VAR_2->db_mtx);
 if (!FUNC_0(VAR_0->io_bp, VAR_3)) {
  if (!FUNC_1(VAR_3))
   FUNC_5(FUNC_8(VAR_0->io_spa), VAR_0->io_txg, VAR_3);
  FUNC_3(VAR_1->dt.dl.dr_data, VAR_2);
 }
 FUNC_7(&VAR_2->db_mtx);

 FUNC_4(VAR_0, ((void*)0), VAR_2);

 if (VAR_0->io_abd != ((void*)0))
  FUNC_2(VAR_0->io_abd);
}
