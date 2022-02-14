
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 int VAR_0 ;
 int * VAR_1 ;
 char VAR_2 ;
 char* FUNC_0 (int *) ;
 char* FUNC_1 (unsigned int) ;

__attribute__((used)) static char_u *
FUNC_2()
{
    int VAR_3;
    int VAR_4;
    char_u *VAR_5 = ((void*)0);
    char_u *VAR_6;






    for (;;)
    {
 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
 {
     VAR_6 = FUNC_0(&VAR_1[VAR_4]);
     if (VAR_6 != ((void*)0))
     {
  if (VAR_3 > 0)
  {

      if (VAR_5 != ((void*)0))
   VAR_5[VAR_3] = ' ';
      ++VAR_3;
  }
  for ( ; *VAR_6 != VAR_2; ++VAR_6)
  {
      if (*VAR_6 == ' ' || *VAR_6 == '\\')
      {

   if (VAR_5 != ((void*)0))
       VAR_5[VAR_3] = '\\';
   ++VAR_3;
      }
      if (VAR_5 != ((void*)0))
   VAR_5[VAR_3] = *VAR_6;
      ++VAR_3;
  }
     }
 }


 if (VAR_5 != ((void*)0))
 {
     VAR_5[VAR_3] = VAR_2;
     break;
 }


 VAR_5 = FUNC_1((unsigned)VAR_3 + 1);
 if (VAR_5 == ((void*)0))
     break;
    }

    return VAR_5;
}
