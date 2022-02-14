
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* vdev_spa; int vdev_id; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_13__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(vdev_t *VAR_4)
{
 uint64_t VAR_5 = VAR_4->vdev_id;
 spa_t *VAR_6 = VAR_4->vdev_spa;
 vdev_t *VAR_7 = VAR_6->spa_root_vdev;

 FUNC_0(FUNC_1(&VAR_2));
 FUNC_0(FUNC_2(VAR_6, VAR_1, VAR_0) == VAR_1);

 FUNC_6(VAR_4);

 VAR_4 = FUNC_4(VAR_6, VAR_5, 0, &VAR_3);
 FUNC_3(VAR_7, VAR_4);
 FUNC_5(VAR_7);




 FUNC_7(VAR_7);
}
