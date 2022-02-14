
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int dsl_deadlist_phys_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int,int *) ;

uint64_t
FUNC_4(objset_t *VAR_4, dmu_tx_t *VAR_5)
{
 if (FUNC_2(FUNC_1(VAR_4)) < VAR_3)
  return (FUNC_0(VAR_4, VAR_2, VAR_5));
 return (FUNC_3(VAR_4, VAR_0, VAR_1,
     sizeof (dsl_deadlist_phys_t), VAR_5));
}
