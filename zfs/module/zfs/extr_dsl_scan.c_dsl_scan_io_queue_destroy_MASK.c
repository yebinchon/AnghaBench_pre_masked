
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int scan_io_t ;
typedef int int64_t ;
struct TYPE_8__ {int scn_bytes_pending; } ;
typedef TYPE_2__ dsl_scan_t ;
struct TYPE_9__ {int q_zio_cv; int q_sios_by_addr; int q_exts_by_addr; int q_sio_memused; TYPE_1__* q_vd; TYPE_2__* q_scn; } ;
typedef TYPE_3__ dsl_scan_io_queue_t ;
struct TYPE_7__ {int vdev_scan_io_queue_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,void**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (int ,int ,scalar_t__) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *,TYPE_3__*) ;
 int FUNC_14 (int *) ;

void
FUNC_15(dsl_scan_io_queue_t *VAR_0)
{
 dsl_scan_t *VAR_1 = VAR_0->q_scn;
 scan_io_t *VAR_2;
 void *VAR_3 = ((void*)0);
 int64_t VAR_4 = 0;

 FUNC_0(FUNC_2(&VAR_0->q_vd->vdev_scan_io_queue_lock));

 while ((VAR_2 = FUNC_8(&VAR_0->q_sios_by_addr, &VAR_3)) !=
     ((void*)0)) {
  FUNC_0(FUNC_11(VAR_0->q_exts_by_addr,
      FUNC_5(VAR_2), FUNC_3(VAR_2)));
  VAR_4 += FUNC_3(VAR_2);
  VAR_0->q_sio_memused -= FUNC_4(VAR_2);
  FUNC_14(VAR_2);
 }

 FUNC_1(VAR_0->q_sio_memused);
 FUNC_6(&VAR_1->scn_bytes_pending, -VAR_4);
 FUNC_13(VAR_0->q_exts_by_addr, ((void*)0), VAR_0);
 FUNC_12(VAR_0->q_exts_by_addr);
 FUNC_7(&VAR_0->q_sios_by_addr);
 FUNC_9(&VAR_0->q_zio_cv);

 FUNC_10(VAR_0, sizeof (*VAR_0));
}
