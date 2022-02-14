
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int dnode_t ;
typedef int dmu_tx_t ;
typedef int dmu_object_type_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,int ,int ,int ,int **) ;
 int FUNC_2 (int *,int ,int,int ,int,int,int ,int *) ;
 int FUNC_3 (int *,int ) ;

int
FUNC_4(objset_t *VAR_6, uint64_t VAR_7, dmu_object_type_t VAR_8,
    int VAR_9, dmu_object_type_t VAR_10, int VAR_11, int VAR_12,
    boolean_t VAR_13, dmu_tx_t *VAR_14)
{
 dnode_t *VAR_15;
 int VAR_16 = VAR_12 >> VAR_3;
 int VAR_17;

 if (VAR_16 == 0)
  VAR_16 = VAR_1;

 if (VAR_7 == VAR_0)
  return (FUNC_0(VAR_4));

 VAR_17 = FUNC_1(VAR_6, VAR_7, VAR_2, 0,
     VAR_5, &VAR_15);
 if (VAR_17)
  return (VAR_17);

 FUNC_2(VAR_15, VAR_8, VAR_9, VAR_10, VAR_11, VAR_16,
     VAR_13, VAR_14);

 FUNC_3(VAR_15, VAR_5);
 return (VAR_17);
}
