
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int io_error; TYPE_1__* io_vd; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_7__ {int vf_vnode; } ;
typedef TYPE_3__ vdev_file_t ;
struct TYPE_5__ {TYPE_3__* vdev_tsd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3)
{
 zio_t *VAR_4 = (zio_t *)VAR_3;
 vdev_file_t *VAR_5 = VAR_4->io_vd->vdev_tsd;

 VAR_4->io_error = FUNC_0(VAR_5->vf_vnode, VAR_1 | VAR_0, VAR_2, ((void*)0));

 FUNC_1(VAR_4);
}
