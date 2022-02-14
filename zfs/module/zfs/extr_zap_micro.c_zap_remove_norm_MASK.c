
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zap_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int matchtype_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int *,int ,int ,int ,int ,int **) ;
 int FUNC_1 (int *,char const*,int ,int *) ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(objset_t *VAR_4, uint64_t VAR_5, const char *VAR_6,
    matchtype_t VAR_7, dmu_tx_t *VAR_8)
{
 zap_t *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_8, VAR_2, VAR_3, VAR_0, VAR_1, &VAR_9);
 if (VAR_10)
  return (VAR_10);
 VAR_10 = FUNC_1(VAR_9, VAR_6, VAR_7, VAR_8);
 FUNC_2(VAR_9, VAR_1);
 return (VAR_10);
}
