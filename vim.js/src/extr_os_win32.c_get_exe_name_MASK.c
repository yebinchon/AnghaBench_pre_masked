
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 int VAR_0 ;
 int * FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_1 ;
 char VAR_2 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int * VAR_3 ;
 char* VAR_4 ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (int *,int) ;

__attribute__((used)) static void
FUNC_9(void)
{



    char VAR_5[8192];
    char_u *VAR_6;

    if (VAR_3 == ((void*)0))
    {

 FUNC_1(((void*)0), VAR_5, 8192 - 1);
 if (*VAR_5 != VAR_2)
     VAR_3 = FUNC_0((char_u *)VAR_5, VAR_0);
    }

    if (VAR_4 == ((void*)0) && VAR_3 != ((void*)0))
    {
 VAR_4 = FUNC_8(VAR_3,
         (int)(FUNC_5(VAR_3) - VAR_3));
 if (VAR_4 != ((void*)0))
 {



     VAR_6 = FUNC_6("PATH");
     if (VAR_6 == ((void*)0)
         || FUNC_4(VAR_6) + FUNC_4(VAR_4) + 2 < 8192)
     {
  if (VAR_6 == ((void*)0) || *VAR_6 == VAR_2)
      VAR_5[0] = VAR_2;
  else
  {
      FUNC_3(VAR_5, VAR_6);
      FUNC_2(VAR_5, ";");
  }
  FUNC_2(VAR_5, VAR_4);
  FUNC_7((char_u *)"PATH", VAR_5);
     }
 }
    }
}
