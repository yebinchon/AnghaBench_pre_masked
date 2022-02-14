
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;
typedef int libpc_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ,int ,char**,char**) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;

int
FUNC_3(libpc_handle_t *VAR_4, nvlist_t *VAR_5, char **VAR_6, char **VAR_7)
{
 nvlist_t *VAR_8;
 uint64_t VAR_9;
 uint64_t VAR_10;

 *VAR_6 = ((void*)0);
 *VAR_7 = ((void*)0);

 if (FUNC_1(VAR_5, VAR_3, &VAR_8) ||
     FUNC_2(VAR_5, VAR_2, &VAR_9) ||
     FUNC_2(VAR_5, VAR_1, &VAR_10))
  return (VAR_0);

 return (FUNC_0(VAR_4, VAR_8, VAR_9, VAR_10, VAR_6,
     VAR_7));
}
