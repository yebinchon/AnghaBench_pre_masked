
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int spa_vdev_top_lock; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,int ,int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char const*,TYPE_1__**,int ) ;
 int FUNC_6 (int ,int ) ;

int
FUNC_7(const char *VAR_4)
{
 int VAR_5;
 spa_t *VAR_6;

 VAR_5 = FUNC_5(VAR_4, &VAR_6, VAR_0);
 if (VAR_5 != 0)
  return (VAR_5);

 FUNC_1(&VAR_6->spa_vdev_top_lock);
 FUNC_6(FUNC_4(VAR_6), 0);
 VAR_5 = FUNC_0(VAR_4, VAR_2,
     VAR_3, ((void*)0), 0, VAR_1);

 FUNC_2(&VAR_6->spa_vdev_top_lock);

 FUNC_3(VAR_6, VAR_0);
 return (VAR_5);
}
