
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* OurCloseGestureInfoHandle ) (int ) ;scalar_t__ (* DecodeGestureImpl ) (int *,TYPE_1__*,TYPE_2__*) ;scalar_t__ (* OurGetGestureInfo ) (int ,TYPE_2__*) ;} ;
typedef TYPE_1__ win32_gesture_sys_t ;
typedef int vlc_object_t ;
typedef int WPARAM ;
typedef int UINT ;
struct TYPE_9__ {int cbSize; } ;
typedef int LRESULT ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef int HGESTUREINFO ;
typedef TYPE_2__ GESTUREINFO ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (int ) ;

LRESULT FUNC_7( vlc_object_t *VAR_1, win32_gesture_sys_t *VAR_2,
                       HWND VAR_3, UINT VAR_4, WPARAM VAR_5, LPARAM VAR_6 )
{
    if( !VAR_2 )
        return FUNC_0( VAR_3, VAR_4, VAR_5, VAR_6 );

    GESTUREINFO VAR_7;
    FUNC_2( &VAR_7, sizeof( GESTUREINFO ) );
    VAR_7.cbSize = sizeof( GESTUREINFO );

    BOOL VAR_8 = VAR_2->OurGetGestureInfo((HGESTUREINFO)VAR_6, &VAR_7);
    BOOL VAR_9 = VAR_0;

    if( VAR_8 )
        VAR_9 = VAR_2->DecodeGestureImpl(VAR_1, VAR_2, &VAR_7);
    else
    {
        DWORD VAR_10 = FUNC_1();
        if( VAR_10 > 0 )
            FUNC_3( VAR_1, "Could not retrieve a valid GESTUREINFO structure" );
    }

    if( VAR_9 )
    {


        VAR_2->OurCloseGestureInfoHandle((HGESTUREINFO)VAR_6);
        return 0;
    }
    else
        return FUNC_0( VAR_3, VAR_4, VAR_5, VAR_6 );
}
