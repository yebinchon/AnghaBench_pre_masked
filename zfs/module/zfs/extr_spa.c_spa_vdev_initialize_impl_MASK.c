
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ vdev_initialize_state; int vdev_initialize_lock; TYPE_2__* vdev_top; int * vdev_initialize_thread; TYPE_1__* vdev_ops; scalar_t__ vdev_detached; } ;
typedef TYPE_3__ vdev_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int list_t ;
struct TYPE_10__ {scalar_t__ vdev_removing; } ;
struct TYPE_9__ {int vdev_op_leaf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;



 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,unsigned long long) ;
 int FUNC_6 (int *,int,int ,int ) ;
 int FUNC_7 (int *,int,int ) ;
 TYPE_3__* FUNC_8 (int *,int,int ) ;
 int VAR_13 ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,scalar_t__,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_13(spa_t *VAR_14, uint64_t VAR_15, uint64_t VAR_16,
    list_t *VAR_17)
{
 FUNC_0(FUNC_1(&VAR_13));

 FUNC_6(VAR_14, VAR_8 | VAR_9, VAR_6, VAR_7);


 vdev_t *VAR_18 = FUNC_8(VAR_14, VAR_15, VAR_0);
 if (VAR_18 == ((void*)0) || VAR_18->vdev_detached) {
  FUNC_7(VAR_14, VAR_8 | VAR_9, VAR_6);
  return (FUNC_2(VAR_3));
 } else if (!VAR_18->vdev_ops->vdev_op_leaf || !FUNC_11(VAR_18)) {
  FUNC_7(VAR_14, VAR_8 | VAR_9, VAR_6);
  return (FUNC_2(VAR_2));
 } else if (!FUNC_12(VAR_18)) {
  FUNC_7(VAR_14, VAR_8 | VAR_9, VAR_6);
  return (FUNC_2(VAR_4));
 }
 FUNC_3(&VAR_18->vdev_initialize_lock);
 FUNC_7(VAR_14, VAR_8 | VAR_9, VAR_6);
 if (VAR_16 == 129 &&
     (VAR_18->vdev_initialize_thread != ((void*)0) ||
     VAR_18->vdev_top->vdev_removing)) {
  FUNC_4(&VAR_18->vdev_initialize_lock);
  return (FUNC_2(VAR_1));
 } else if (VAR_16 == 130 &&
     (VAR_18->vdev_initialize_state != VAR_10 &&
     VAR_18->vdev_initialize_state != VAR_12)) {
  FUNC_4(&VAR_18->vdev_initialize_lock);
  return (FUNC_2(VAR_5));
 } else if (VAR_16 == 128 &&
     VAR_18->vdev_initialize_state != VAR_10) {
  FUNC_4(&VAR_18->vdev_initialize_lock);
  return (FUNC_2(VAR_5));
 }

 switch (VAR_16) {
 case 129:
  FUNC_9(VAR_18);
  break;
 case 130:
  FUNC_10(VAR_18, VAR_11, VAR_17);
  break;
 case 128:
  FUNC_10(VAR_18, VAR_12, VAR_17);
  break;
 default:
  FUNC_5("invalid cmd_type %llu", (unsigned long long)VAR_16);
 }
 FUNC_4(&VAR_18->vdev_initialize_lock);

 return (0);
}
