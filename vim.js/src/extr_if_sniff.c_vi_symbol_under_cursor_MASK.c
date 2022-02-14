
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;


 int VAR_0 ;
 int FUNC_0 (int **,int ) ;

__attribute__((used)) static char *
FUNC_1()
{
    int VAR_1;
    char *VAR_2;
    char *VAR_3;
    static char VAR_4[256];

    VAR_1 = FUNC_0((char_u **)&VAR_2, VAR_0);

    if (VAR_1 <= 0)
 return ((void*)0);
    for (VAR_3=VAR_4; VAR_1; VAR_1--)
 *VAR_3++ = *VAR_2++;
    *VAR_3 = '\0';
    return VAR_4;
}
