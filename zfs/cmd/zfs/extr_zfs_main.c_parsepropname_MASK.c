
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int VAR_2 ;
 int * FUNC_5 (char*,char) ;

__attribute__((used)) static boolean_t
FUNC_6(nvlist_t *VAR_3, char *VAR_4)
{
 if (FUNC_5(VAR_4, '=') != ((void*)0)) {
  (void) FUNC_0(VAR_2, "%s", FUNC_1("invalid character "
      "'=' in property argument\n"));
  return (VAR_0);
 }
 if (FUNC_4(VAR_3, VAR_4)) {
  (void) FUNC_0(VAR_2, FUNC_1("property '%s' "
      "specified multiple times\n"), VAR_4);
  return (VAR_0);
 }
 if (FUNC_3(VAR_3, VAR_4) != 0)
  FUNC_2();
 return (VAR_1);
}
