
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ vdev_state; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_10__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(spa_t *VAR_5)
{
 int VAR_6 = 0;
 vdev_t *VAR_7 = VAR_5->spa_root_vdev;

 FUNC_1(VAR_5, VAR_3, VAR_1, VAR_2);
 VAR_6 = FUNC_5(VAR_7);
 FUNC_2(VAR_5, VAR_3, VAR_1);

 if (VAR_6 != 0) {
  FUNC_3(VAR_5, "vdev_validate failed [error=%d]", VAR_6);
  return (VAR_6);
 }

 if (VAR_7->vdev_state <= VAR_4) {
  FUNC_3(VAR_5, "cannot open vdev tree after invalidating "
      "some vdevs");
  FUNC_4(VAR_7, 2);
  return (FUNC_0(VAR_0));
 }

 return (0);
}
