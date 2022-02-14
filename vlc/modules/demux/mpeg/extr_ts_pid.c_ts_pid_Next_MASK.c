
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ts_pid_t ;
struct TYPE_5__ {scalar_t__ i_pos; } ;
typedef TYPE_1__ ts_pid_next_context_t ;
struct TYPE_6__ {scalar_t__ i_all; int ** pp_all; } ;
typedef TYPE_2__ ts_pid_list_t ;


 scalar_t__ FUNC_0 (int) ;

ts_pid_t * FUNC_1( ts_pid_list_t *VAR_0, ts_pid_next_context_t *VAR_1 )
{
    if( FUNC_0(VAR_0->i_all && VAR_1) )
    {
        if( VAR_1->i_pos < VAR_0->i_all )
            return VAR_0->pp_all[VAR_1->i_pos++];
    }
    return ((void*)0);
}
