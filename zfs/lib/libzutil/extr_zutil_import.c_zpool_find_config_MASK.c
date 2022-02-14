
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pool_config_ops_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int importargs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 char* FUNC_6 (char const*) ;
 char* FUNC_7 (char*,char*) ;
 int * FUNC_8 (void*,int *,int const*) ;

int
FUNC_9(void *VAR_2, const char *VAR_3, nvlist_t **VAR_4,
    importargs_t *VAR_5, const pool_config_ops_t *VAR_6)
{
 nvlist_t *VAR_7;
 nvlist_t *VAR_8 = ((void*)0);
 nvlist_t *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 char VAR_12 = '\0';
 int VAR_13 = 0;
 char *VAR_14 = FUNC_6(VAR_3);

 *VAR_4 = ((void*)0);

 if ((VAR_11 = FUNC_7(VAR_14, "/@")) != ((void*)0)) {
  VAR_12 = *VAR_11;
  *VAR_11 = '\0';
 }

 VAR_7 = FUNC_8(VAR_2, VAR_5, VAR_6);

 if (VAR_7 != ((void*)0)) {
  nvpair_t *VAR_15 = ((void*)0);
  while ((VAR_15 = FUNC_2(VAR_7, VAR_15)) != ((void*)0)) {
   FUNC_0(FUNC_4(VAR_15, &VAR_9));
   if (FUNC_5(VAR_9, VAR_14)) {
    VAR_13++;
    if (VAR_8 != ((void*)0)) {

     continue;
    } else {
     VAR_8 = VAR_9;
     VAR_10 = FUNC_3(VAR_15);
    }
   }
  }
 }

 if (VAR_13 == 0) {
  FUNC_1(VAR_14);
  return (VAR_1);
 }

 if (VAR_13 > 1) {
  FUNC_1(VAR_14);
  return (VAR_0);
 }

 *VAR_4 = VAR_8;
 FUNC_1(VAR_14);

 return (0);
}
