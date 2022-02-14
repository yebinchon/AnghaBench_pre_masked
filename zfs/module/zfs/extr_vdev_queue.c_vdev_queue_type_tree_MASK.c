
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ zio_type_t ;
struct TYPE_3__ {int vq_trim_offset_tree; int vq_write_offset_tree; int vq_read_offset_tree; } ;
typedef TYPE_1__ vdev_queue_t ;
typedef int avl_tree_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline avl_tree_t *
FUNC_1(vdev_queue_t *VAR_3, zio_type_t VAR_4)
{
 FUNC_0(VAR_4 == VAR_0 || VAR_4 == VAR_2 || VAR_4 == VAR_1);
 if (VAR_4 == VAR_0)
  return (&VAR_3->vq_read_offset_tree);
 else if (VAR_4 == VAR_2)
  return (&VAR_3->vq_write_offset_tree);
 else
  return (&VAR_3->vq_trim_offset_tree);
}
