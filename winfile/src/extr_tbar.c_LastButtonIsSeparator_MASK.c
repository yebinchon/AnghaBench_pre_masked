
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fsStyle; } ;
typedef TYPE_1__ TBBUTTON ;
typedef scalar_t__ LPTBBUTTON ;
typedef long LPARAM ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

BOOL FUNC_1(HWND VAR_5)
{
    TBBUTTON VAR_6;

    INT VAR_7 = (INT)FUNC_0(VAR_5, VAR_2, 0, 0L);
    FUNC_0(VAR_5, VAR_3, VAR_7 - 1, (LPARAM)(LPTBBUTTON)&VAR_6);

    return (VAR_6.fsStyle & VAR_1) ? VAR_4 : VAR_0;
}
