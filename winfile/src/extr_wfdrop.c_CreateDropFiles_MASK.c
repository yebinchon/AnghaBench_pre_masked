
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_2__ {int pFiles; int fWide; int fNC; int pt; } ;
typedef int TCHAR ;
typedef int POINT ;
typedef int LPTSTR ;
typedef TYPE_1__* LPDROPFILES ;
typedef scalar_t__ LPBYTE ;
typedef int * HDROP ;
typedef int * HANDLE ;
typedef int DROPFILES ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;
 int * FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

HDROP FUNC_8(POINT VAR_5, BOOL VAR_6, LPTSTR VAR_7)
{
    HANDLE VAR_8;
    LPBYTE VAR_9;
    UINT VAR_10;
 LPTSTR VAR_11;

    LPDROPFILES VAR_12;
    TCHAR VAR_13[VAR_3];

 VAR_10 = sizeof(DROPFILES) + sizeof(TCHAR);

 VAR_11 = VAR_7;
    while ((VAR_11 = FUNC_1(VAR_11, VAR_13, FUNC_0(VAR_13))))
 {
        FUNC_5(VAR_13);

  VAR_10 += (FUNC_7(VAR_13) + 1)*sizeof(TCHAR);
 }

    VAR_8 = FUNC_2(VAR_0|VAR_1|VAR_2, VAR_10);
    if (!VAR_8)
        return ((void*)0);

    VAR_12 = (LPDROPFILES)FUNC_3(VAR_8);

    VAR_12->pFiles = sizeof(DROPFILES);
 VAR_12->pt = VAR_5;
 VAR_12->fNC = VAR_6;
    VAR_12->fWide = VAR_4;

 VAR_9 = (LPBYTE)VAR_12 + sizeof(DROPFILES);
 VAR_11 = VAR_7;

    while ((VAR_11 = FUNC_1(VAR_11, VAR_13, FUNC_0(VAR_13)))) {

       FUNC_5(VAR_13);

       FUNC_6((LPTSTR)VAR_9, VAR_13);

       VAR_9 += (FUNC_7(VAR_13) + 1)*sizeof(TCHAR);
    }

 FUNC_4(VAR_8);

 return VAR_8;
}
