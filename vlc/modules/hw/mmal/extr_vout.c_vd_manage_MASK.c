
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_9__ {int need_configure_display; unsigned int display_width; unsigned int display_height; int manage_mutex; TYPE_1__* last_cfg; int dmx_handle; } ;
typedef TYPE_3__ vout_display_sys_t ;
struct TYPE_7__ {int window; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,unsigned int*,unsigned int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_6(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;
    unsigned VAR_2, VAR_3;

    FUNC_3(&VAR_1->manage_mutex);

    if (VAR_1->need_configure_display) {
        FUNC_0(VAR_0);
        VAR_1->dmx_handle = FUNC_2(0);

        if (FUNC_1(VAR_0, &VAR_2, &VAR_3) >= 0) {
            VAR_1->display_width = VAR_2;
            VAR_1->display_height = VAR_3;
            FUNC_5(VAR_1->last_cfg->window, VAR_2, VAR_3);
        }

        VAR_1->need_configure_display = 0;
    }

    FUNC_4(&VAR_1->manage_mutex);
}
