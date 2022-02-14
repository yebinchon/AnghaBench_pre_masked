
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;

char_u *
FUNC_2(char_u *VAR_0)
{
    char_u *VAR_1;
    int VAR_2;
    char_u *VAR_3, *VAR_4;

    VAR_2 = FUNC_0(VAR_0);

    if (VAR_2 > 255)
 VAR_2 = 255;

    VAR_1 = FUNC_1(VAR_2 + 1);
    if (VAR_1 != ((void*)0))
    {
 for (VAR_4 = VAR_0, VAR_3 = VAR_1+1, VAR_2 = 0; (*VAR_4 != 0) && (VAR_2 < 255); VAR_4++)
 {
     if ((*VAR_4 == '\\') && (VAR_4[1] != 0))
     {
  VAR_4++;
     }
     *VAR_3 = *VAR_4;
     VAR_3++;
     VAR_2++;
 }
 VAR_1[0] = VAR_2;
    }

    return VAR_1;
}
