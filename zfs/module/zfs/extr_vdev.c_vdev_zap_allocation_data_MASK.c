
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ vdev_alloc_bias; int vdev_top_zap; TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ vdev_alloc_bias_t ;
struct TYPE_6__ {int * spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int *,int ,int ,int,scalar_t__,char const*,int *) ;

__attribute__((used)) static void
FUNC_5(vdev_t *VAR_8, dmu_tx_t *VAR_9)
{
 spa_t *VAR_10 = VAR_8->vdev_spa;
 objset_t *VAR_11 = VAR_10->spa_meta_objset;
 vdev_alloc_bias_t VAR_12 = VAR_8->vdev_alloc_bias;
 const char *VAR_13;

 FUNC_0(VAR_12 != VAR_5);

 VAR_13 =
     (VAR_12 == VAR_4) ? VAR_1 :
     (VAR_12 == VAR_6) ? VAR_2 :
     (VAR_12 == VAR_3) ? VAR_0 : ((void*)0);

 FUNC_0(VAR_13 != ((void*)0));
 FUNC_1(FUNC_4(VAR_11, VAR_8->vdev_top_zap, VAR_7,
     1, FUNC_3(VAR_13) + 1, VAR_13, VAR_9));

 if (VAR_12 == VAR_6 || VAR_12 == VAR_3) {
  FUNC_2(VAR_10, VAR_9);
 }
}
