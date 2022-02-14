
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int,char*) ;
 int FUNC_2 (char**,size_t*,int *) ;
 char** FUNC_3 (char**,int) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static int
FUNC_5(int VAR_0, char **VAR_1[])
{

 FILE *VAR_2;
 int VAR_3 = 0;
 size_t VAR_4 = 0;
 char *VAR_5 = ((void*)0);
 char **VAR_6 = ((void*)0), **VAR_7;
 char *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_2 = FUNC_1(VAR_0, "r");
 if (VAR_2 == ((void*)0))
  return (0);
 while (1) {
  VAR_9 = FUNC_2(&VAR_5, &VAR_4, VAR_2);
  if (VAR_9 == -1)
   break;

  VAR_7 = FUNC_3(VAR_6, sizeof (*VAR_6) * (VAR_3 + 1));
  if (VAR_7 == ((void*)0)) {

   break;
  }
  VAR_6 = VAR_7;


  if ((VAR_8 = FUNC_4(VAR_5, '\n')) != ((void*)0))
   *VAR_8 = '\0';
  VAR_6[VAR_3] = VAR_5;
  VAR_3++;
  VAR_5 = ((void*)0);
 }
 FUNC_0(VAR_2);
 *VAR_1 = VAR_6;
 return (VAR_3);
}
