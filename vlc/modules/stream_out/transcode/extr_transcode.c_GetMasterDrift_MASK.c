
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_5__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_stream_t ;
struct TYPE_6__ {int lock; TYPE_1__* id_master_sync; } ;
typedef TYPE_3__ sout_stream_sys_t ;
struct TYPE_4__ {int i_drift; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static vlc_tick_t FUNC_2( void *VAR_0 )
{
    sout_stream_t *VAR_1 = VAR_0;
    sout_stream_sys_t *VAR_2 = VAR_1->p_sys;
    FUNC_0( &VAR_2->lock );
    vlc_tick_t VAR_3 = 0;
    if( VAR_2->id_master_sync )
        VAR_3 = VAR_2->id_master_sync->i_drift;
    FUNC_1( &VAR_2->lock );
    return VAR_3;
}
