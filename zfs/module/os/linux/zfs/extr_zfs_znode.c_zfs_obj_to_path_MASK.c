
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sa_handle_t ;
typedef int sa_attr_type_t ;
typedef int objset_t ;
typedef int dmu_buf_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int **,int **,int ) ;
 int FUNC_1 (int *,int ,int *,int *,char*,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int **) ;

int
FUNC_4(objset_t *VAR_1, uint64_t VAR_2, char *VAR_3, int VAR_4)
{
 sa_attr_type_t *VAR_5;
 sa_handle_t *VAR_6;
 dmu_buf_t *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_1, &VAR_5);
 if (VAR_8 != 0)
  return (VAR_8);

 VAR_8 = FUNC_0(VAR_1, VAR_2, &VAR_6, &VAR_7, VAR_0);
 if (VAR_8 != 0)
  return (VAR_8);

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_6, VAR_5, VAR_3, VAR_4);

 FUNC_2(VAR_6, VAR_7, VAR_0);
 return (VAR_8);
}
