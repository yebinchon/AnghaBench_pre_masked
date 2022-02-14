
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int m_lRefCount; int m_fAllowDrop; int m_hWnd; TYPE_1__ idt; } ;
typedef TYPE_2__ WF_IDropTarget ;
typedef int IDropTargetVtbl ;
typedef int HWND ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int VAR_1 ;

WF_IDropTarget * FUNC_1(HWND VAR_2)
{
  WF_IDropTarget *VAR_3;

  VAR_3 = FUNC_0(1, sizeof(WF_IDropTarget));

  if (VAR_3)
  {
   VAR_3->idt.lpVtbl = (IDropTargetVtbl*)&VAR_1;

   VAR_3->m_lRefCount = 1;
   VAR_3->m_hWnd = VAR_2;
   VAR_3->m_fAllowDrop = VAR_0;


  }

  return VAR_3;
}
