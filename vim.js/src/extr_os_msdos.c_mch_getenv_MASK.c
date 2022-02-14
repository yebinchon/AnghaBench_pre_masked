
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ char_u ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__*) ;

char_u *
FUNC_5(char_u *VAR_2)
{
    int VAR_3;

    char_u VAR_4[50 + 1];
    char_u *VAR_5;
    char_u *VAR_6;







    if ((VAR_3 = FUNC_0(VAR_2)) > 50)
 VAR_5 = FUNC_1(VAR_3 + 1);
    else
 VAR_5 = VAR_4;
    if (VAR_5 == ((void*)0))
 VAR_5 = VAR_2;
    else
    {
 for (VAR_3 = 0; VAR_2[VAR_3] != VAR_1; ++VAR_3)
     VAR_5[VAR_3] = FUNC_3(VAR_2[VAR_3]);
 VAR_5[VAR_3] = VAR_1;
    }

    VAR_6 = (char_u *)FUNC_2((char *)VAR_5);

    if (VAR_5 != VAR_4 && VAR_5 != VAR_2)
 FUNC_4(VAR_5);

    return VAR_6;
}
