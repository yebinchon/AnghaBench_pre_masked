
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
struct TYPE_12__ {int sio_flags; int sio_zb; } ;
typedef TYPE_2__ scan_io_t ;
struct TYPE_13__ {int scn_bytes_pending; } ;
typedef TYPE_3__ dsl_scan_t ;
struct TYPE_14__ {TYPE_1__* q_vd; TYPE_3__* q_scn; } ;
typedef TYPE_4__ dsl_scan_io_queue_t ;
typedef int blkptr_t ;
struct TYPE_11__ {int vdev_scan_io_queue_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int const*,TYPE_2__*,int) ;
 int FUNC_8 (TYPE_4__*,TYPE_2__*) ;
 TYPE_2__* FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(dsl_scan_io_queue_t *VAR_0, const blkptr_t *VAR_1, int VAR_2,
    int VAR_3, const zbookmark_phys_t *VAR_4)
{
 dsl_scan_t *VAR_5 = VAR_0->q_scn;
 scan_io_t *VAR_6 = FUNC_9(FUNC_2(VAR_1));

 FUNC_1(FUNC_3(VAR_1));
 FUNC_0(FUNC_4(&VAR_0->q_vd->vdev_scan_io_queue_lock));

 FUNC_7(VAR_1, VAR_6, VAR_2);
 VAR_6->sio_flags = VAR_3;
 VAR_6->sio_zb = *VAR_4;






 FUNC_6(&VAR_5->scn_bytes_pending, FUNC_5(VAR_6));

 FUNC_8(VAR_0, VAR_6);
}
