
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int nv_alloc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,size_t*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;

int
FUNC_3(char *VAR_3, size_t VAR_4, nvlist_t **VAR_5, nv_alloc_t *VAR_6)
{
 nvlist_t *VAR_7;
 int VAR_8;

 if (VAR_5 == ((void*)0))
  return (VAR_0);

 if ((VAR_8 = FUNC_2(&VAR_7, 0, VAR_6)) != 0)
  return (VAR_8);

 if ((VAR_8 = FUNC_0(VAR_7, VAR_3, &VAR_4, VAR_2,
     VAR_1)) != 0)
  FUNC_1(VAR_7);
 else
  *VAR_5 = VAR_7;

 return (VAR_8);
}
