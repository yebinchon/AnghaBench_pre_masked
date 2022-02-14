
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vs_aux; } ;
struct TYPE_7__ {int vdev_children; int vdev_open_error; TYPE_1__ vdev_stat; int vdev_ashift; scalar_t__ vdev_max_asize; scalar_t__ vdev_asize; struct TYPE_7__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(vdev_t *VAR_4, uint64_t *VAR_5, uint64_t *VAR_6,
    uint64_t *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;

 if (VAR_4->vdev_children == 0) {
  VAR_4->vdev_stat.vs_aux = VAR_1;
  return (FUNC_2(VAR_0));
 }

 FUNC_4(VAR_4);

 for (int VAR_10 = 0; VAR_10 < VAR_4->vdev_children; VAR_10++) {
  vdev_t *VAR_11 = VAR_4->vdev_child[VAR_10];

  if (VAR_11->vdev_open_error) {
   VAR_9 = VAR_11->vdev_open_error;
   VAR_8++;
   continue;
  }

  *VAR_5 = FUNC_1(*VAR_5 - 1, VAR_11->vdev_asize - 1) + 1;
  *VAR_6 = FUNC_1(*VAR_6 - 1, VAR_11->vdev_max_asize - 1) + 1;
  *VAR_7 = FUNC_0(*VAR_7, VAR_11->vdev_ashift);
 }

 if (VAR_8 == VAR_4->vdev_children) {
  if (FUNC_3(VAR_4))
   VAR_4->vdev_stat.vs_aux = VAR_2;
  else
   VAR_4->vdev_stat.vs_aux = VAR_3;
  return (VAR_9);
 }

 return (0);
}
