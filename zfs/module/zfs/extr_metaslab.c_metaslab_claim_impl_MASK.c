
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* vdev_ops; int vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
struct TYPE_10__ {scalar_t__ mcca_error; int mcca_txg; } ;
typedef TYPE_3__ metaslab_claim_cb_arg_t ;
struct TYPE_8__ {int (* vdev_op_remap ) (TYPE_2__*,int ,int ,int ,TYPE_3__*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ,TYPE_3__*) ;

int
FUNC_4(vdev_t *VAR_1, uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4)
{
 if (VAR_1->vdev_ops->vdev_op_remap != ((void*)0)) {
  metaslab_claim_cb_arg_t VAR_5;






  FUNC_0(!FUNC_2(VAR_1->vdev_spa));
  VAR_5.mcca_error = 0;
  VAR_5.mcca_txg = VAR_4;

  VAR_1->vdev_ops->vdev_op_remap(VAR_1, VAR_2, VAR_3,
      VAR_0, &VAR_5);

  if (VAR_5.mcca_error == 0) {
   VAR_5.mcca_error = FUNC_1(VAR_1,
       VAR_2, VAR_3, VAR_4);
  }
  return (VAR_5.mcca_error);
 } else {
  return (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4));
 }
}
