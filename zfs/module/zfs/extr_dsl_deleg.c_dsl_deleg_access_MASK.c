
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int ,int **) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char const*,int *) ;
 int FUNC_3 (char const*,int ,int **) ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5(const char *VAR_1, const char *VAR_2, cred_t *VAR_3)
{
 dsl_pool_t *VAR_4;
 dsl_dataset_t *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_1, VAR_0, &VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_6 = FUNC_0(VAR_4, VAR_1, VAR_0, &VAR_5);
 if (VAR_6 == 0) {
  VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_3);
  FUNC_1(VAR_5, VAR_0);
 }
 FUNC_4(VAR_4, VAR_0);

 return (VAR_6);
}
