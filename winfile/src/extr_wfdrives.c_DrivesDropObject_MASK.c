
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
typedef int VOID ;
struct TYPE_3__ {scalar_t__ dwData; int ptDrop; int hwndSink; } ;
typedef int TCHAR ;
typedef scalar_t__ LPTSTR ;
typedef TYPE_1__* LPDROPSTRUCT ;
typedef long LPARAM ;
typedef scalar_t__ HWND ;
typedef size_t DRIVEIND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int *,int ) ;
 size_t FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_7 (size_t,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int ,long) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int *,int ) ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;

VOID
FUNC_10(HWND VAR_9, LPDROPSTRUCT VAR_10)
{
    DRIVEIND VAR_11;
    TCHAR VAR_12[VAR_2 * 2];
    LPTSTR VAR_13;
    BOOL VAR_14;
    HWND VAR_15;

    VAR_15 = VAR_5 ? VAR_5 :
    (HWND)FUNC_8(VAR_6, VAR_3, 0, 0L);

    VAR_14 = FUNC_6(VAR_15);

    if (VAR_14) {
UseCurDir:
      FUNC_8(VAR_15, VAR_1, FUNC_1(VAR_12), (LPARAM)VAR_12);
    } else {

      VAR_11 = FUNC_4(VAR_10->hwndSink, VAR_10->ptDrop);

      if (VAR_11 < 0)
          goto UseCurDir;



      FUNC_5((WORD)(VAR_7[VAR_11] + 1), VAR_12);
    }
    FUNC_0(VAR_12);
    FUNC_9(VAR_12, VAR_8);

    VAR_13 = (LPTSTR)VAR_10->dwData;

    FUNC_2(VAR_12);
    FUNC_3(VAR_13, VAR_12, VAR_4);

    if (!VAR_14)
        FUNC_7(VAR_11, VAR_0);
}
