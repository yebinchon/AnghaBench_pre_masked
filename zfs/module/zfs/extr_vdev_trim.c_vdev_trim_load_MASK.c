
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ vdev_leaf_zap; scalar_t__ vdev_trim_state; scalar_t__ vdev_trim_secure; TYPE_4__* vdev_spa; scalar_t__ vdev_trim_partial; scalar_t__ vdev_trim_rate; scalar_t__ vdev_trim_last_offset; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_6__ {int spa_meta_objset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,scalar_t__,int ,int,int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_4(vdev_t *VAR_10)
{
 int VAR_11 = 0;
 FUNC_0(FUNC_1(VAR_10->vdev_spa, VAR_3, VAR_1) ||
     FUNC_1(VAR_10->vdev_spa, VAR_3, VAR_2));
 FUNC_0(VAR_10->vdev_leaf_zap != 0);

 if (VAR_10->vdev_trim_state == VAR_8 ||
     VAR_10->vdev_trim_state == VAR_9) {
  VAR_11 = FUNC_3(VAR_10->vdev_spa->spa_meta_objset,
      VAR_10->vdev_leaf_zap, VAR_4,
      sizeof (VAR_10->vdev_trim_last_offset), 1,
      &VAR_10->vdev_trim_last_offset);
  if (VAR_11 == VAR_0) {
   VAR_10->vdev_trim_last_offset = 0;
   VAR_11 = 0;
  }

  if (VAR_11 == 0) {
   VAR_11 = FUNC_3(VAR_10->vdev_spa->spa_meta_objset,
       VAR_10->vdev_leaf_zap, VAR_6,
       sizeof (VAR_10->vdev_trim_rate), 1,
       &VAR_10->vdev_trim_rate);
   if (VAR_11 == VAR_0) {
    VAR_10->vdev_trim_rate = 0;
    VAR_11 = 0;
   }
  }

  if (VAR_11 == 0) {
   VAR_11 = FUNC_3(VAR_10->vdev_spa->spa_meta_objset,
       VAR_10->vdev_leaf_zap, VAR_5,
       sizeof (VAR_10->vdev_trim_partial), 1,
       &VAR_10->vdev_trim_partial);
   if (VAR_11 == VAR_0) {
    VAR_10->vdev_trim_partial = 0;
    VAR_11 = 0;
   }
  }

  if (VAR_11 == 0) {
   VAR_11 = FUNC_3(VAR_10->vdev_spa->spa_meta_objset,
       VAR_10->vdev_leaf_zap, VAR_7,
       sizeof (VAR_10->vdev_trim_secure), 1,
       &VAR_10->vdev_trim_secure);
   if (VAR_11 == VAR_0) {
    VAR_10->vdev_trim_secure = 0;
    VAR_11 = 0;
   }
  }
 }

 FUNC_2(VAR_10);

 return (VAR_11);
}
