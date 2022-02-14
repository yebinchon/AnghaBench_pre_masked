
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pool ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int ,char*,int *,int **) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int ,int) ;

int
FUNC_9(nvlist_t *VAR_2, boolean_t VAR_3, nvlist_t **VAR_4)
{
 nvpair_t *VAR_5;
 nvlist_t *VAR_6;
 int VAR_7;
 char VAR_8[VAR_1];


 VAR_5 = FUNC_5(VAR_2, ((void*)0));
 if (VAR_5 == ((void*)0))
  return (0);
 (void) FUNC_8(VAR_8, FUNC_6(VAR_5), sizeof (VAR_8));
 VAR_8[FUNC_7(VAR_8, "/@")] = '\0';

 VAR_6 = FUNC_2();
 FUNC_1(VAR_6, "snaps", VAR_2);
 if (VAR_3)
  FUNC_0(VAR_6, "defer");

 VAR_7 = FUNC_3(VAR_0, VAR_8, VAR_6, VAR_4);
 FUNC_4(VAR_6);

 return (VAR_7);
}
