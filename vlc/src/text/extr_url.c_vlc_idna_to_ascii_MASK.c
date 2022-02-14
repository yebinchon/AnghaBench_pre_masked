
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_1 (int ,int *,int,int *,int) ;
 int * FUNC_2 (char const*) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,char**,int ) ;
 char* FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int,int) ;

__attribute__((used)) static char *FUNC_8 (const char *VAR_6)
{
    for (const char *VAR_7 = VAR_6; *VAR_7; VAR_7++)
        if (((unsigned char)*VAR_7) >= 0x80)
        {
            VAR_5 = VAR_2;
            return ((void*)0);
        }

    return FUNC_5 (VAR_6);


}
