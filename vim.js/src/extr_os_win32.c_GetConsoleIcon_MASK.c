
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int LPARAM ;
typedef int * HWND ;
typedef scalar_t__ HICON ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOL
FUNC_1(
    HWND VAR_5,
    HICON *VAR_6,
    HICON *VAR_7)
{
    if (VAR_5 == ((void*)0))
 return VAR_0;

    if (VAR_6 != ((void*)0))
 *VAR_6 = (HICON)FUNC_0(VAR_5, VAR_4,
            (WPARAM)VAR_2, (LPARAM)0);
    if (VAR_7 != ((void*)0))
 *VAR_7 = (HICON)FUNC_0(VAR_5, VAR_4,
       (WPARAM)VAR_1, (LPARAM)0);
    return VAR_3;
}
