
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned long long vdev_degraded; scalar_t__ vdev_faulted; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef int vdev_aux_t ;
typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_7__ {int vdev_op_leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;

int
FUNC_5(spa_t *VAR_6, uint64_t VAR_7, vdev_aux_t VAR_8)
{
 vdev_t *VAR_9;

 FUNC_1(VAR_6, VAR_4);

 if ((VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_1)) == ((void*)0))
  return (FUNC_2(VAR_6, ((void*)0), VAR_2));

 if (!VAR_9->vdev_ops->vdev_op_leaf)
  return (FUNC_2(VAR_6, ((void*)0), VAR_3));




 if (VAR_9->vdev_faulted || VAR_9->vdev_degraded)
  return (FUNC_2(VAR_6, ((void*)0), 0));

 VAR_9->vdev_degraded = 1ULL;
 if (!FUNC_3(VAR_9))
  FUNC_4(VAR_9, VAR_0, VAR_5,
      VAR_8);

 return (FUNC_2(VAR_6, VAR_9, 0));
}
