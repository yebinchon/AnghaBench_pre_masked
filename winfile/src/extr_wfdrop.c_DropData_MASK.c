
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_iItemSelected; int * m_hWnd; } ;
typedef TYPE_1__ WF_IDropTarget ;
typedef int WCHAR ;
typedef int PDNODE ;
typedef int LPXDTA ;
typedef int * LPWSTR ;
typedef scalar_t__ LPTSTR ;
typedef int LPARAM ;
typedef int IDataObject ;
typedef int * HWND ;
typedef int HLOCAL ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,int,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_12 (int *,int ) ;
 int VAR_10 ;

void FUNC_13(WF_IDropTarget *VAR_11, IDataObject *VAR_12, DWORD VAR_13)
{

 HWND VAR_14;
 BOOL VAR_15;
 LPWSTR VAR_16 = ((void*)0);
 WCHAR VAR_17[VAR_8];

 VAR_14 = FUNC_4(VAR_11->m_hWnd, VAR_4);
 VAR_15 = VAR_2;
 if (VAR_14 == ((void*)0))
 {
  VAR_14 = FUNC_4(VAR_11->m_hWnd, VAR_5);
  VAR_15 = VAR_9;

  if (VAR_14 == ((void*)0))
   return;
 }


 if (VAR_15)
 {
     PDNODE VAR_18;


  if (VAR_11->m_iItemSelected == -1)
   return;

  if (FUNC_10(VAR_14, VAR_7, VAR_11->m_iItemSelected, (LPARAM)&VAR_18) == VAR_6)
   return;

  FUNC_5(VAR_18, VAR_17);
 }
 else
 {
  LPXDTA VAR_19;

  FUNC_10(VAR_11->m_hWnd, VAR_3, FUNC_1(VAR_17), (LPARAM)VAR_17);

  if (VAR_11->m_iItemSelected != -1)
  {
   FUNC_10(VAR_14, VAR_7, VAR_11->m_iItemSelected,
    (LPARAM)(LPTSTR)&VAR_19);

   FUNC_0(VAR_17);
   FUNC_12(VAR_17, FUNC_7(VAR_19));
  }
 }

    FUNC_0(VAR_17);
    FUNC_12(VAR_17, VAR_10);

    FUNC_2(VAR_17);


 if ((VAR_16 = FUNC_9(VAR_12)) == ((void*)0))
 {
  VAR_16 = FUNC_8(VAR_12);
  VAR_13 = VAR_1;
 }

 if (VAR_16 != ((void*)0))
 {
  FUNC_11(VAR_11->m_hWnd);

  FUNC_3(VAR_16, VAR_17, VAR_13 == VAR_0);

  FUNC_6((HLOCAL)VAR_16);
 }
}
