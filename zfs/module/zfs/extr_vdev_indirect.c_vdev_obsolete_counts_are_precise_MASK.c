
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vdev_top_zap; TYPE_3__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int val ;
typedef scalar_t__ uint64_t ;
typedef int boolean_t ;
struct TYPE_5__ {int spa_meta_objset; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int,int,scalar_t__*) ;

int
FUNC_3(vdev_t *VAR_5, boolean_t *VAR_6)
{
 FUNC_0(FUNC_1(VAR_5->vdev_spa, VAR_3, VAR_2));

 if (VAR_5->vdev_top_zap == 0) {
  *VAR_6 = VAR_0;
  return (0);
 }

 uint64_t VAR_7 = 0;
 int VAR_8 = FUNC_2(VAR_5->vdev_spa->spa_meta_objset, VAR_5->vdev_top_zap,
     VAR_4, sizeof (VAR_7), 1, &VAR_7);
 if (VAR_8 == 0) {
  *VAR_6 = (VAR_7 != 0);
 } else if (VAR_8 == VAR_1) {
  *VAR_6 = VAR_0;
  VAR_8 = 0;
 }

 return (VAR_8);
}
