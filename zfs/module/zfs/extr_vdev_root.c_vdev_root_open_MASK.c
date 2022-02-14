
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vs_aux; } ;
struct TYPE_7__ {scalar_t__ vdev_children; int vdev_open_error; TYPE_1__ vdev_stat; int vdev_islog; struct TYPE_7__** vdev_child; int * vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(vdev_t *VAR_4, uint64_t *VAR_5, uint64_t *VAR_6,
    uint64_t *VAR_7)
{
 spa_t *VAR_8 = VAR_4->vdev_spa;
 int VAR_9 = 0;
 int VAR_10 = 0;

 if (VAR_4->vdev_children == 0) {
  VAR_4->vdev_stat.vs_aux = VAR_2;
  return (FUNC_0(VAR_0));
 }

 FUNC_4(VAR_4);

 for (int VAR_11 = 0; VAR_11 < VAR_4->vdev_children; VAR_11++) {
  vdev_t *VAR_12 = VAR_4->vdev_child[VAR_11];

  if (VAR_12->vdev_open_error && !VAR_12->vdev_islog) {
   VAR_9 = VAR_12->vdev_open_error;
   VAR_10++;
  }
 }

 if (FUNC_1(VAR_8) != VAR_1)
  FUNC_2(VAR_8, VAR_10);

 if (FUNC_3(VAR_4, VAR_10)) {
  VAR_4->vdev_stat.vs_aux = VAR_3;
  return (VAR_9);
 }

 *VAR_5 = 0;
 *VAR_6 = 0;
 *VAR_7 = 0;

 return (0);
}
