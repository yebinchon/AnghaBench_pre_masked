
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int * hvideownd; int * hparent; int event; int dxgidebug_dll; } ;
typedef TYPE_3__ vout_display_sys_win32_t ;
typedef int vlc_object_t ;
struct TYPE_17__ {int * hvideownd; int * hparent; } ;
typedef TYPE_4__ event_hwnd_t ;
struct TYPE_18__ {int is_projected; int height; int width; } ;
typedef TYPE_5__ event_cfg_t ;
struct TYPE_14__ {int height; int width; } ;
struct TYPE_15__ {TYPE_1__ display; int * window; } ;
struct TYPE_19__ {TYPE_2__ vdcfg; } ;
typedef TYPE_6__ display_win32_area_t ;
typedef int cfg ;


 int FUNC_0 (int *,TYPE_6__*,TYPE_3__*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ,TYPE_4__*,TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(vlc_object_t *VAR_2, display_win32_area_t *VAR_3,
                     vout_display_sys_win32_t *VAR_4, bool VAR_5)
{
    if (FUNC_6(VAR_3->vdcfg.window == ((void*)0)))
        return VAR_0;





    VAR_4->hvideownd = ((void*)0);
    VAR_4->hparent = ((void*)0);


    VAR_4->event = FUNC_1(VAR_2, VAR_3->vdcfg.window);
    if (!VAR_4->event)
        return VAR_0;


    event_cfg_t VAR_6;
    FUNC_5(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.width = VAR_3->vdcfg.display.width;
    VAR_6.height = VAR_3->vdcfg.display.height;
    VAR_6.is_projected = VAR_5;

    event_hwnd_t VAR_7;
    if (FUNC_2(VAR_4->event, &VAR_7, &VAR_6))
        return VAR_0;

    VAR_4->hparent = VAR_7.hparent;
    VAR_4->hvideownd = VAR_7.hvideownd;

    FUNC_0(VAR_2, VAR_3, VAR_4);

    return VAR_1;
}
