
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vdev_top_zap; int vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int,int,scalar_t__*) ;

int
FUNC_4(vdev_t *VAR_4, uint64_t *VAR_5)
{
 FUNC_0(FUNC_1(VAR_4->vdev_spa, VAR_2, VAR_1));

 if (VAR_4->vdev_top_zap == 0) {
  *VAR_5 = 0;
  return (0);
 }

 int VAR_6 = FUNC_3(FUNC_2(VAR_4->vdev_spa), VAR_4->vdev_top_zap,
     VAR_3, sizeof (uint64_t), 1, VAR_5);
 if (VAR_6 == VAR_0) {
  *VAR_5 = 0;
  VAR_6 = 0;
 }

 return (VAR_6);
}
