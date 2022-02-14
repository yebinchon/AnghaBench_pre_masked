
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat64 {int dummy; } ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char**) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,struct stat64*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int,int **,int *) ;

__attribute__((used)) static char *
FUNC_10(char *VAR_3)
{
 char VAR_4[VAR_1];
 struct stat64 VAR_5;
 int VAR_6;
 int VAR_7;







 VAR_6 = FUNC_5(VAR_3, &VAR_5);
 if (VAR_6 == 0) {
  nvlist_t *VAR_8;
  char *VAR_9;
  int VAR_10;

  VAR_10 = FUNC_4(VAR_3, VAR_0);
  if (VAR_10 < 0)
   goto out;

  VAR_6 = FUNC_9(VAR_10, &VAR_8, ((void*)0));
  (void) FUNC_0(VAR_10);
  if (VAR_6)
   goto out;

  VAR_6 = FUNC_3(VAR_8,
      VAR_2, &VAR_9);
  if (VAR_6) {
   FUNC_2(VAR_8);
  } else {
   VAR_3 = FUNC_6(VAR_9);
   FUNC_2(VAR_8);
   return (VAR_3);
  }
 }
out:







 if (FUNC_1(VAR_4, VAR_1) == ((void*)0))
  return (VAR_3);

 VAR_7 = FUNC_7(VAR_4);


 if (FUNC_8(VAR_4, VAR_3, VAR_7) == 0)
  return (VAR_3 + VAR_7 + (VAR_4[VAR_7-1] != '/'));

 return (VAR_3);
}
