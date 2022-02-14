
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int dnode_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int *) ;
 int FUNC_2 (int *,scalar_t__,int ,int **) ;
 int FUNC_3 (int *,int ) ;

int
FUNC_4(objset_t *VAR_3, uint64_t VAR_4, uint64_t VAR_5,
    uint64_t VAR_6, dmu_tx_t *VAR_7)
{
 dnode_t *VAR_8;
 int VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_1, &VAR_8);
 if (VAR_9)
  return (VAR_9);
 FUNC_0(VAR_5 < VAR_2);
 FUNC_0(VAR_6 == VAR_0 || VAR_6 <= VAR_2 - VAR_5);
 FUNC_1(VAR_8, VAR_5, VAR_6, VAR_7);
 FUNC_3(VAR_8, VAR_1);
 return (0);
}
