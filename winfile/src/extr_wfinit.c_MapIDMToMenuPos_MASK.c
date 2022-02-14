
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ HWND ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int ,long) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

UINT
FUNC_2(UINT VAR_6)
{
    UINT VAR_7;

    if (VAR_6 < 100)
    {

        VAR_7 = VAR_6;
    }
    else
    {

        VAR_7 = VAR_6 / 100 - 1;
    }


    HWND VAR_8;
    VAR_8 = (HWND)FUNC_1(VAR_5, VAR_2, 0, 0L);
    if (VAR_8 && FUNC_0(VAR_8, VAR_0) & VAR_3)
        VAR_7++;


    if (VAR_7 >= VAR_1 && VAR_4)
    {
        VAR_7--;
    }

    return VAR_7;
}
