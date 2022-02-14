
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* PHANDLE ;
typedef scalar_t__ LPTSTR ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_3(
    HWND VAR_8,
    LPTSTR VAR_9,
    PHANDLE VAR_10)
{
    int VAR_11;





    VAR_11 = FUNC_1( VAR_6,
                         (LPTSTR) FUNC_2(VAR_0),
                         VAR_7,
                         VAR_1,
                         (LPARAM)VAR_9 );




    if (VAR_11 == VAR_2)
    {
        if (*VAR_10 == VAR_3)
        {
            return (VAR_4);
        }
        else
        {
            return (VAR_5);
        }
    }
    else
    {





        if (*VAR_10 != VAR_3)
        {
            FUNC_0(*VAR_10);
            *VAR_10 = VAR_3;
        }

        return (VAR_11);
    }
}
