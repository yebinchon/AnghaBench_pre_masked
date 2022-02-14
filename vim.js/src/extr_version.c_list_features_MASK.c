
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int ** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4()
{
    int VAR_4;
    int VAR_5;
    int VAR_6;
    int VAR_7 = 0;
    int VAR_8 = 0;



    for (VAR_4 = 0; VAR_1[VAR_4] != ((void*)0); ++VAR_4)
    {
 int VAR_9 = (int)FUNC_0(VAR_1[VAR_4]);

 if (VAR_9 > VAR_8)
     VAR_8 = VAR_9;
 ++VAR_7;
    }
    VAR_8 += 1;

    if (VAR_0 < VAR_8)
    {

 for (VAR_4 = 0; VAR_1[VAR_4] != ((void*)0); ++VAR_4)
 {
     FUNC_3(VAR_1[VAR_4]);
     if (VAR_3 > 0)
  FUNC_1('\n');
 }
 return;
    }



    VAR_5 = (int) (VAR_0 + 1) / VAR_8;
    VAR_6 = VAR_7 / VAR_5 + (VAR_7 % VAR_5 ? 1 : 0);


    for (VAR_4 = 0; !VAR_2 && VAR_4 < VAR_6 * VAR_5; ++VAR_4)
    {
 int VAR_10 = (VAR_4 / VAR_5) + (VAR_4 % VAR_5) * VAR_6;

 if (VAR_10 < VAR_7)
 {
     int VAR_11 = (VAR_4 + 1) % VAR_5 == 0;

     FUNC_2((char_u *)VAR_1[VAR_10]);
     if (VAR_11)
     {
  if (VAR_3 > 0)
      FUNC_1('\n');
     }
     else
     {
  while (VAR_3 % VAR_8)
      FUNC_1(' ');
     }
 }
 else
 {
     if (VAR_3 > 0)
  FUNC_1('\n');
 }
    }
}
