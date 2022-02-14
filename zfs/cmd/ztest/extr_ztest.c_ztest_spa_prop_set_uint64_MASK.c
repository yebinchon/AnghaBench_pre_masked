
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_prop_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int nvlist_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * VAR_3 ;

__attribute__((used)) static int
FUNC_8(zpool_prop_t VAR_4, uint64_t VAR_5)
{
 spa_t *VAR_6 = VAR_3;
 nvlist_t *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_1(FUNC_3(&VAR_7, VAR_2, 0) == 0);
 FUNC_1(FUNC_2(VAR_7, FUNC_6(VAR_4), VAR_5) == 0);

 VAR_8 = FUNC_5(VAR_6, VAR_7);

 FUNC_4(VAR_7);

 if (VAR_8 == VAR_0) {
  FUNC_7(VAR_1);
  return (VAR_8);
 }
 FUNC_0(VAR_8);

 return (VAR_8);
}
