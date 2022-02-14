
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ zv_open_count; scalar_t__ zv_volsize; TYPE_2__* zv_zso; int zv_suspend_lock; int * zv_zilog; TYPE_7__* zv_objset; int zv_volblocksize; } ;
typedef TYPE_3__ zvol_state_t ;
struct TYPE_12__ {int lr; TYPE_3__* zv; struct bio* bio; } ;
typedef TYPE_4__ zv_request_t ;
typedef scalar_t__ uint64_t ;
struct bio {int dummy; } ;
typedef int dmu_tx_t ;
typedef int boolean_t ;
struct TYPE_13__ {scalar_t__ os_sync; } ;
struct TYPE_10__ {TYPE_1__* zvo_disk; int zvo_queue; } ;
struct TYPE_9__ {int part0; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct bio*) ;
 int FUNC_8 (struct bio*) ;
 int FUNC_9 (struct bio*) ;
 int FUNC_10 (int ,int ,int *,unsigned long) ;
 int FUNC_11 (int ,int ,int ,int *) ;
 int FUNC_12 (TYPE_7__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (TYPE_7__*) ;
 int FUNC_17 (int *) ;
 unsigned long VAR_6 ;
 int FUNC_18 (TYPE_4__*,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (TYPE_3__*,int *,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_23(void *VAR_7)
{
 zv_request_t *VAR_8 = VAR_7;
 struct bio *VAR_9 = VAR_8->bio;
 zvol_state_t *VAR_10 = VAR_8->zv;
 uint64_t VAR_11 = FUNC_1(VAR_9) << 9;
 uint64_t VAR_12 = FUNC_2(VAR_9);
 uint64_t VAR_13 = VAR_11 + VAR_12;
 boolean_t VAR_14;
 int VAR_15 = 0;
 dmu_tx_t *VAR_16;
 unsigned long VAR_17;

 FUNC_0(VAR_10 && VAR_10->zv_open_count > 0);
 FUNC_0(VAR_10->zv_zilog != ((void*)0));

 VAR_17 = VAR_6;
 FUNC_11(VAR_10->zv_zso->zvo_queue, VAR_3,
     FUNC_9(VAR_9), &VAR_10->zv_zso->zvo_disk->part0);

 VAR_14 = FUNC_7(VAR_9) || VAR_10->zv_objset->os_sync == VAR_4;

 if (VAR_13 > VAR_10->zv_volsize) {
  VAR_15 = FUNC_6(VAR_1);
  goto unlock;
 }







 if (!FUNC_8(VAR_9)) {
  VAR_11 = FUNC_5(VAR_11, VAR_10->zv_volblocksize);
  VAR_13 = FUNC_4(VAR_13, VAR_10->zv_volblocksize);
  VAR_12 = VAR_13 - VAR_11;
 }

 if (VAR_11 >= VAR_13)
  goto unlock;

 VAR_16 = FUNC_16(VAR_10->zv_objset);
 FUNC_17(VAR_16);
 VAR_15 = FUNC_14(VAR_16, VAR_2);
 if (VAR_15 != 0) {
  FUNC_13(VAR_16);
 } else {
  FUNC_22(VAR_10, VAR_16, VAR_11, VAR_12, VAR_0);
  FUNC_15(VAR_16);
  VAR_15 = FUNC_12(VAR_10->zv_objset,
      VAR_5, VAR_11, VAR_12);
 }
unlock:
 FUNC_20(VAR_8->lr);

 if (VAR_15 == 0 && VAR_14)
  FUNC_21(VAR_10->zv_zilog, VAR_5);

 FUNC_19(&VAR_10->zv_suspend_lock);
 FUNC_10(VAR_10->zv_zso->zvo_queue, VAR_3,
     &VAR_10->zv_zso->zvo_disk->part0, VAR_17);
 FUNC_3(VAR_9, -VAR_15);
 FUNC_18(VAR_8, sizeof (zv_request_t));
}
