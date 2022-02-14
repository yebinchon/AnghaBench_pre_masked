
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vout_window_t ;
struct TYPE_5__ {TYPE_1__* cfg; TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_6__ {int lock; } ;
typedef TYPE_3__ vout_display_sys_t ;
struct TYPE_4__ {int window; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(vout_window_t *VAR_0, unsigned VAR_1)
{
    vout_display_t *VAR_2 = (vout_display_t *)FUNC_2(VAR_0);
    vout_display_sys_t *VAR_3 = VAR_2->sys;

    FUNC_0(&VAR_3->lock);
    FUNC_3(VAR_2->cfg->window, VAR_1);
    FUNC_1(&VAR_3->lock);
}
