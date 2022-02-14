
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int hparent; int hvideownd; } ;
typedef TYPE_2__ vout_display_sys_win32_t ;
typedef int vlc_object_t ;
struct TYPE_22__ {TYPE_1__* lpVtbl; } ;
struct TYPE_21__ {int dwOSVersionInfoSize; int dwMajorVersion; } ;
struct TYPE_20__ {int y; int x; int member_1; int member_0; } ;
struct TYPE_19__ {int top; scalar_t__ bottom; int left; scalar_t__ right; } ;
struct TYPE_17__ {scalar_t__ (* SetThumbnailClip ) (TYPE_6__*,int ,TYPE_3__*) ;int (* Release ) (TYPE_6__*) ;int (* HrInit ) (TYPE_6__*) ;} ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__ POINT ;
typedef TYPE_5__ OSVERSIONINFO ;
typedef TYPE_6__ ITaskbarList3 ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 int VAR_4 ;
 unsigned int FUNC_7 (TYPE_3__) ;
 unsigned int FUNC_8 (TYPE_3__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (int ,TYPE_4__*) ;
 int FUNC_10 (int *,char*,scalar_t__) ;
 int FUNC_11 (TYPE_6__*) ;
 scalar_t__ FUNC_12 (TYPE_6__*,int ,TYPE_3__*) ;
 int FUNC_13 (TYPE_6__*) ;
 int FUNC_14 () ;

__attribute__((used)) static void FUNC_15(vlc_object_t *VAR_6, vout_display_sys_win32_t *VAR_7, bool VAR_8)
{

    OSVERSIONINFO VAR_9;
    VAR_9.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
    if (!FUNC_5(&VAR_9) || VAR_9.dwMajorVersion <= 5)
        return;

    if( FUNC_3(FUNC_1(((void*)0), VAR_2)) )
        FUNC_14();

    void *VAR_10;
    if (VAR_5 == FUNC_0(&VAR_1,
                                 ((void*)0), VAR_0,
                                 &VAR_4,
                                 &VAR_10)) {
        ITaskbarList3 *VAR_11 = VAR_10;
        VAR_11->lpVtbl->HrInit(VAR_11);

        HWND VAR_12 = FUNC_4(VAR_7->hvideownd, VAR_3);
        RECT VAR_13;
        if (VAR_8) {
            FUNC_6(VAR_7->hparent, &VAR_13);
            POINT VAR_14 = {VAR_13.left, VAR_13.top};
            if (FUNC_9(VAR_12, &VAR_14))
            {
                unsigned int VAR_15 = FUNC_8(VAR_13);
                unsigned int VAR_16 = FUNC_7(VAR_13);
                VAR_13.left = VAR_14.x;
                VAR_13.top = VAR_14.y;
                VAR_13.right = VAR_13.left + VAR_15;
                VAR_13.bottom = VAR_13.top + VAR_16;
            }
        }
        HRESULT VAR_17;
        VAR_17 = VAR_11->lpVtbl->SetThumbnailClip(VAR_11, VAR_12,
                                                 VAR_8 ? &VAR_13 : ((void*)0));
        if ( VAR_17 != VAR_5 )
            FUNC_10(VAR_6, "SetThumbNailClip failed: 0x%lX", VAR_17);

        VAR_11->lpVtbl->Release(VAR_11);
    }
    FUNC_2();
}
