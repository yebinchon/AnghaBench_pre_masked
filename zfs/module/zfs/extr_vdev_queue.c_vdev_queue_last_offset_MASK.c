
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vq_last_offset; } ;
struct TYPE_5__ {TYPE_1__ vdev_queue; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;



uint64_t
FUNC_0(vdev_t *VAR_0)
{
 return (VAR_0->vdev_queue.vq_last_offset);
}
