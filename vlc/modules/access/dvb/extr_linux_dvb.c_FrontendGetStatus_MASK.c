
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_last_status; } ;
typedef TYPE_1__ frontend_t ;
struct TYPE_7__ {int b_has_signal; int b_has_carrier; int b_has_lock; } ;
typedef TYPE_2__ frontend_status_t ;
struct TYPE_8__ {TYPE_1__* p_frontend; } ;
typedef TYPE_3__ dvb_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0( dvb_sys_t *VAR_3, frontend_status_t *VAR_4 )
{
    frontend_t * VAR_5 = VAR_3->p_frontend;

    VAR_4->b_has_signal = (VAR_5->i_last_status & VAR_2) != 0;
    VAR_4->b_has_carrier = (VAR_5->i_last_status & VAR_0) != 0;
    VAR_4->b_has_lock = (VAR_5->i_last_status & VAR_1) != 0;
}
