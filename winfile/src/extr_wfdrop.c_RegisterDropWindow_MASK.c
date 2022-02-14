
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IUnknown {int dummy; } ;
typedef int WF_IDropTarget ;
typedef int LPDROPTARGET ;
typedef int HWND ;


 int FUNC_0 (struct IUnknown*,int ,int ) ;
 int FUNC_1 (int ,int **) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

void FUNC_3(HWND VAR_2, WF_IDropTarget **VAR_3)
{
 WF_IDropTarget *VAR_4;

 FUNC_1(VAR_2, &VAR_4);


 FUNC_0((struct IUnknown*)VAR_4, VAR_1, VAR_0);


 FUNC_2(VAR_2, (LPDROPTARGET)VAR_4);

 *VAR_3 = VAR_4;
}
