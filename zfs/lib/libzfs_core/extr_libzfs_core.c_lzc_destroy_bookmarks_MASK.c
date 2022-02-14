
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
 nvpair_t *VAR_4;
 int VAR_5;
 char VAR_6[VAR_1];


 VAR_4 = FUNC_1(VAR_2, ((void*)0));
 if (VAR_4 == ((void*)0))
  return (0);
 (void) FUNC_4(VAR_6, FUNC_2(VAR_4), sizeof (VAR_6));
 VAR_6[FUNC_3(VAR_6, "/#")] = '\0';

 VAR_5 = FUNC_0(VAR_0, VAR_6, VAR_2, VAR_3);

 return (VAR_5);
}
