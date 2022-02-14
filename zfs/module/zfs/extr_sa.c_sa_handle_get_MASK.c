
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sa_handle_type_t ;
typedef int sa_handle_t ;
typedef int objset_t ;
typedef int dmu_buf_t ;


 int FUNC_0 (int *,int ,int *,int **) ;
 int FUNC_1 (int *,int *,void*,int ,int **) ;

int
FUNC_2(objset_t *VAR_0, uint64_t VAR_1, void *VAR_2,
    sa_handle_type_t VAR_3, sa_handle_t **VAR_4)
{
 dmu_buf_t *VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_0(VAR_0, VAR_1, ((void*)0), &VAR_5)))
  return (VAR_6);

 return (FUNC_1(VAR_0, VAR_5, VAR_2, VAR_3,
     VAR_4));
}
