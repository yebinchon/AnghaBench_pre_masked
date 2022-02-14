
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* vdev_path; int * vdev_devid_vp; int * vdev_name_vp; int * vdev_tsd; int vdev_spa; } ;
typedef TYPE_1__ vdev_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(vdev_t *VAR_2)
{
 FUNC_0(FUNC_1(VAR_2->vdev_spa, VAR_1, VAR_0));


 if (VAR_2->vdev_path == ((void*)0) || VAR_2->vdev_path[0] != '/')
  return;





 if (VAR_2->vdev_tsd != ((void*)0))
  return;


 VAR_2->vdev_name_vp = ((void*)0);
 VAR_2->vdev_devid_vp = ((void*)0);
}
