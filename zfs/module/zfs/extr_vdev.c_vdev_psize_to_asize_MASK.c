
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
struct TYPE_5__ {int (* vdev_op_asize ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;

uint64_t
FUNC_1(vdev_t *VAR_0, uint64_t VAR_1)
{
 return (VAR_0->vdev_ops->vdev_op_asize(VAR_0, VAR_1));
}
