
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int b_waiting_stream; scalar_t__ i_nb_inputs; int (* pf_delstream ) (TYPE_1__*,TYPE_2__*) ;int pp_inputs; int (* pf_mux ) (TYPE_1__*) ;} ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_12__ {int fmt; int p_fifo; } ;
typedef TYPE_2__ sout_input_t ;


 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (scalar_t__,int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;

void FUNC_9( sout_mux_t *VAR_0, sout_input_t *VAR_1 )
{
    int VAR_2;

    if( VAR_0->b_waiting_stream
     && FUNC_2( VAR_1->p_fifo ) > 0 )
    {


        VAR_0->b_waiting_stream = 0;
        VAR_0->pf_mux( VAR_0 );
    }

    FUNC_1( VAR_0->i_nb_inputs, VAR_0->pp_inputs, VAR_1, VAR_2 );
    if( VAR_2 >= 0 )
    {

        FUNC_0( VAR_0->i_nb_inputs, VAR_0->pp_inputs, VAR_2 );

        VAR_0->pf_delstream( VAR_0, VAR_1 );

        if( VAR_0->i_nb_inputs == 0 )
        {
            FUNC_6( VAR_0, "no more input streams for this mux" );
        }

        FUNC_3( VAR_1->p_fifo );
        FUNC_4( &VAR_1->fmt );
        FUNC_5( VAR_1 );
    }
}
