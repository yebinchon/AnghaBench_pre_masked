
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef scalar_t__ HWND ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ,long) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

UINT FUNC_2(UINT VAR_9)
{
    UINT VAR_10 = VAR_9;


    HWND VAR_11;
    VAR_11 = (HWND)FUNC_1(VAR_7, VAR_4, 0, 0L);
    if (VAR_11 && FUNC_0(VAR_11, VAR_0) & VAR_5)
        VAR_10--;


    if (VAR_10 >= VAR_2 && VAR_6)
    {
        VAR_10++;
    }

    if (VAR_10 >= VAR_1 + VAR_8)
    {
        VAR_10 += VAR_3 - VAR_8;
    }

    return VAR_10;
}
