
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ zv_open_count; scalar_t__ zv_volsize; TYPE_3__* zv_zso; int zv_suspend_lock; int zv_dn; } ;
typedef TYPE_4__ zvol_state_t ;
struct TYPE_14__ {int lr; TYPE_4__* zv; struct bio* bio; } ;
typedef TYPE_5__ zv_request_t ;
struct TYPE_10__ {int member_0; } ;
struct TYPE_15__ {scalar_t__ uio_resid; scalar_t__ uio_loffset; int member_1; TYPE_1__ member_0; } ;
typedef TYPE_6__ uio_t ;
typedef scalar_t__ uint64_t ;
struct bio {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ int64_t ;
struct TYPE_12__ {TYPE_2__* zvo_disk; int zvo_queue; int zvo_kstat; } ;
struct TYPE_11__ {int part0; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bio*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (int ,int ,int *,unsigned long) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int ,TYPE_6__*,scalar_t__) ;
 unsigned long VAR_4 ;
 int FUNC_9 (TYPE_5__*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (TYPE_6__*,struct bio*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(void *VAR_5)
{
 int VAR_6 = 0;

 zv_request_t *VAR_7 = VAR_5;
 struct bio *VAR_8 = VAR_7->bio;
 uio_t VAR_9 = { 0 , 0 };
 FUNC_12(&VAR_9, VAR_8);

 zvol_state_t *VAR_10 = VAR_7->zv;
 FUNC_0(VAR_10 && VAR_10->zv_open_count > 0);

 ssize_t VAR_11 = VAR_9.uio_resid;
 unsigned long VAR_12 = VAR_4;
 FUNC_6(VAR_10->zv_zso->zvo_queue, VAR_3, FUNC_4(VAR_8),
     &VAR_10->zv_zso->zvo_disk->part0);

 uint64_t VAR_13 = VAR_10->zv_volsize;
 while (VAR_9.uio_resid > 0 && VAR_9.uio_loffset < VAR_13) {
  uint64_t VAR_14 = FUNC_2(VAR_9.uio_resid, VAR_0 >> 1);


  if (VAR_14 > VAR_13 - VAR_9.uio_loffset)
   VAR_14 = VAR_13 - VAR_9.uio_loffset;

  VAR_6 = FUNC_8(VAR_10->zv_dn, &VAR_9, VAR_14);
  if (VAR_6) {

   if (VAR_6 == VAR_1)
    VAR_6 = FUNC_3(VAR_2);
   break;
  }
 }
 FUNC_13(VAR_7->lr);

 int64_t VAR_15 = VAR_11 - VAR_9.uio_resid;
 FUNC_7(&VAR_10->zv_zso->zvo_kstat, VAR_15);
 FUNC_11(VAR_15);

 FUNC_10(&VAR_10->zv_suspend_lock);
 FUNC_5(VAR_10->zv_zso->zvo_queue, VAR_3,
     &VAR_10->zv_zso->zvo_disk->part0, VAR_12);
 FUNC_1(VAR_8, -VAR_6);
 FUNC_9(VAR_7, sizeof (zv_request_t));
}
