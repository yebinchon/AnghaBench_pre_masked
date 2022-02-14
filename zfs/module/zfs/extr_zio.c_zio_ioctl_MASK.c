
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int io_cmd; } ;
typedef TYPE_1__ zio_t ;
typedef int zio_done_func_t ;
struct TYPE_13__ {int vdev_children; struct TYPE_13__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef int spa_t ;
typedef enum zio_flag { ____Placeholder_zio_flag } zio_flag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int *,int ,int *,int *,int ,int ,int *,void*,int ,int ,int,TYPE_2__*,int ,int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int *,int *,int *,int *,int) ;

zio_t *
FUNC_3(zio_t *VAR_4, spa_t *VAR_5, vdev_t *VAR_6, int VAR_7,
    zio_done_func_t *VAR_8, void *VAR_9, enum zio_flag VAR_10)
{
 zio_t *VAR_11;
 int VAR_12;

 if (VAR_6->vdev_children == 0) {
  VAR_11 = FUNC_0(VAR_4, VAR_5, 0, ((void*)0), ((void*)0), 0, 0, VAR_8, VAR_9,
      VAR_3, VAR_1, VAR_10, VAR_6, 0, ((void*)0),
      VAR_2, VAR_0);

  VAR_11->io_cmd = VAR_7;
 } else {
  VAR_11 = FUNC_2(VAR_4, VAR_5, ((void*)0), ((void*)0), ((void*)0), VAR_10);

  for (VAR_12 = 0; VAR_12 < VAR_6->vdev_children; VAR_12++)
   FUNC_1(FUNC_3(VAR_11, VAR_5, VAR_6->vdev_child[VAR_12], VAR_7,
       VAR_8, VAR_9, VAR_10));
 }

 return (VAR_11);
}
