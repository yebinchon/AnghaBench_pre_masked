
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int const* vlc_tick_t ;
typedef int video_format_t ;
struct TYPE_9__ {int * p_sys; } ;
struct TYPE_10__ {TYPE_3__* p_region; TYPE_1__ updater; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_11__ {struct TYPE_11__* p_next; } ;
typedef TYPE_3__ subpicture_region_t ;
typedef int bluray_spu_updater_sys_t ;
struct TYPE_12__ {int status; TYPE_3__* p_regions; } ;
typedef TYPE_4__ bluray_overlay_t ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(subpicture_t *VAR_1,
                                    const video_format_t *VAR_2,
                                    const video_format_t *VAR_3,
                                    vlc_tick_t VAR_4)
{
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    bluray_spu_updater_sys_t *VAR_5 = VAR_1->updater.p_sys;
    bluray_overlay_t *VAR_6 = FUNC_2(VAR_5);

    if (!VAR_6) {
        return;
    }





    subpicture_region_t *VAR_7 = VAR_6->p_regions;
    if (!VAR_7) {
        FUNC_3(VAR_5);
        return;
    }

    subpicture_region_t **VAR_8 = &VAR_1->p_region;
    while (VAR_7 != ((void*)0)) {
        *VAR_8 = FUNC_1(VAR_7);
        if (*VAR_8 == ((void*)0))
            break;
        VAR_8 = &(*VAR_8)->p_next;
        VAR_7 = VAR_7->p_next;
    }
    if (*VAR_8 != ((void*)0))
        (*VAR_8)->p_next = ((void*)0);
    VAR_6->status = VAR_0;

    FUNC_3(VAR_5);
}
