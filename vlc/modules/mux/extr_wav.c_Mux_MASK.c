
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int p_access; TYPE_4__** pp_inputs; int i_nb_inputs; TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_mux_t ;
struct TYPE_14__ {int b_header; int pi_chan_table; int i_chans_to_reorder; int i_data; } ;
typedef TYPE_3__ sout_mux_sys_t ;
struct TYPE_15__ {TYPE_1__* p_fmt; int p_fifo; } ;
typedef TYPE_4__ sout_input_t ;
struct TYPE_16__ {scalar_t__ i_buffer; int p_buffer; } ;
typedef TYPE_5__ block_t ;
struct TYPE_12__ {int i_codec; } ;


 TYPE_5__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int ,TYPE_5__*) ;

__attribute__((used)) static int FUNC_6( sout_mux_t *VAR_1 )
{
    sout_mux_sys_t *VAR_2 = VAR_1->p_sys;
    sout_input_t *VAR_3;

    if( !VAR_1->i_nb_inputs ) return VAR_0;

    if( VAR_2->b_header )
    {
        FUNC_4( VAR_1, "writing header data" );
        FUNC_5( VAR_1->p_access, FUNC_0( VAR_1 ) );
    }
    VAR_2->b_header = 0;

    VAR_3 = VAR_1->pp_inputs[0];
    while( FUNC_2( VAR_3->p_fifo ) > 0 )
    {
        block_t *VAR_4 = FUNC_3( VAR_3->p_fifo );
        VAR_2->i_data += VAR_4->i_buffer;


        if( VAR_2->i_chans_to_reorder )
            FUNC_1( VAR_4->p_buffer, VAR_4->i_buffer,
                                 VAR_2->i_chans_to_reorder,
                                 VAR_2->pi_chan_table, VAR_3->p_fmt->i_codec );

        FUNC_5( VAR_1->p_access, VAR_4 );
    }

    return VAR_0;
}
