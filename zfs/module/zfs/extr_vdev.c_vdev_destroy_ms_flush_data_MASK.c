
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vdev_top_zap; int vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int,int,int *) ;
 int FUNC_4 (int *,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_5(vdev_t *VAR_2, dmu_tx_t *VAR_3)
{
 objset_t *VAR_4 = FUNC_2(VAR_2->vdev_spa);

 if (VAR_2->vdev_top_zap == 0)
  return;

 uint64_t VAR_5 = 0;
 int VAR_6 = FUNC_3(VAR_4, VAR_2->vdev_top_zap,
     VAR_1, sizeof (uint64_t), 1, &VAR_5);
 if (VAR_6 == VAR_0)
  return;

 FUNC_0(FUNC_1(VAR_4, VAR_5, VAR_3));
 FUNC_0(FUNC_4(VAR_4, VAR_2->vdev_top_zap,
     VAR_1, VAR_3));
}
