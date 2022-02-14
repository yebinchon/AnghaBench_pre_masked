
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spa_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (char const*,int **,int ) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,char const*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *,char const*,int ) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_3, nvlist_t *VAR_4, nvlist_t *VAR_5)
{
 int VAR_6;
 nvlist_t *VAR_7;
 nvpair_t *VAR_8;
 boolean_t VAR_9;
 spa_t *VAR_10;

 VAR_7 = FUNC_2(VAR_4, "snaps");
 VAR_9 = FUNC_3(VAR_4, "defer");

 VAR_6 = FUNC_8(VAR_3);
 for (VAR_8 = FUNC_4(VAR_7, ((void*)0)); VAR_8 != ((void*)0);
     VAR_8 = FUNC_4(VAR_7, VAR_8)) {
  const char *VAR_11 = FUNC_5(VAR_8);





  if (FUNC_9(VAR_11, VAR_3, VAR_6) != 0 ||
      (VAR_11[VAR_6] != '/' && VAR_11[VAR_6] != '@'))
   return (FUNC_0(VAR_1));

  FUNC_10(FUNC_5(VAR_8));
  if (FUNC_7(VAR_11, &VAR_10, VAR_2) == 0) {
   FUNC_11(VAR_10, VAR_11, VAR_0);
   FUNC_6(VAR_10, VAR_2);
  }
 }

 return (FUNC_1(VAR_7, VAR_9, VAR_5));
}
