
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_flags; } ;
typedef TYPE_1__ ts_pid_t ;
typedef int demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

int FUNC_1( demux_sys_t *VAR_1, ts_pid_t *VAR_2, bool VAR_3 )
{
    if( VAR_3 )
        VAR_2->i_flags |= VAR_0;
    else
        VAR_2->i_flags &= ~VAR_0;

    return FUNC_0( VAR_1, VAR_2 );
}
