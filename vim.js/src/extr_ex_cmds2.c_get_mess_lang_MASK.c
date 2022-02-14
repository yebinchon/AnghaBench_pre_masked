
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ char_u ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__* FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (scalar_t__*) ;

char_u *
FUNC_3()
{
    char_u *VAR_3;
    VAR_3 = FUNC_2((char_u *)"LC_ALL");
    if (VAR_3 == ((void*)0) || *VAR_3 == VAR_2)
    {
 VAR_3 = FUNC_2((char_u *)"LC_MESSAGES");
 if (VAR_3 == ((void*)0) || *VAR_3 == VAR_2)
     VAR_3 = FUNC_2((char_u *)"LANG");
    }




    return VAR_3;
}
