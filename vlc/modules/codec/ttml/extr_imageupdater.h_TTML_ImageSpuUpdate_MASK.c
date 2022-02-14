
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


typedef TYPE_3__ const* vlc_tick_t ;
struct TYPE_20__ {int i_visible_width; int i_visible_height; } ;
typedef TYPE_3__ video_format_t ;
struct TYPE_21__ {TYPE_6__* p_regions; } ;
typedef TYPE_5__ ttml_image_updater_sys_t ;
struct TYPE_19__ {int x; int y; } ;
struct TYPE_22__ {int i_flags; TYPE_2__ origin; TYPE_11__* p_pic; struct TYPE_22__* p_next; } ;
typedef TYPE_6__ ttml_image_updater_region_t ;
struct TYPE_18__ {TYPE_5__* p_sys; } ;
struct TYPE_23__ {TYPE_8__* p_region; TYPE_1__ updater; } ;
typedef TYPE_7__ subpicture_t ;
struct TYPE_24__ {int i_align; int i_x; int i_y; struct TYPE_24__* p_next; int p_picture; } ;
typedef TYPE_8__ subpicture_region_t ;
struct TYPE_17__ {int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_8__*) ;
 TYPE_8__* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(subpicture_t *VAR_4,
                                const video_format_t *VAR_5,
                                const video_format_t *VAR_6,
                                vlc_tick_t VAR_7)
{
    FUNC_0(VAR_5); FUNC_0(VAR_6);
    FUNC_0(VAR_7);
    ttml_image_updater_sys_t *VAR_8 = VAR_4->updater.p_sys;
    subpicture_region_t **VAR_9 = &VAR_4->p_region;




    for(ttml_image_updater_region_t *VAR_10 = VAR_8->p_regions;
                                     VAR_10; VAR_10 = VAR_10->p_next)
    {
        subpicture_region_t *VAR_11 = FUNC_4(&VAR_10->p_pic->format);
        if (!VAR_11)
            return;
        FUNC_2(VAR_11->p_picture);
        VAR_11->p_picture = FUNC_1(VAR_10->p_pic);
        if(!VAR_11->p_picture)
        {
            FUNC_3(VAR_11);
            return;
        }

        VAR_11->i_align = VAR_2|VAR_3;

        if( VAR_10->i_flags & VAR_0 )
            VAR_11->i_x = VAR_10->origin.x * VAR_6->i_visible_width;
        else
            VAR_11->i_x = VAR_10->origin.x;

        if( VAR_10->i_flags & VAR_1 )
            VAR_11->i_y = VAR_10->origin.y * VAR_6->i_visible_height;
        else
            VAR_11->i_y = VAR_10->origin.y;

        *VAR_9 = VAR_11;
        VAR_9 = &VAR_11->p_next;
    }
}
