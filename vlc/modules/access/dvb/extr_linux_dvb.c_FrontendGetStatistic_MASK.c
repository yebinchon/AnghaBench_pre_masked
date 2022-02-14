
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_last_status; } ;
typedef TYPE_1__ frontend_t ;
struct TYPE_8__ {int i_ber; int i_signal_strenth; int i_snr; } ;
typedef TYPE_2__ frontend_statistic_t ;
struct TYPE_9__ {int i_frontend_handle; TYPE_1__* p_frontend; } ;
typedef TYPE_3__ dvb_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

int FUNC_2( dvb_sys_t *VAR_6, frontend_statistic_t *VAR_7 )
{
    frontend_t * VAR_8 = VAR_6->p_frontend;

    if( (VAR_8->i_last_status & VAR_0) == 0 )
        return VAR_4;

    FUNC_1( VAR_7, 0, sizeof(*VAR_7) );
    if( FUNC_0( VAR_6->i_frontend_handle, VAR_1, &VAR_7->i_ber ) < 0 )
        VAR_7->i_ber = -1;
    if( FUNC_0( VAR_6->i_frontend_handle, VAR_2, &VAR_7->i_signal_strenth ) < 0 )
        VAR_7->i_signal_strenth = -1;
    if( FUNC_0( VAR_6->i_frontend_handle, VAR_3, &VAR_7->i_snr ) < 0 )
        VAR_7->i_snr = -1;

    return VAR_5;
}
