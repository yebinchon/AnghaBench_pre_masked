
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (char const*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static wchar_t *FUNC_1 (const char *VAR_2)
{
    wchar_t *VAR_3;

    VAR_1 = 0;
    VAR_3 = FUNC_0 (VAR_2);
    if (VAR_3 == ((void*)0))
    {
        if (VAR_1 == 0)
            VAR_1 = VAR_0;
        return ((void*)0);
    }
    return VAR_3;
}
