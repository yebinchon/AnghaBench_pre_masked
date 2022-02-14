
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;
typedef int dmu_object_type_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,char const*,int,int,scalar_t__*,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int,int *) ;

uint64_t
FUNC_4(objset_t *VAR_1, dmu_object_type_t VAR_2, uint64_t VAR_3,
    const char *VAR_4, int VAR_5, dmu_tx_t *VAR_6)
{
 uint64_t VAR_7;

 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_0, 0, VAR_5, VAR_6);
 FUNC_0(VAR_7 != 0);
 FUNC_1(FUNC_2(VAR_1, VAR_3, VAR_4, sizeof (uint64_t), 1, &VAR_7,
     VAR_6));

 return (VAR_7);
}
