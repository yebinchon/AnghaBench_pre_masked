
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 char const* VAR_1 ;
 int FUNC_2 (char*,char const*,int *) ;
 int * FUNC_3 (int *,int *) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int **) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;

int
FUNC_7(char *VAR_2, nvlist_t *VAR_3, cred_t *VAR_4)
{
 nvpair_t *VAR_5 = ((void*)0);
 int VAR_6;

 if ((VAR_6 = FUNC_2(VAR_2, VAR_1, VAR_4)) != 0)
  return (VAR_6);

 while ((VAR_5 = FUNC_3(VAR_3, VAR_5))) {
  nvlist_t *VAR_7;
  nvpair_t *VAR_8 = ((void*)0);

  FUNC_1(FUNC_5(VAR_5, &VAR_7) == 0);

  while ((VAR_8 = FUNC_3(VAR_7, VAR_8))) {
   const char *VAR_9 = FUNC_4(VAR_8);

   if (FUNC_6(VAR_9, VAR_1) == 0)
    return (FUNC_0(VAR_0));

   if ((VAR_6 = FUNC_2(VAR_2, VAR_9, VAR_4)) != 0)
    return (VAR_6);
  }
 }
 return (0);
}
