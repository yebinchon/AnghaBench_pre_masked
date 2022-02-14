
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int WORD ;
typedef int RECT ;
typedef int POINT ;
typedef int LPTSTR ;
typedef int * HWND ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,long) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_0 ;
 int * VAR_1 ;

WORD
FUNC_6(LPTSTR VAR_2)
{
    POINT VAR_3;
    HWND VAR_4;
    RECT VAR_5;
    HANDLE VAR_6;

    if (!(VAR_4 = VAR_1))
        return 0;

    VAR_1 = ((void*)0);

    FUNC_2(&VAR_3);
    FUNC_1(VAR_4,&VAR_5);
    FUNC_5(VAR_4,&VAR_3);

    VAR_6 = FUNC_0(VAR_3, !FUNC_4(&VAR_5,VAR_3), VAR_2);

    if (!VAR_6)
        return 0;

    FUNC_3(VAR_4, VAR_0, (WPARAM)VAR_6, 0L);

    return 1;
}
