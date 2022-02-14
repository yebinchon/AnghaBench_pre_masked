
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_16__ {scalar_t__ zv_open_count; scalar_t__ zv_volsize; TYPE_3__* zv_zso; int zv_suspend_lock; int * zv_zilog; int zv_dn; TYPE_11__* zv_objset; } ;
typedef TYPE_4__ zvol_state_t ;
struct TYPE_17__ {int lr; TYPE_4__* zv; struct bio* bio; } ;
typedef TYPE_5__ zv_request_t ;
struct TYPE_13__ {int member_0; } ;
struct TYPE_18__ {scalar_t__ uio_resid; scalar_t__ uio_loffset; int member_1; TYPE_1__ member_0; } ;
typedef TYPE_6__ uio_t ;
typedef scalar_t__ uint64_t ;
struct bio {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ int64_t ;
typedef int dmu_tx_t ;
typedef int boolean_t ;
struct TYPE_15__ {TYPE_2__* zvo_disk; int zvo_queue; int zvo_kstat; } ;
struct TYPE_14__ {int part0; } ;
struct TYPE_12__ {scalar_t__ os_sync; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bio*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (int ,int ,int *,unsigned long) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (TYPE_11__*) ;
 int FUNC_12 (int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_13 (int ,TYPE_6__*,scalar_t__,int *) ;
 unsigned long VAR_5 ;
 int FUNC_14 (TYPE_5__*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (TYPE_6__*,struct bio*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (TYPE_4__*,int *,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_21(void *VAR_6)
{
 int VAR_7 = 0;

 zv_request_t *VAR_8 = VAR_6;
 struct bio *VAR_9 = VAR_8->bio;
 uio_t VAR_10 = { 0 , 0 };
 FUNC_17(&VAR_10, VAR_9);

 zvol_state_t *VAR_11 = VAR_8->zv;
 FUNC_0(VAR_11 && VAR_11->zv_open_count > 0);
 FUNC_0(VAR_11->zv_zilog != ((void*)0));

 ssize_t VAR_12 = VAR_10.uio_resid;
 unsigned long VAR_13 = VAR_5;
 FUNC_6(VAR_11->zv_zso->zvo_queue, VAR_2,
     FUNC_4(VAR_9), &VAR_11->zv_zso->zvo_disk->part0);

 boolean_t VAR_14 =
     FUNC_3(VAR_9) || VAR_11->zv_objset->os_sync == VAR_3;

 uint64_t VAR_15 = VAR_11->zv_volsize;
 while (VAR_10.uio_resid > 0 && VAR_10.uio_loffset < VAR_15) {
  uint64_t VAR_16 = FUNC_2(VAR_10.uio_resid, VAR_0 >> 1);
  uint64_t VAR_17 = VAR_10.uio_loffset;
  dmu_tx_t *VAR_18 = FUNC_11(VAR_11->zv_objset);

  if (VAR_16 > VAR_15 - VAR_17)
   VAR_16 = VAR_15 - VAR_17;

  FUNC_12(VAR_18, VAR_4, VAR_17, VAR_16);


  VAR_7 = FUNC_9(VAR_18, VAR_1);
  if (VAR_7) {
   FUNC_8(VAR_18);
   break;
  }
  VAR_7 = FUNC_13(VAR_11->zv_dn, &VAR_10, VAR_16, VAR_18);
  if (VAR_7 == 0) {
   FUNC_20(VAR_11, VAR_18, VAR_17, VAR_16, VAR_14);
  }
  FUNC_10(VAR_18);

  if (VAR_7)
   break;
 }
 FUNC_18(VAR_8->lr);

 int64_t VAR_19 = VAR_12 - VAR_10.uio_resid;
 FUNC_7(&VAR_11->zv_zso->zvo_kstat, VAR_19);
 FUNC_16(VAR_19);

 if (VAR_14)
  FUNC_19(VAR_11->zv_zilog, VAR_4);

 FUNC_15(&VAR_11->zv_suspend_lock);
 FUNC_5(VAR_11->zv_zso->zvo_queue,
     VAR_2, &VAR_11->zv_zso->zvo_disk->part0, VAR_13);
 FUNC_1(VAR_9, -VAR_7);
 FUNC_14(VAR_8, sizeof (zv_request_t));
}
