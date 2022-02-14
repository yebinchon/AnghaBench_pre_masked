
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pool ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,char*,int *,int **) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ,int) ;

int
FUNC_8(nvlist_t *VAR_2, nvlist_t *VAR_3, nvlist_t **VAR_4)
{
 nvpair_t *VAR_5;
 nvlist_t *VAR_6;
 int VAR_7;
 char VAR_8[VAR_1];

 *VAR_4 = ((void*)0);


 VAR_5 = FUNC_4(VAR_2, ((void*)0));
 if (VAR_5 == ((void*)0))
  return (0);
 (void) FUNC_7(VAR_8, FUNC_5(VAR_5), sizeof (VAR_8));
 VAR_8[FUNC_6(VAR_8, "/@")] = '\0';

 VAR_6 = FUNC_1();
 FUNC_0(VAR_6, "snaps", VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_6, "props", VAR_3);

 VAR_7 = FUNC_2(VAR_0, VAR_8, VAR_6, VAR_4);
 FUNC_3(VAR_6);

 return (VAR_7);
}
