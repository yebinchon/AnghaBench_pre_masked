
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_flags; int i_pid; } ;
typedef TYPE_1__ ts_pid_t ;
struct TYPE_6__ {int stream; int b_access_control; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;

int FUNC_1( demux_sys_t *VAR_3, ts_pid_t *VAR_4 )
{
    if( !VAR_3->b_access_control )
        return VAR_2;

    return FUNC_0( VAR_3->stream, VAR_1,
                           VAR_4->i_pid, !!(VAR_4->i_flags & VAR_0) );
}
