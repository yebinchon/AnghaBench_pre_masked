
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vs_aux; } ;
struct TYPE_6__ {int vdev_nparity; int vdev_children; int vdev_open_error; TYPE_1__ vdev_stat; int vdev_ashift; scalar_t__ vdev_max_asize; scalar_t__ vdev_asize; struct TYPE_6__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(vdev_t *VAR_4, uint64_t *VAR_5, uint64_t *VAR_6,
    uint64_t *VAR_7)
{
 vdev_t *VAR_8;
 uint64_t VAR_9 = VAR_4->vdev_nparity;
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;

 FUNC_0(VAR_9 > 0);

 if (VAR_9 > VAR_3 ||
     VAR_4->vdev_children < VAR_9 + 1) {
  VAR_4->vdev_stat.vs_aux = VAR_1;
  return (FUNC_3(VAR_0));
 }

 FUNC_4(VAR_4);

 for (VAR_10 = 0; VAR_10 < VAR_4->vdev_children; VAR_10++) {
  VAR_8 = VAR_4->vdev_child[VAR_10];

  if (VAR_8->vdev_open_error != 0) {
   VAR_11 = VAR_8->vdev_open_error;
   VAR_12++;
   continue;
  }

  *VAR_5 = FUNC_2(*VAR_5 - 1, VAR_8->vdev_asize - 1) + 1;
  *VAR_6 = FUNC_2(*VAR_6 - 1, VAR_8->vdev_max_asize - 1) + 1;
  *VAR_7 = FUNC_1(*VAR_7, VAR_8->vdev_ashift);
 }

 *VAR_5 *= VAR_4->vdev_children;
 *VAR_6 *= VAR_4->vdev_children;

 if (VAR_12 > VAR_9) {
  VAR_4->vdev_stat.vs_aux = VAR_2;
  return (VAR_11);
 }

 return (0);
}
