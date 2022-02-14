
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int tt_basenode_t ;
struct vlc_memstream {int length; int ptr; } ;
struct TYPE_9__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_8__ {int i_current; int i_count; int * p_array; } ;
struct TYPE_10__ {scalar_t__ i_next_demux_time; int b_first_time; TYPE_1__ times; int b_slave; int p_es; scalar_t__ p_rootnode; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_11__ {scalar_t__ i_dts; scalar_t__ i_pts; scalar_t__ i_length; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ const VAR_4 ;
 scalar_t__ const FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_4__*) ;
 int FUNC_3 (int ,scalar_t__ const) ;
 int FUNC_4 (struct vlc_memstream*,int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct vlc_memstream*) ;
 scalar_t__ FUNC_7 (struct vlc_memstream*) ;

__attribute__((used)) static int FUNC_8( demux_t* VAR_5 )
{
    demux_sys_t* VAR_6 = VAR_5->p_sys;


    while( VAR_6->times.i_current + 1 < VAR_6->times.i_count &&
           FUNC_5( &VAR_6->times.p_array[VAR_6->times.i_current] ) <= VAR_6->i_next_demux_time )
    {
        const vlc_tick_t VAR_7 =
                FUNC_5( &VAR_6->times.p_array[VAR_6->times.i_current] );
        const vlc_tick_t VAR_8 =
                FUNC_5( &VAR_6->times.p_array[VAR_6->times.i_current + 1] ) - 1;

        if ( !VAR_6->b_slave && VAR_6->b_first_time )
        {
            FUNC_3( VAR_5->out, VAR_4 + VAR_7 );
            VAR_6->b_first_time = 0;
        }

        struct vlc_memstream VAR_9;

        if( FUNC_7( &VAR_9 ) )
            return VAR_0;

        FUNC_4( &VAR_9, (tt_basenode_t *) VAR_6->p_rootnode,
                        &VAR_6->times.p_array[VAR_6->times.i_current] );

        if( FUNC_6( &VAR_9 ) == VAR_3 )
        {
            block_t* VAR_10 = FUNC_1( VAR_9.ptr, VAR_9.length );
            if( VAR_10 )
            {
                VAR_10->i_dts =
                    VAR_10->i_pts = VAR_4 + VAR_7;
                VAR_10->i_length = VAR_8 - VAR_7;

                FUNC_2( VAR_5->out, VAR_6->p_es, VAR_10 );
            }
        }

        VAR_6->times.i_current++;
    }

    if ( !VAR_6->b_slave )
    {
        FUNC_3( VAR_5->out, VAR_4 + VAR_6->i_next_demux_time );
        VAR_6->i_next_demux_time += FUNC_0(125);
    }

    if( VAR_6->times.i_current + 1 >= VAR_6->times.i_count )
        return VAR_1;

    return VAR_2;
}
