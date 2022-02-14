
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long DWORD ;


 scalar_t__ FUNC_0 () ;
 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;

DWORD FUNC_1()
{
    DWORD VAR_3 = 0L;

    if (FUNC_0())
    {
        VAR_3 = VAR_0;
        if (!VAR_2)
            VAR_3 |= VAR_1;
    }
    else
    {
        VAR_3 = VAR_2 ? VAR_0 : 0;
    }

    return VAR_3;
}
