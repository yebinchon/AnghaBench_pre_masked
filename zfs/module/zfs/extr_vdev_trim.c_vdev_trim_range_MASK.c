
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ vdev_trim_rate; scalar_t__* vdev_trim_inflight; scalar_t__* vdev_trim_offset; size_t vdev_guid; int vdev_trim_lock; TYPE_3__* vdev_spa; int vdev_trim_io_lock; int vdev_top; int vdev_trim_io_cv; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_16__ {size_t trim_type; size_t trim_bytes_done; int trim_flags; TYPE_1__* trim_vdev; } ;
typedef TYPE_2__ trim_args_t ;
struct TYPE_17__ {int * spa_txg_zio; } ;
typedef TYPE_3__ spa_t ;
typedef int dmu_tx_t ;
struct TYPE_18__ {int dp_mos_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,int *,scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 (TYPE_8__*,int ,size_t*,int,int ,int *) ;
 size_t* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_3__*,int ,TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_3__*,int ,TYPE_1__*) ;
 TYPE_8__* FUNC_16 (TYPE_3__*) ;
 int VAR_11 ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (TYPE_2__*) ;
 int VAR_12 ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,TYPE_1__*,size_t,size_t,int ,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_22(trim_args_t *VAR_15, uint64_t VAR_16, uint64_t VAR_17)
{
 vdev_t *VAR_18 = VAR_15->trim_vdev;
 spa_t *VAR_19 = VAR_18->vdev_spa;

 FUNC_12(&VAR_18->vdev_trim_io_lock);





 if (VAR_15->trim_type == VAR_5) {
  while (VAR_18->vdev_trim_rate != 0 && !FUNC_19(VAR_18) &&
      FUNC_18(VAR_15) > VAR_18->vdev_trim_rate) {
   FUNC_3(&VAR_18->vdev_trim_io_cv,
       &VAR_18->vdev_trim_io_lock, FUNC_5() +
       FUNC_0(10));
  }
 }
 VAR_15->trim_bytes_done += VAR_17;


 while (VAR_18->vdev_trim_inflight[0] + VAR_18->vdev_trim_inflight[1] >=
     VAR_14) {
  FUNC_4(&VAR_18->vdev_trim_io_cv, &VAR_18->vdev_trim_io_lock);
 }
 VAR_18->vdev_trim_inflight[VAR_15->trim_type]++;
 FUNC_13(&VAR_18->vdev_trim_io_lock);

 dmu_tx_t *VAR_20 = FUNC_8(FUNC_16(VAR_19)->dp_mos_dir);
 FUNC_2(FUNC_6(VAR_20, VAR_7));
 uint64_t VAR_21 = FUNC_9(VAR_20);

 FUNC_14(VAR_19, VAR_3, VAR_18, VAR_2);
 FUNC_12(&VAR_18->vdev_trim_lock);

 if (VAR_15->trim_type == VAR_5 &&
     VAR_18->vdev_trim_offset[VAR_21 & VAR_6] == 0) {
  uint64_t *VAR_22 = FUNC_11(sizeof (uint64_t), VAR_1);
  *VAR_22 = VAR_18->vdev_guid;


  FUNC_10(FUNC_16(VAR_19),
      VAR_13, VAR_22, 2,
      VAR_8, VAR_20);
 }





 if ((VAR_15->trim_type == VAR_5 &&
     FUNC_19(VAR_18)) ||
     (VAR_15->trim_type == VAR_4 &&
     FUNC_17(VAR_18->vdev_top))) {
  FUNC_12(&VAR_18->vdev_trim_io_lock);
  VAR_18->vdev_trim_inflight[VAR_15->trim_type]--;
  FUNC_13(&VAR_18->vdev_trim_io_lock);
  FUNC_15(VAR_18->vdev_spa, VAR_3, VAR_18);
  FUNC_13(&VAR_18->vdev_trim_lock);
  FUNC_7(VAR_20);
  return (FUNC_1(VAR_0));
 }
 FUNC_13(&VAR_18->vdev_trim_lock);

 if (VAR_15->trim_type == VAR_5)
  VAR_18->vdev_trim_offset[VAR_21 & VAR_6] = VAR_16 + VAR_17;

 FUNC_20(FUNC_21(VAR_19->spa_txg_zio[VAR_21 & VAR_6], VAR_18,
     VAR_16, VAR_17, VAR_15->trim_type == VAR_5 ?
     VAR_12 : VAR_11, ((void*)0),
     VAR_10, VAR_9, VAR_15->trim_flags));


 FUNC_7(VAR_20);

 return (0);
}
