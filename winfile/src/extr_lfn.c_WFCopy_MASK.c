
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int * LPTSTR ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (int *,int *) ;

DWORD
FUNC_6(LPTSTR VAR_6, LPTSTR VAR_7)
{
    DWORD VAR_8;
    TCHAR VAR_9[VAR_4];

    FUNC_3(VAR_5, VAR_3, VAR_6, VAR_7);

    if (FUNC_1(VAR_6, VAR_7, VAR_1))
    {
        FUNC_0(VAR_2, VAR_7, ((void*)0));
        VAR_8 = 0;
    }
    else
    {
        VAR_8 = FUNC_2();
        if (VAR_8 == VAR_0)
        {






            FUNC_5(VAR_9, VAR_7);
            FUNC_4(VAR_9);
            if (FUNC_1(VAR_6, VAR_9, VAR_1))
            {
                FUNC_0(VAR_2, VAR_9, ((void*)0));
                VAR_8 = 0;
            }


        }
    }

    return (VAR_8);
}
