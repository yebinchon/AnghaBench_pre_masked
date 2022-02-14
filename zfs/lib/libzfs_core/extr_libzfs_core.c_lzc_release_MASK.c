
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pool ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int *,int **) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ,int) ;

int
FUNC_5(nvlist_t *VAR_2, nvlist_t **VAR_3)
{
 char VAR_4[VAR_1];
 nvpair_t *VAR_5;


 VAR_5 = FUNC_1(VAR_2, ((void*)0));
 if (VAR_5 == ((void*)0))
  return (0);
 (void) FUNC_4(VAR_4, FUNC_2(VAR_5), sizeof (VAR_4));
 VAR_4[FUNC_3(VAR_4, "/@")] = '\0';

 return (FUNC_0(VAR_0, VAR_4, VAR_2, VAR_3));
}
