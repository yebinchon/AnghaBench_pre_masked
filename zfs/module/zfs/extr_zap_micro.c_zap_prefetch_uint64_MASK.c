
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zap_t ;
typedef int zap_name_t ;
typedef int uint64_t ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *,int ,int ,int ,int ,int **) ;
 int * FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

int
FUNC_6(objset_t *VAR_5, uint64_t VAR_6, const uint64_t *VAR_7,
    int VAR_8)
{
 zap_t *VAR_9;

 int VAR_10 =
     FUNC_2(VAR_5, VAR_6, ((void*)0), VAR_3, VAR_4, VAR_1, VAR_2, &VAR_9);
 if (VAR_10 != 0)
  return (VAR_10);
 zap_name_t *VAR_11 = FUNC_3(VAR_9, VAR_7, VAR_8);
 if (VAR_11 == ((void*)0)) {
  FUNC_5(VAR_9, VAR_2);
  return (FUNC_0(VAR_0));
 }

 FUNC_1(VAR_11);
 FUNC_4(VAR_11);
 FUNC_5(VAR_9, VAR_2);
 return (VAR_10);
}
