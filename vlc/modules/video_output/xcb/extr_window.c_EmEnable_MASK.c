
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_window_t ;
struct TYPE_8__ {int wm_state_fullscreen; } ;
typedef TYPE_2__ vout_window_sys_t ;
struct TYPE_9__ {int is_fullscreen; } ;
typedef TYPE_3__ vout_window_cfg_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_1(vout_window_t *VAR_1, const vout_window_cfg_t *restrict VAR_2)
{
    vout_window_sys_t *VAR_3 = VAR_1->sys;

    FUNC_0(VAR_1, VAR_2->is_fullscreen, VAR_3->wm_state_fullscreen);
    return VAR_0;
}
