
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_snapentry_t ;
typedef int uint64_t ;
typedef int spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

int
FUNC_6(spa_t *VAR_3, uint64_t VAR_4, int VAR_5)
{
 zfs_snapentry_t *VAR_6;
 int VAR_7 = VAR_0;

 FUNC_0(&VAR_2, VAR_1);
 if ((VAR_6 = FUNC_2(VAR_3, VAR_4)) != ((void*)0)) {
  FUNC_4(VAR_6);
  FUNC_5(VAR_6, VAR_5);
  FUNC_3(VAR_6);
  VAR_7 = 0;
 }
 FUNC_1(&VAR_2);

 return (VAR_7);
}
