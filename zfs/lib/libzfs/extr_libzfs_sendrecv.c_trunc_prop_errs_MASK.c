
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(int VAR_2)
{
 FUNC_0(VAR_2 != 0);

 if (VAR_2 == 1)
  (void) FUNC_2(VAR_1, "%s", FUNC_1(VAR_0,
      "1 more property could not be set\n"));
 else
  (void) FUNC_2(VAR_1, FUNC_1(VAR_0,
      "%d more properties could not be set\n"), VAR_2);
}
