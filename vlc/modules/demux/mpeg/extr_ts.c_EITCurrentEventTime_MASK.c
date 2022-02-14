
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i_event_length; scalar_t__ i_event_start; } ;
struct TYPE_7__ {TYPE_1__ eit; } ;
typedef TYPE_2__ ts_pmt_t ;
typedef scalar_t__ time_t ;
struct TYPE_8__ {scalar_t__ i_network_time; scalar_t__ i_network_time_update; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1( const ts_pmt_t *VAR_2, demux_sys_t *VAR_3,
                                time_t *VAR_4, time_t *VAR_5 )
{
    if( VAR_3->i_network_time == 0 || !VAR_2 || VAR_2->eit.i_event_length == 0 )
        return VAR_0;

    if( VAR_2->eit.i_event_start <= VAR_3->i_network_time &&
        VAR_3->i_network_time < VAR_2->eit.i_event_start + VAR_2->eit.i_event_length )
    {
        if( VAR_5 )
            *VAR_5 = VAR_2->eit.i_event_length;
        if( VAR_4 )
        {
            *VAR_4 = VAR_3->i_network_time - VAR_2->eit.i_event_start;
            *VAR_4 += FUNC_0(((void*)0)) - VAR_3->i_network_time_update;
        }
        return VAR_1;
    }

    return VAR_0;
}
