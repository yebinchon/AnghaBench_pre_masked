
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_8__ {int i_nb_inputs; int b_add_stream_any_time; TYPE_3__** pp_inputs; } ;
typedef TYPE_2__ sout_mux_t ;
struct TYPE_9__ {int p_fifo; TYPE_1__* p_fmt; } ;
typedef TYPE_3__ sout_input_t ;
struct TYPE_10__ {scalar_t__ i_dts; } ;
typedef TYPE_4__ block_t ;
struct TYPE_7__ {scalar_t__ i_cat; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (int ) ;

int FUNC_3( sout_mux_t *VAR_1, unsigned VAR_2, vlc_tick_t *VAR_3 )
{
    vlc_tick_t VAR_4 = 0;
    int VAR_5 = -1;

    FUNC_0( VAR_2 > 0 );

    for( int VAR_6 = 0; VAR_6 < VAR_1->i_nb_inputs; VAR_6++ )
    {
        sout_input_t *VAR_7 = VAR_1->pp_inputs[VAR_6];
        block_t *VAR_8;

        if( FUNC_1( VAR_7->p_fifo ) < VAR_2 )
        {
            if( (!VAR_1->b_add_stream_any_time) &&
                (VAR_7->p_fmt->i_cat != VAR_0 ) )
            {
                return -1;
            }

            continue;
        }

        VAR_8 = FUNC_2( VAR_7->p_fifo );
        if( VAR_5 < 0 || VAR_8->i_dts < VAR_4 )
        {
            VAR_5 = VAR_6;
            VAR_4 = VAR_8->i_dts;
        }
    }

    if( VAR_3 ) *VAR_3 = VAR_4;

    return VAR_5;
}
