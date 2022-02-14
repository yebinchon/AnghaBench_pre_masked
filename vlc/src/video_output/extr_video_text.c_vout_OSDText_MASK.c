
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vout_thread_t ;
typedef scalar_t__ vlc_tick_t ;
struct TYPE_10__ {TYPE_3__* p_sys; int pf_destroy; int pf_update; int pf_validate; } ;
typedef TYPE_1__ subpicture_updater_t ;
struct TYPE_11__ {int i_channel; scalar_t__ i_start; int b_ephemer; int b_absolute; int b_fade; scalar_t__ i_stop; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_12__ {int position; struct TYPE_12__* text; } ;
typedef TYPE_3__ osd_spu_updater_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int) ;
 TYPE_3__* FUNC_3 (char const*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *,TYPE_2__*) ;

void FUNC_8(vout_thread_t *VAR_4, int VAR_5,
                   int VAR_6, vlc_tick_t VAR_7, const char *VAR_8)
{
    FUNC_0( (VAR_6 & ~VAR_3) == 0);
    if (!FUNC_5(VAR_4, "osd") || VAR_7 <= 0)
        return;

    osd_spu_updater_sys_t *VAR_9 = FUNC_2(sizeof(*VAR_9));
    if (!VAR_9)
        return;
    VAR_9->position = VAR_6;
    VAR_9->text = FUNC_3(VAR_8);

    subpicture_updater_t VAR_10 = {
        .pf_validate = VAR_2,
        .pf_update = VAR_1,
        .pf_destroy = VAR_0,
        .p_sys = VAR_9,
    };
    subpicture_t *VAR_11 = FUNC_4(&VAR_10);
    if (!VAR_11) {
        FUNC_1(VAR_9->text);
        FUNC_1(VAR_9);
        return;
    }

    VAR_11->i_channel = VAR_5;
    VAR_11->i_start = FUNC_6();
    VAR_11->i_stop = VAR_11->i_start + VAR_7;
    VAR_11->b_ephemer = 1;
    VAR_11->b_absolute = 0;
    VAR_11->b_fade = 1;

    FUNC_7(VAR_4, VAR_11);
}
