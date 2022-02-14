
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_6__ {scalar_t__ i_cat; scalar_t__ i_codec; } ;
struct TYPE_7__ {scalar_t__ i_pcr; scalar_t__ b_initializing; scalar_t__ b_finished; TYPE_1__ fmt; } ;
typedef TYPE_2__ logical_stream_t ;
struct TYPE_8__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_9__ {int i_streams; TYPE_2__** pp_stream; } ;
typedef TYPE_4__ demux_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static vlc_tick_t FUNC_0( demux_t * VAR_3, bool VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_3->p_sys;



    vlc_tick_t VAR_6 = VAR_2;
    for( int VAR_7 = 0; VAR_7 < VAR_5->i_streams; VAR_7++ )
    {
        logical_stream_t *VAR_8 = VAR_5->pp_stream[VAR_7];
        if( VAR_8->fmt.i_cat == VAR_0 )
            continue;
        if( VAR_8->fmt.i_codec == VAR_1 )
            continue;
        if( VAR_8->i_pcr == VAR_2 )
            continue;
        if ( (!VAR_4 && VAR_8->b_finished) || VAR_8->b_initializing )
            continue;
        if( VAR_6 == VAR_2 ||
            VAR_8->i_pcr < VAR_6 )
        {
            VAR_6 = VAR_8->i_pcr;
        }
    }

    return VAR_6;
}
