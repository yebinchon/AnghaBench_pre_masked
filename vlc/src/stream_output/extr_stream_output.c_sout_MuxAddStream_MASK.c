
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ (* pf_addstream ) (TYPE_1__*,TYPE_2__*) ;int pp_inputs; int i_nb_inputs; int b_waiting_stream; int b_add_stream_any_time; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_14__ {int fmt; int p_fifo; int * p_sys; int * p_fmt; } ;
typedef TYPE_2__ sout_input_t ;
typedef int es_format_t ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,TYPE_2__*) ;

sout_input_t *FUNC_11( sout_mux_t *VAR_0, const es_format_t *VAR_1 )
{
    sout_input_t *VAR_2;

    if( !VAR_0->b_add_stream_any_time && !VAR_0->b_waiting_stream )
    {
        FUNC_9( VAR_0, "cannot add a new stream (unsupported while muxing "
                        "to this format). You can try increasing sout-mux-caching value" );
        return ((void*)0);
    }

    FUNC_8( VAR_0, "adding a new input" );


    VAR_2 = FUNC_7( sizeof( sout_input_t ) );
    if( !VAR_2 )
        return ((void*)0);


    FUNC_5( &VAR_2->fmt, VAR_1 );
    VAR_2->p_fmt = &VAR_2->fmt;

    VAR_2->p_fifo = FUNC_2();
    VAR_2->p_sys = ((void*)0);

    FUNC_0( VAR_0->i_nb_inputs, VAR_0->pp_inputs, VAR_2 );
    if( VAR_0->pf_addstream( VAR_0, VAR_2 ) < 0 )
    {
        FUNC_9( VAR_0, "cannot add this stream" );
        FUNC_1( VAR_0->i_nb_inputs, VAR_0->pp_inputs, VAR_2 );
        FUNC_3( VAR_2->p_fifo );
        FUNC_4( &VAR_2->fmt );
        FUNC_6( VAR_2 );
        return ((void*)0);
    }

    return VAR_2;
}
