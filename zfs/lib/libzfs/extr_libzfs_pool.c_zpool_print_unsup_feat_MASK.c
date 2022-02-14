
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int * FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char**) ;
 int FUNC_5 (char*,char*,...) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int) ;

void
FUNC_8(nvlist_t *VAR_3)
{
 nvlist_t *VAR_4, *VAR_5;
 nvpair_t *VAR_6;

 FUNC_7(FUNC_0(VAR_3, VAR_1, &VAR_4) ==
     0);
 FUNC_7(FUNC_0(VAR_4, VAR_2,
     &VAR_5) == 0);

 for (VAR_6 = FUNC_1(VAR_5, ((void*)0)); VAR_6 != ((void*)0);
     VAR_6 = FUNC_1(VAR_5, VAR_6)) {
  char *VAR_7;

  FUNC_7(FUNC_3(VAR_6) == VAR_0);
  FUNC_7(FUNC_4(VAR_6, &VAR_7) == 0);

  if (FUNC_6(VAR_7) > 0)
   (void) FUNC_5("\t%s (%s)\n", FUNC_2(VAR_6), VAR_7);
  else
   (void) FUNC_5("\t%s\n", FUNC_2(VAR_6));
 }
}
