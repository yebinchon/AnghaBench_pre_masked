
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int spa_root_vdev; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(spa_t *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3, VAR_2, VAR_0, VAR_1);
 VAR_4 = FUNC_2(VAR_3->spa_root_vdev);
 FUNC_1(VAR_3, VAR_2, VAR_0);

 return (VAR_4);
}
