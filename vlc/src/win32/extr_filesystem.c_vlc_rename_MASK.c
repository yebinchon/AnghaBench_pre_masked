
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*) ;

int FUNC_4 (const char *VAR_3, const char *VAR_4)
{
    int VAR_5 = -1;

    wchar_t *VAR_6 = FUNC_3 (VAR_3), *VAR_7 = FUNC_3 (VAR_4);
    if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
        goto out;

    if (FUNC_1 (VAR_6, VAR_7) && (VAR_2 == VAR_0 || VAR_2 == VAR_1))
    {
        if (FUNC_0 (VAR_7))
        {
            VAR_2 = VAR_0;
            goto out;
        }
        if (FUNC_1 (VAR_6, VAR_7))
            goto out;
    }
    VAR_5 = 0;
out:
    FUNC_2 (VAR_7);
    FUNC_2 (VAR_6);
    return VAR_5;
}
