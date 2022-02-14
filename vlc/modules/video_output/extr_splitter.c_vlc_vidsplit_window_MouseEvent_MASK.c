
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct vlc_vidsplit_part* sys; } ;
struct TYPE_10__ {TYPE_2__ owner; } ;
typedef TYPE_3__ vout_window_t ;
typedef int vout_window_mouse_event_t ;
struct TYPE_11__ {TYPE_1__* cfg; TYPE_5__* sys; } ;
typedef TYPE_4__ vout_display_t ;
struct TYPE_12__ {int parts; int lock; int splitter; } ;
typedef TYPE_5__ vout_display_sys_t ;
struct vlc_vidsplit_part {int dummy; } ;
struct TYPE_8__ {int window; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct vlc_vidsplit_part*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(vout_window_t *VAR_1,
                                           const vout_window_mouse_event_t *VAR_2)
{
    struct vlc_vidsplit_part *VAR_3 = VAR_1->owner.sys;
    vout_display_t *VAR_4 = (vout_display_t *)FUNC_3(VAR_1);
    vout_display_sys_t *VAR_5 = VAR_4->sys;
    vout_window_mouse_event_t VAR_6 = *VAR_2;

    FUNC_1(&VAR_5->lock);
    if (FUNC_0(&VAR_5->splitter, VAR_3 - VAR_5->parts,
                             &VAR_6) == VAR_0)
        FUNC_4(VAR_4->cfg->window, &VAR_6);
    FUNC_2(&VAR_5->lock);
}
