
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int *,int *,int ,char*) ;
 int FUNC_4 (int ,int *) ;

int
FUNC_5(int VAR_3, char **VAR_4)
{
 pthread_t VAR_5;
 pthread_t VAR_6[VAR_0];
 int VAR_7 = 0;

 if (VAR_3 != 3) {
  (void) FUNC_2("usage: %s <normal write file name>"
      "<map write file name>\n", VAR_4[0]);
  FUNC_1(1);
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (FUNC_3(&VAR_6[VAR_7], ((void*)0), VAR_2,
      VAR_4[1])) {
   FUNC_0(1, "pthread_create normal_writer failed.");
  }
 }

 if (FUNC_3(&VAR_5, ((void*)0), VAR_1, VAR_4[2])) {
  FUNC_0(1, "pthread_create map_writer failed.");
 }


 FUNC_4(VAR_5, ((void*)0));
 return (0);
}
