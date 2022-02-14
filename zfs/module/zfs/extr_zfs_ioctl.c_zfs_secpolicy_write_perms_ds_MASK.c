
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dsl_dataset_t ;
typedef int cred_t ;


 int FUNC_0 (int *,char const*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int *,int *) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, dsl_dataset_t *VAR_1,
    const char *VAR_2, cred_t *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_3);
 if (VAR_4 == 0) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 != 0)
   VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 }
 return (VAR_4);
}
