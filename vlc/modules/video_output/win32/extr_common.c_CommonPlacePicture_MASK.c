
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int * event; } ;
typedef TYPE_2__ vout_display_sys_win32_t ;
struct TYPE_16__ {int height; int width; int y; int x; } ;
typedef TYPE_3__ vout_display_place_t ;
struct TYPE_14__ {scalar_t__ vertical; } ;
struct TYPE_17__ {TYPE_1__ align; } ;
typedef TYPE_4__ vout_display_cfg_t ;
typedef int vlc_object_t ;
struct TYPE_19__ {int i_height; int i_width; int i_visible_height; int i_visible_width; int i_y_offset; int i_x_offset; } ;
struct TYPE_18__ {int place_changed; TYPE_3__ place; TYPE_7__ texture_source; TYPE_4__ vdcfg; } ;
typedef TYPE_5__ display_win32_area_t ;


 int FUNC_0 (int *,TYPE_2__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,char*,int ,int ,int ,int ,...) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_7__*,TYPE_4__*) ;

void FUNC_4(vlc_object_t *VAR_2, display_win32_area_t *VAR_3, vout_display_sys_win32_t *VAR_4)
{

    vout_display_cfg_t VAR_5 = VAR_3->vdcfg;
    vout_display_place_t VAR_6 = VAR_3->place;
    FUNC_3(&VAR_3->place, &VAR_3->texture_source, &VAR_5);


    if (!FUNC_2(&VAR_6, &VAR_3->place))
    {
        VAR_3->place_changed |= 1;


        FUNC_1(VAR_2, "UpdateRects source offset: %i,%i visible: %ix%i decoded: %ix%i",
            VAR_3->texture_source.i_x_offset, VAR_3->texture_source.i_y_offset,
            VAR_3->texture_source.i_visible_width, VAR_3->texture_source.i_visible_height,
            VAR_3->texture_source.i_width, VAR_3->texture_source.i_height);
        FUNC_1(VAR_2, "UpdateRects image_dst coords: %i,%i %ix%i",
            VAR_3->place.x, VAR_3->place.y, VAR_3->place.width, VAR_3->place.height);



        if (VAR_4->event != ((void*)0))
        {
            FUNC_0(VAR_2, VAR_4, 1);
        }

    }
}
