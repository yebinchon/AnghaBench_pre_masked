
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_12__ {int out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_11__ {size_t i_current; size_t i_count; TYPE_1__* p_array; } ;
struct TYPE_13__ {scalar_t__ i_next_demux_time; int i_next_block_flags; int b_first_time; TYPE_2__ index; int b_slave; int es; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_14__ {scalar_t__ i_dts; scalar_t__ i_pts; int i_flags; scalar_t__ i_length; } ;
typedef TYPE_5__ block_t ;
struct TYPE_10__ {scalar_t__ time; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (int ,int ,TYPE_5__*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_4->p_sys;

    vlc_tick_t VAR_6 = VAR_5->i_next_demux_time;

    while( VAR_5->index.i_current < VAR_5->index.i_count &&
           VAR_5->index.p_array[VAR_5->index.i_current].time <= VAR_6 )
    {

        vlc_tick_t VAR_7 = VAR_5->index.p_array[VAR_5->index.i_current].time;
        vlc_tick_t VAR_8 = VAR_7;

        while( ++VAR_5->index.i_current < VAR_5->index.i_count )
        {
            if( VAR_7 != VAR_5->index.p_array[VAR_5->index.i_current].time )
            {
                VAR_8 = VAR_5->index.p_array[VAR_5->index.i_current].time;
                break;
            }
        }

        block_t *VAR_9 = FUNC_1( VAR_4, VAR_7 );
        if( VAR_9 )
        {
            VAR_9->i_length = VAR_8 - VAR_7;
            VAR_9->i_dts = VAR_9->i_pts = VAR_3 + VAR_7;

            if( VAR_5->i_next_block_flags )
            {
                VAR_9->i_flags = VAR_5->i_next_block_flags;
                VAR_5->i_next_block_flags = 0;
            }

            if ( !VAR_5->b_slave && VAR_5->b_first_time )
            {
                FUNC_3( VAR_4->out, VAR_9->i_dts );
                VAR_5->b_first_time = 0;
            }

            FUNC_2( VAR_4->out, VAR_5->es, VAR_9 );
        }

        if( VAR_5->index.i_current < VAR_5->index.i_count &&
            VAR_5->index.p_array[VAR_5->index.i_current].active > 1 )
        {

            VAR_5->i_next_block_flags |= VAR_0;
        }
    }

    if ( !VAR_5->b_slave )
    {
        FUNC_3( VAR_4->out, VAR_3 + VAR_6 );
        VAR_5->i_next_demux_time += FUNC_0(1);
    }

    if( VAR_5->index.i_current >= VAR_5->index.i_count )
        return VAR_1;

    return VAR_2;
}
