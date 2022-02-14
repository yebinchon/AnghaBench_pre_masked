
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int m_iItemSelected; int m_hWnd; } ;
typedef TYPE_1__ WF_IDropTarget ;
struct TYPE_9__ {int y; int x; } ;
struct TYPE_8__ {int y; int x; } ;
typedef TYPE_2__ POINTL ;
typedef TYPE_3__ POINT ;
typedef int * HWND ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *,int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *,int,scalar_t__) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 scalar_t__ VAR_4 ;

void FUNC_6(WF_IDropTarget *VAR_5, POINTL *VAR_6)
{
 HWND VAR_7;
 DWORD VAR_8;
 POINT VAR_9;
 BOOL VAR_10;


 VAR_7 = FUNC_1(VAR_5->m_hWnd, VAR_1);
 VAR_10 = VAR_0;
 if (VAR_7 == ((void*)0))
 {
  VAR_7 = FUNC_1(VAR_5->m_hWnd, VAR_2);
  VAR_10 = VAR_4;

  if (VAR_7 == ((void*)0))
   return;
 }

 if (VAR_6 != ((void*)0))
 {
  VAR_9.x = VAR_6->x;
  VAR_9.y = VAR_6->y;
  FUNC_4(VAR_7, &VAR_9);

  VAR_8 = FUNC_5(VAR_7, VAR_3, 0, FUNC_2(VAR_9.x, VAR_9.y));
  VAR_8 &= 0xffff;
  if (VAR_5->m_iItemSelected != -1 && VAR_5->m_iItemSelected == VAR_8)
   return;
 }


 if (VAR_5->m_iItemSelected != -1)
 {
     if (VAR_10)
   FUNC_3(VAR_7, VAR_5->m_iItemSelected, VAR_0);
  else
   FUNC_0(VAR_7, VAR_5->m_iItemSelected, VAR_0, VAR_0);

  VAR_5->m_iItemSelected = (DWORD)-1;
 }


 if (VAR_6 != ((void*)0))
 {
     if (VAR_10)
  {
   if (FUNC_3(VAR_7, VAR_8, VAR_4))
    VAR_5->m_iItemSelected = VAR_8;
  }
  else
  {
   if (FUNC_0(VAR_7, VAR_8, VAR_4, VAR_0))
    VAR_5->m_iItemSelected = VAR_8;
  }
 }
}
