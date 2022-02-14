
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef void* HMODULE ;
typedef int DWORD ;


 int VAR_0 ;
 void* FUNC_0 (int *,int *,int ) ;
 void* FUNC_1 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;

void *FUNC_5(const char *VAR_2, bool VAR_3)
{
    wchar_t *VAR_4 = FUNC_3 (VAR_2);
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    HMODULE VAR_5 = ((void*)0);

    DWORD VAR_6;
    if (FUNC_2 (VAR_1, &VAR_6) != 0)
    {
        VAR_5 = FUNC_0(VAR_4, ((void*)0), VAR_0);
        FUNC_2 (VAR_6, ((void*)0));
    }



    FUNC_4 (VAR_4);

    (void) VAR_3;
    return VAR_5;
}
