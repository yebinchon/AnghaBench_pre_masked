
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int vdev_mg; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
struct TYPE_11__ {int spa_name; TYPE_1__* spa_vdev_removal; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_9__ {int svr_vdev_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_5(spa_t *VAR_7)
{
 uint64_t VAR_8 = VAR_7->spa_vdev_removal->svr_vdev_id;

 int VAR_9 = FUNC_0(VAR_7->spa_name, VAR_5,
     VAR_6, ((void*)0), 0,
     VAR_4);

 if (VAR_9 == 0) {
  FUNC_2(VAR_7, VAR_2 | VAR_3, VAR_0, VAR_1);
  vdev_t *VAR_10 = FUNC_4(VAR_7, VAR_8);
  FUNC_1(VAR_10->vdev_mg);
  FUNC_3(VAR_7, VAR_2 | VAR_3, VAR_0);
 }

 return (VAR_9);
}
