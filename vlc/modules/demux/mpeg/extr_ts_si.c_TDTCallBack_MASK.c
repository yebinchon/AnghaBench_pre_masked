
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* p_si; } ;
struct TYPE_15__ {TYPE_3__ u; } ;
typedef TYPE_4__ ts_pid_t ;
typedef int int64_t ;
struct TYPE_16__ {int i_utc_time; } ;
typedef TYPE_5__ dvbpsi_tot_t ;
struct TYPE_17__ {int out; TYPE_7__* p_sys; } ;
typedef TYPE_6__ demux_t ;
struct TYPE_18__ {scalar_t__ standard; scalar_t__ i_network_time; int pids; int i_network_time_update; } ;
typedef TYPE_7__ demux_sys_t ;
struct TYPE_13__ {TYPE_1__* handle; } ;
struct TYPE_12__ {int p_decoder; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6( demux_t *VAR_3, dvbpsi_tot_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_3->p_sys;


    VAR_5->i_network_time = FUNC_0( VAR_4->i_utc_time );
    VAR_5->i_network_time_update = FUNC_4(((void*)0));
    if( VAR_5->standard == VAR_2 )
    {





        VAR_5->i_network_time += 9 * 3600;
    }



    ts_pid_t *VAR_6 = FUNC_5( &VAR_5->pids, VAR_1 );
    FUNC_1( VAR_6->u.p_si->handle->p_decoder, 1 );
    FUNC_2(VAR_4);

    FUNC_3( VAR_3->out, VAR_0, (int64_t) VAR_5->i_network_time );
}
