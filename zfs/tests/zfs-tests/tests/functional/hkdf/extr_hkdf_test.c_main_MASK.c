
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int *) ;
 int * VAR_0 ;

int
FUNC_5(int VAR_1, char **VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_2();

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_3 = FUNC_4(VAR_4, &VAR_0[VAR_4]);
  if (VAR_3 != 0)
   break;
 }

 FUNC_1();

 if (VAR_3 == 0) {
  FUNC_3("All tests passed successfully.\n");
  return (0);
 } else {
  FUNC_3("Test failed.\n");
  return (1);
 }
}
