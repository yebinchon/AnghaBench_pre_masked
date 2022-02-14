
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int dnode_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int **) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int *) ;

int
FUNC_3(objset_t *VAR_1, uint64_t VAR_2, int VAR_3, dmu_tx_t *VAR_4)
{
 dnode_t *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_5);
 if (VAR_6)
  return (VAR_6);
 VAR_6 = FUNC_2(VAR_5, VAR_3, VAR_4);
 FUNC_1(VAR_5, VAR_0);
 return (VAR_6);
}
