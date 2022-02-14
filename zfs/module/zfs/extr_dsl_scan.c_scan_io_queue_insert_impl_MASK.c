
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int scan_io_t ;
typedef int int64_t ;
struct TYPE_6__ {int scn_bytes_pending; } ;
typedef TYPE_2__ dsl_scan_t ;
struct TYPE_7__ {int q_exts_by_addr; int q_sio_memused; int q_sios_by_addr; TYPE_1__* q_vd; TYPE_2__* q_scn; } ;
typedef TYPE_3__ dsl_scan_io_queue_t ;
typedef int avl_index_t ;
struct TYPE_5__ {int vdev_scan_io_queue_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(dsl_scan_io_queue_t *VAR_0, scan_io_t *VAR_1)
{
 avl_index_t VAR_2;
 int64_t VAR_3 = FUNC_2(VAR_1);
 dsl_scan_t *VAR_4 = VAR_0->q_scn;

 FUNC_0(FUNC_1(&VAR_0->q_vd->vdev_scan_io_queue_lock));

 if (FUNC_6(&VAR_0->q_sios_by_addr, VAR_1, &VAR_2) != ((void*)0)) {

  FUNC_5(&VAR_4->scn_bytes_pending, -VAR_3);
  FUNC_9(VAR_1);
  return;
 }
 FUNC_7(&VAR_0->q_sios_by_addr, VAR_1, VAR_2);
 VAR_0->q_sio_memused += FUNC_3(VAR_1);
 FUNC_8(VAR_0->q_exts_by_addr, FUNC_4(VAR_1), VAR_3);
}
