
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_5__ {scalar_t__ i_pcr; scalar_t__ b_initializing; } ;
typedef TYPE_1__ logical_stream_t ;
struct TYPE_6__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_7__ {int i_streams; TYPE_1__** pp_stream; } ;
typedef TYPE_3__ demux_sys_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static vlc_tick_t FUNC_0( demux_t * VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    vlc_tick_t VAR_3 = VAR_0;
    for( int VAR_4 = 0; VAR_4 < VAR_2->i_streams; VAR_4++ )
    {
        logical_stream_t *VAR_5 = VAR_2->pp_stream[VAR_4];
        if ( VAR_5->b_initializing )
            continue;
        if( VAR_5->i_pcr > VAR_3 )
            VAR_3 = VAR_5->i_pcr;
    }

    return VAR_3;
}
