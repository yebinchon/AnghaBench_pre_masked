
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zio_type_t ;
typedef int zio_t ;
typedef int zio_priority_t ;
typedef int zio_done_func_t ;
struct TYPE_6__ {int vdev_spa; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
typedef enum zio_flag { ____Placeholder_zio_flag } zio_flag ;
typedef int abd_t ;
struct TYPE_5__ {int vdev_op_leaf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int *,int ,int ,int *,int *,int ,int ,int *,void*,int ,int ,int,TYPE_2__*,int ,int *,int,int ) ;

zio_t *
FUNC_2(vdev_t *VAR_5, uint64_t VAR_6, abd_t *VAR_7, uint64_t VAR_8,
    zio_type_t VAR_9, zio_priority_t VAR_10, enum zio_flag VAR_11,
    zio_done_func_t *VAR_12, void *VAR_13)
{
 zio_t *VAR_14;

 FUNC_0(VAR_5->vdev_ops->vdev_op_leaf);

 VAR_14 = FUNC_1(((void*)0), VAR_5->vdev_spa, 0, ((void*)0),
     VAR_7, VAR_8, VAR_8, VAR_12, VAR_13, VAR_9, VAR_10,
     VAR_11 | VAR_0 | VAR_2 | VAR_1,
     VAR_5, VAR_6, ((void*)0),
     VAR_3 >> 1, VAR_4);

 return (VAR_14);
}
