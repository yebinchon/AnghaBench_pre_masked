
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int has_double_click; } ;
struct TYPE_14__ {int * hwnd; } ;
struct TYPE_16__ {TYPE_2__ info; int * ops; TYPE_1__ handle; int type; TYPE_4__* sys; } ;
typedef TYPE_3__ vout_window_t ;
struct TYPE_17__ {int is_cursor_hidden; int b_ready; int b_done; int * hwnd; int lock; int wait; int thread; scalar_t__ vlc_icon; int cursor_arrow; int class_main; int cursor_empty; int hide_timeout; scalar_t__ button_pressed; } ;
typedef TYPE_4__ vout_window_sys_t ;
typedef scalar_t__ WNDPROC ;
struct TYPE_18__ {int style; int hCursor; int lpszClassName; scalar_t__ hIcon; int hInstance; scalar_t__ lpfnWndProc; int member_0; } ;
typedef TYPE_5__ WNDCLASS ;
typedef int WCHAR ;
typedef int HINSTANCE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int *,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 (int *,int ) ;
 int VAR_4 ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_12 (int ,int ,int ,void*) ;
 int FUNC_13 (TYPE_3__*,char*,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_16 (int *,int ,TYPE_3__*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 TYPE_4__* FUNC_22 (int ,int,int) ;

__attribute__((used)) static int FUNC_23(vout_window_t *VAR_12)
{
    vout_window_sys_t *VAR_13 = FUNC_22(FUNC_11(VAR_12), 1, sizeof(vout_window_sys_t));
    if (FUNC_14(VAR_13 == ((void*)0)))
        return VAR_6;

    FUNC_12( VAR_13->class_main, FUNC_0(VAR_13->class_main),
               FUNC_10("VLC standalone window %p"), (void *)VAR_13 );

    HINSTANCE VAR_14 = FUNC_7(((void*)0));

    WCHAR VAR_15[VAR_4];
    if( FUNC_6( ((void*)0), VAR_15, VAR_4 ) )
        VAR_13->vlc_icon = FUNC_4( VAR_14, VAR_15 , 0 );

    VAR_13->button_pressed = 0;
    VAR_13->is_cursor_hidden = 0;
    VAR_13->hide_timeout = FUNC_15( VAR_12, "mouse-hide-timeout" );
    VAR_13->cursor_arrow = FUNC_8(((void*)0), VAR_3);
    VAR_13->cursor_empty = FUNC_3(VAR_14);

    WNDCLASS VAR_16 = { 0 };

    VAR_16.style = VAR_1|VAR_0;
    VAR_16.lpfnWndProc = (WNDPROC)VAR_10;
    VAR_16.hInstance = VAR_14;
    VAR_16.hIcon = VAR_13->vlc_icon;
    VAR_16.lpszClassName = VAR_13->class_main;
    VAR_16.hCursor = VAR_13->cursor_arrow;


    if( !FUNC_9(&VAR_16) )
    {
        if( VAR_13->vlc_icon )
            FUNC_2( VAR_13->vlc_icon );

        FUNC_13( VAR_12, "RegisterClass FAILED (err=%lu)", FUNC_5() );
        return VAR_5;
    }
    FUNC_19( &VAR_13->lock );
    FUNC_17( &VAR_13->wait );
    VAR_13->b_ready = 0;
    VAR_13->b_done = 0;

    VAR_12->sys = VAR_13;
    if( FUNC_16( &VAR_13->thread, VAR_2, VAR_12, VAR_8 ) )
    {
        FUNC_1(VAR_12);
        return VAR_5;
    }

    FUNC_20( &VAR_13->lock );
    while( !VAR_13->b_ready )
    {
        FUNC_18( &VAR_13->wait, &VAR_13->lock );
    }
    if (VAR_13->hwnd == ((void*)0))
    {
        FUNC_21( &VAR_13->lock );
        FUNC_1(VAR_12);
        return VAR_5;
    }
    FUNC_21( &VAR_13->lock );

    VAR_12->sys = VAR_13;
    VAR_12->type = VAR_9;
    VAR_12->handle.hwnd = VAR_13->hwnd;
    VAR_12->ops = &VAR_11;
    VAR_12->info.has_double_click = 1;
    return VAR_7;
}
