
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,size_t) ;
 char VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;
 char* FUNC_10 (char*,char) ;

__attribute__((used)) static char *
FUNC_11(char *VAR_2, char *VAR_3, int VAR_4)
{







    char VAR_5[VAR_0];
    char *VAR_6, *VAR_7;
    int VAR_8;
    char *VAR_9 = VAR_2;

    if (FUNC_7(VAR_3, ':') != ((void*)0))
    {
 FUNC_9(VAR_2, VAR_3, VAR_4);
    }
    else
    {
 *VAR_2 = VAR_1;





 VAR_6 = FUNC_10(VAR_3, '/');
 VAR_7 = FUNC_10(VAR_3, '\\');
 if (VAR_7 != ((void*)0) && (VAR_6 == ((void*)0) || VAR_7 > VAR_6))
     VAR_6 = VAR_7;
 VAR_7 = FUNC_10(VAR_3, ':');
 if (VAR_7 != ((void*)0) && (VAR_6 == ((void*)0) || VAR_7 > VAR_6))
     VAR_6 = VAR_7;
 if (VAR_6 != ((void*)0))
 {
     if (FUNC_2(VAR_5, VAR_0) == ((void*)0))
     {
  VAR_6 = ((void*)0);
  VAR_9 = ((void*)0);
     }
     else
     {
  if (VAR_6 == VAR_3)
      VAR_7 = VAR_6 + 1;
  else if (VAR_7 + 1 == VAR_6)
      VAR_7 = VAR_6 + 1;
  else
      VAR_7 = VAR_6;

  VAR_8 = *VAR_7;
  *VAR_7 = VAR_1;
  if (FUNC_3(VAR_3))
      VAR_9 = ((void*)0);
  else
  {
      VAR_3 = VAR_7;
      if (VAR_8 == '\\')
   VAR_3++;
  }
  *VAR_7 = VAR_8;
     }
 }
 if (FUNC_2(VAR_2, VAR_4) == ((void*)0))
 {
     VAR_9 = ((void*)0);
     *VAR_2 = VAR_1;
 }



 if (FUNC_8(VAR_2) + FUNC_8(VAR_3) >= VAR_4 - 1)
 {
     FUNC_5("ERROR: File name too long!\n");
     FUNC_4(1);
 }
 FUNC_1(VAR_2);
 FUNC_6(VAR_2, VAR_3);
 if (VAR_6)
     FUNC_3(VAR_5);
    }



    while ((VAR_6 = FUNC_7(VAR_2, '/')) != ((void*)0))
 *VAR_6 = '\\';

    return VAR_9;

}
