
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ vdev_nonrot; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {scalar_t__ mm_root; } ;
typedef TYPE_3__ mirror_map_t ;
typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ vdev_op_leaf; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int
FUNC_4(mirror_map_t *VAR_12, vdev_t *VAR_13, uint64_t VAR_14)
{
 uint64_t VAR_15;
 int64_t VAR_16;
 int VAR_17;


 if (VAR_12->mm_root)
  return (VAR_0);
 if (VAR_13->vdev_ops->vdev_op_leaf)
  VAR_14 += VAR_1;


 VAR_17 = FUNC_3(VAR_13);
 VAR_15 = FUNC_2(VAR_13);

 if (VAR_13->vdev_nonrot) {

  if (VAR_15 == VAR_14) {
   FUNC_1(VAR_2);
   return (VAR_17 + VAR_7);
  }







  FUNC_1(VAR_3);
  return (VAR_17 + VAR_8);
 }


 if (VAR_15 == VAR_14) {
  FUNC_1(VAR_4);
  return (VAR_17 + VAR_9);
 }






 VAR_16 = (int64_t)(VAR_15 - VAR_14);
 if (FUNC_0(VAR_16) < VAR_11) {
  FUNC_1(VAR_5);
  return (VAR_17 + (VAR_10 / 2));
 }


 FUNC_1(VAR_6);
 return (VAR_17 + VAR_10);
}
