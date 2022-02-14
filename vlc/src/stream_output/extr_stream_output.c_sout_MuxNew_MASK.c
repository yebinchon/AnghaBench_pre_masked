
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int b_add_stream_any_time; int b_waiting_stream; int * pf_control; int psz_mux; int * p_module; int i_add_stream_start; int * p_sys; int * pp_inputs; scalar_t__ i_nb_inputs; int * pf_mux; int * pf_delstream; int * pf_addstream; int * p_access; int p_cfg; TYPE_2__* p_sout; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_12__ {int i_out_pace_nocontrol; } ;
typedef TYPE_2__ sout_instance_t ;
typedef int sout_access_out_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int *,int *,char const*) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (TYPE_1__*,char*,int ,int) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int,char*) ;
 int FUNC_7 (TYPE_1__*) ;

sout_mux_t * FUNC_8( sout_instance_t *VAR_3, const char *VAR_4,
                          sout_access_out_t *VAR_5 )
{
    sout_mux_t *VAR_6;
    char *VAR_7;

    VAR_6 = FUNC_6( VAR_3, sizeof( *VAR_6 ), "mux" );
    if( VAR_6 == ((void*)0) )
        return ((void*)0);

    VAR_6->p_sout = VAR_3;
    VAR_7 = FUNC_1( &VAR_6->psz_mux, &VAR_6->p_cfg, VAR_4 );
    FUNC_2( VAR_7 );

    VAR_6->p_access = VAR_5;
    VAR_6->pf_control = ((void*)0);
    VAR_6->pf_addstream = ((void*)0);
    VAR_6->pf_delstream = ((void*)0);
    VAR_6->pf_mux = ((void*)0);
    VAR_6->i_nb_inputs = 0;
    VAR_6->pp_inputs = ((void*)0);

    VAR_6->p_sys = ((void*)0);
    VAR_6->p_module = ((void*)0);

    VAR_6->b_add_stream_any_time = 0;
    VAR_6->b_waiting_stream = 1;
    VAR_6->i_add_stream_start = VAR_2;

    VAR_6->p_module =
        FUNC_3( VAR_6, "sout mux", VAR_6->psz_mux, 1 );

    if( VAR_6->p_module == ((void*)0) )
    {
        FUNC_0( VAR_6->psz_mux );

        FUNC_7(VAR_6);
        return ((void*)0);
    }


    if( VAR_6->pf_control )
    {
        int VAR_8 = 0;

        if( FUNC_5( VAR_6, VAR_0,
                             &VAR_8 ) )
        {
            VAR_8 = 0;
        }

        if( VAR_8 )
        {
            FUNC_4( VAR_3, "muxer support adding stream at any time" );
            VAR_6->b_add_stream_any_time = 1;
            VAR_6->b_waiting_stream = 0;



            if( !VAR_3->i_out_pace_nocontrol )
            {
                VAR_8 = 1;
            }
            else if( FUNC_5( VAR_6, VAR_1,
                                      &VAR_8 ) )
            {
                VAR_8 = 0;
            }

            if( VAR_8 )
            {
                FUNC_4( VAR_3, "muxer prefers to wait for all ES before "
                         "starting to mux" );
                VAR_6->b_waiting_stream = 1;
            }
        }
    }

    return VAR_6;
}
