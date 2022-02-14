
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zc_nvlist_dst; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int spa_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,int **,int ) ;
 int FUNC_8 (int *,int **) ;

__attribute__((used)) static int
FUNC_9(zfs_cmd_t *VAR_3)
{
 spa_t *VAR_4;
 int VAR_5;
 nvlist_t *VAR_6 = ((void*)0);

 if ((VAR_5 = FUNC_7(VAR_3->zc_name, &VAR_4, VAR_1)) != 0) {





  FUNC_1(&VAR_2);
  if ((VAR_4 = FUNC_6(VAR_3->zc_name)) != ((void*)0))
   VAR_5 = FUNC_8(VAR_4, &VAR_6);
  FUNC_2(&VAR_2);
 } else {
  VAR_5 = FUNC_8(VAR_4, &VAR_6);
  FUNC_5(VAR_4, VAR_1);
 }

 if (VAR_5 == 0 && VAR_3->zc_nvlist_dst != 0)
  VAR_5 = FUNC_4(VAR_3, VAR_6);
 else
  VAR_5 = FUNC_0(VAR_0);

 FUNC_3(VAR_6);
 return (VAR_5);
}
