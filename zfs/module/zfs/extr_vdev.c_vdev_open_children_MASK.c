
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vdev_children; TYPE_4__** vdev_child; int vdev_nonrot; } ;
typedef TYPE_1__ vdev_t ;
typedef int taskq_t ;
struct TYPE_7__ {int vdev_nonrot; int vdev_open_error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int * FUNC_1 (char*,int,int ,int,int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

void
FUNC_6(vdev_t *VAR_6)
{
 taskq_t *VAR_7;
 int VAR_8 = VAR_6->vdev_children;






 if (FUNC_5(VAR_6)) {
retry_sync:
  for (int VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
   VAR_6->vdev_child[VAR_9]->vdev_open_error =
       FUNC_4(VAR_6->vdev_child[VAR_9]);
 } else {
  VAR_7 = FUNC_1("vdev_open", VAR_8, VAR_4,
      VAR_8, VAR_8, VAR_2);
  if (VAR_7 == ((void*)0))
   goto retry_sync;

  for (int VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
   FUNC_0(FUNC_3(VAR_7, VAR_5,
       VAR_6->vdev_child[VAR_10], VAR_3) != VAR_1);

  FUNC_2(VAR_7);
 }

 VAR_6->vdev_nonrot = VAR_0;

 for (int VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
  VAR_6->vdev_nonrot &= VAR_6->vdev_child[VAR_11]->vdev_nonrot;
}
