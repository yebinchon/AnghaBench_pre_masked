
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_9__ {scalar_t__ phase_offset; int adjust_refresh_rate; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int vlc_tick_t ;
typedef int subpicture_t ;
struct TYPE_10__ {int date; TYPE_4__* p_sys; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_11__ {scalar_t__ displayed; } ;
typedef TYPE_4__ picture_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(vout_display_t *VAR_0, picture_t *VAR_1,
                       subpicture_t *VAR_2, vlc_tick_t VAR_3)
{
    FUNC_1(VAR_0);
    FUNC_0(VAR_3);
    vout_display_sys_t *VAR_4 = VAR_0->sys;
    picture_sys_t *VAR_5 = VAR_1->p_sys;

    if (!VAR_4->adjust_refresh_rate || VAR_5->displayed)
        return;



    VAR_1->date += VAR_4->phase_offset;
}
