
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int item ;
typedef int hdr ;
typedef void* WORD ;
typedef int VOID ;
struct TYPE_11__ {scalar_t__ iStartBmp; scalar_t__ Delta; } ;
struct TYPE_8__ {scalar_t__ dwData; int fsStyle; int fsState; scalar_t__ idCommand; scalar_t__ iBitmap; } ;
struct TYPE_10__ {int iItem; int cButtons; scalar_t__* pCurrent; TYPE_1__ tbButton; scalar_t__ cbData; scalar_t__* pData; } ;
struct TYPE_9__ {int cButtons; void* iExtP1; int fsStyle; int fsState; void* idCommand; void* iBitmap; int version; int magic; } ;
typedef TYPE_2__ TBSAVEITEM ;
typedef TYPE_2__ TBSAVEHDR ;
typedef TYPE_4__* LPNMTBSAVE ;
typedef size_t INT ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_1 (scalar_t__*,TYPE_2__*,int) ;

VOID
FUNC_2(LPNMTBSAVE VAR_4)
{
    if (VAR_4->iItem == -1)
    {
        VAR_4->cbData = VAR_4->cbData + sizeof(TBSAVEHDR) + sizeof(TBSAVEITEM) * VAR_4->cButtons;
        VAR_4->pCurrent = VAR_4->pData = FUNC_0(VAR_0, VAR_4->cbData);


        TBSAVEHDR VAR_5;
        VAR_5.magic = VAR_1;
        VAR_5.version = VAR_2;
        VAR_5.cButtons = VAR_4->cButtons;
        FUNC_1(VAR_4->pCurrent, &VAR_5, sizeof(VAR_5));
        VAR_4->pCurrent = (DWORD *)((BYTE *)VAR_4->pCurrent + sizeof(VAR_5));
    }
    else
    {
        TBSAVEITEM VAR_6;
        DWORD VAR_7 = 0;
        DWORD VAR_8 = 0;


        if (VAR_4->tbButton.dwData != 0)
        {
            INT VAR_9 = VAR_4->tbButton.dwData - 1;
            VAR_7 = VAR_3[VAR_9].Delta;
            VAR_8 = VAR_3[VAR_9].iStartBmp;
        }

        VAR_6.iBitmap = (WORD)(VAR_4->tbButton.iBitmap - VAR_8);
        VAR_6.idCommand = (WORD)(VAR_4->tbButton.idCommand - VAR_7);
        VAR_6.fsState = VAR_4->tbButton.fsState;
        VAR_6.fsStyle = VAR_4->tbButton.fsStyle;
        VAR_6.iExtP1 = (WORD)VAR_4->tbButton.dwData;

        FUNC_1(VAR_4->pCurrent, &VAR_6, sizeof(VAR_6));
        VAR_4->pCurrent = (DWORD *)((BYTE *)VAR_4->pCurrent + sizeof(VAR_6));
    }
}
