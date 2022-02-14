
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ char_u ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__* FUNC_2 (scalar_t__*) ;

__attribute__((used)) static char_u *
FUNC_3()
{
    char_u *VAR_2;

    VAR_2 = FUNC_2((char_u *)"LC_ALL");
    if (VAR_2 == ((void*)0) || *VAR_2 == VAR_1)
    {
 VAR_2 = FUNC_2((char_u *)"LC_MESSAGES");
 if (VAR_2 == ((void*)0) || *VAR_2 == VAR_1)
 {
     VAR_2 = FUNC_2((char_u *)"LANG");
     if (VAR_2 != ((void*)0) && FUNC_0(*VAR_2))
  VAR_2 = ((void*)0);




 }
    }
    return VAR_2;
}
