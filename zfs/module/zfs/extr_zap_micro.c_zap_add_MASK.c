
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zap_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char const*,int,int ,void const*,int *,int ) ;
 int FUNC_1 (int *,int ,int *,int ,int ,int ,int ,int **) ;

int
FUNC_2(objset_t *VAR_3, uint64_t VAR_4, const char *VAR_5,
    int VAR_6, uint64_t VAR_7,
    const void *VAR_8, dmu_tx_t *VAR_9)
{
 zap_t *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_9, VAR_1, VAR_2, VAR_2, VAR_0, &VAR_10);
 if (VAR_11 != 0)
  return (VAR_11);
 VAR_11 = FUNC_0(VAR_10, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_0);

 return (VAR_11);
}
