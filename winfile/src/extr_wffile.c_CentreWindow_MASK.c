
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int right; int left; int bottom; int top; } ;
typedef TYPE_1__ RECT ;
typedef int LONG ;
typedef int * HWND ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int,int,int ,int ,int) ;
 int VAR_3 ;

VOID FUNC_6(
    HWND VAR_4)
{
    RECT VAR_5;
    RECT VAR_6;
    HWND VAR_7;
    LONG VAR_8, VAR_9;
    LONG VAR_10, VAR_11;
    LONG VAR_12;




    FUNC_3(VAR_4, &VAR_5);

    VAR_8 = VAR_5.right - VAR_5.left;
    VAR_9 = VAR_5.bottom - VAR_5.top;




    VAR_12 = FUNC_2(VAR_4, VAR_0);
    if ((VAR_12 & VAR_3) == 0)
    {
        VAR_7 = FUNC_0();
    }
    else
    {
        VAR_7 = FUNC_1(VAR_4);
        if (VAR_7 == ((void*)0))
        {
            VAR_7 = FUNC_0();
        }
    }
    FUNC_3(VAR_7, &VAR_6);

    VAR_10 = VAR_6.right - VAR_6.left;
    VAR_11 = VAR_6.bottom - VAR_6.top;




    VAR_5.left = (VAR_10 - VAR_8) / 2;
    VAR_5.top = (VAR_11 - VAR_9) / 3;




    FUNC_5( VAR_4,
                  ((void*)0),
                  VAR_5.left,
                  VAR_5.top,
                  0,
                  0,
                  VAR_1 | VAR_2 );

    FUNC_4(VAR_4);
}
