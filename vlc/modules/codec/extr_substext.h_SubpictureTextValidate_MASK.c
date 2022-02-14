
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int video_format_t ;
struct TYPE_12__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_10__ {int y; int x; } ;
struct TYPE_14__ {int flags; TYPE_4__ extent; TYPE_2__ origin; } ;
struct TYPE_13__ {scalar_t__ i_next_update; TYPE_6__ region; } ;
typedef TYPE_5__ subtext_updater_sys_t ;
typedef TYPE_6__ substext_updater_region_t ;
struct TYPE_9__ {TYPE_5__* p_sys; } ;
struct TYPE_15__ {scalar_t__ i_original_picture_width; scalar_t__ i_original_picture_height; TYPE_3__* p_region; scalar_t__ b_absolute; TYPE_1__ updater; } ;
typedef TYPE_7__ subpicture_t ;
struct TYPE_11__ {int i_y; int i_x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(subpicture_t *VAR_8,
                                  bool VAR_9, const video_format_t *VAR_10,
                                  bool VAR_11, const video_format_t *VAR_12,
                                  vlc_tick_t VAR_13)
{
    subtext_updater_sys_t *VAR_14 = VAR_8->updater.p_sys;
    FUNC_0(VAR_10); FUNC_0(VAR_12);

    if (!VAR_9 && !VAR_11 &&
        (VAR_14->i_next_update == VAR_7 || VAR_14->i_next_update > VAR_13))
        return VAR_6;

    substext_updater_region_t *VAR_15 = &VAR_14->region;

    if (!(VAR_15->flags & VAR_2) &&
        VAR_8->b_absolute && VAR_8->p_region &&
        VAR_8->i_original_picture_width > 0 &&
        VAR_8->i_original_picture_height > 0)
    {
        VAR_15->flags |= VAR_2;
        VAR_15->origin.x = VAR_8->p_region->i_x;
        VAR_15->origin.y = VAR_8->p_region->i_y;
        VAR_15->extent.x = VAR_8->i_original_picture_width;
        VAR_15->extent.y = VAR_8->i_original_picture_height;
        VAR_15->flags &= ~(VAR_3|VAR_4|
                                 VAR_0|VAR_1);
    }

    return VAR_5;
}
