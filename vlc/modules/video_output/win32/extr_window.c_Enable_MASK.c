
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_window_t ;
struct TYPE_9__ {int hwnd; } ;
typedef TYPE_2__ vout_window_sys_t ;
struct TYPE_10__ {int height; int width; int y; int x; scalar_t__ is_decorated; } ;
typedef TYPE_3__ vout_window_cfg_t ;
typedef int LONG ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_5(vout_window_t *VAR_9, const vout_window_cfg_t *VAR_10)
{
    vout_window_sys_t *VAR_11 = VAR_9->sys;

    LONG VAR_12;
    if (VAR_10->is_decorated)
        VAR_12 = VAR_6 | VAR_8;
    else
        VAR_12 = VAR_7;
    VAR_12 |= VAR_4;


    bool VAR_13 = FUNC_4( VAR_9, "mouse-events" );
    bool VAR_14 = FUNC_4( VAR_9, "keyboard-events" );
    if( !VAR_13 && !VAR_14 )
        VAR_12 |= VAR_5;
    FUNC_2(VAR_11->hwnd, VAR_0, VAR_12);

    if (VAR_10->x || VAR_10->y)
        FUNC_0(VAR_11->hwnd, VAR_10->x, VAR_10->y, VAR_10->width, VAR_10->height, VAR_2);

    FUNC_1(VAR_9, VAR_10->width, VAR_10->height);

    FUNC_3( VAR_11->hwnd, VAR_1 );
    return VAR_3;
}
