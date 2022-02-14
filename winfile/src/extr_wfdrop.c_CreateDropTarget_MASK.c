
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WF_IDropTarget ;
typedef int HWND ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;

HRESULT FUNC_1(HWND VAR_3, WF_IDropTarget **VAR_4)
{
 if(VAR_4 == 0)
  return VAR_0;

 *VAR_4 = FUNC_0(VAR_3);

 return (*VAR_4) ? VAR_2 : VAR_1;

}
