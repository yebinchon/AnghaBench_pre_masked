
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;


 scalar_t__ FUNC_0 (int *,char const*,int **) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(nvlist_t *VAR_0, nvlist_t *VAR_1)
{
 nvpair_t *VAR_2, *VAR_3;

 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = FUNC_1(VAR_0, ((void*)0));
 while (VAR_2 != ((void*)0)) {
  const char *VAR_4 = FUNC_3(VAR_2);
  nvpair_t *VAR_5;

  VAR_3 = FUNC_1(VAR_0, VAR_2);

  if ((FUNC_0(VAR_1, VAR_4,
      &VAR_5) != 0) || !FUNC_4(VAR_2, VAR_5))
   goto next;


  (void) FUNC_2(VAR_1, VAR_5);

  (void) FUNC_2(VAR_0, VAR_2);
next:
  VAR_2 = VAR_3;
 }
}
