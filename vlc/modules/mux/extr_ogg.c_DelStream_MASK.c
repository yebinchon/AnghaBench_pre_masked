
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int p_access; TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_15__ {int i_del_streams; int i_add_streams; TYPE_4__** pp_del_streams; int i_pos; } ;
typedef TYPE_2__ sout_mux_sys_t ;
struct TYPE_16__ {int * p_sys; int p_fifo; } ;
typedef TYPE_3__ sout_input_t ;
struct TYPE_17__ {struct TYPE_17__* p_oggds_header; int b_new; int i_length; int i_dts; int os; } ;
typedef TYPE_4__ ogg_stream_t ;
typedef int block_t ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 TYPE_4__** FUNC_7 (TYPE_4__**,int) ;

__attribute__((used)) static void FUNC_8( sout_mux_t *VAR_0, sout_input_t *VAR_1 )
{
    sout_mux_sys_t *VAR_2 = VAR_0->p_sys;
    ogg_stream_t *VAR_3 = (ogg_stream_t*)VAR_1->p_sys;
    block_t *VAR_4;

    FUNC_5( VAR_0, "removing input" );


    if( VAR_1->p_sys )
    {
        if( !VAR_3->b_new )
        {
            while( FUNC_4( VAR_1->p_fifo ) )
                FUNC_1( VAR_0, VAR_1 );
        }

        if( !VAR_3->b_new &&
            ( VAR_4 = FUNC_3( VAR_0, &VAR_3->os, 0 ) ) )
        {
            FUNC_2( VAR_4, VAR_3->i_dts, VAR_3->i_length );
            VAR_2->i_pos += FUNC_6( VAR_0->p_access, VAR_4 );
        }


        if( !VAR_3->b_new )
        {
            VAR_2->pp_del_streams = FUNC_7( VAR_2->pp_del_streams,
                        (VAR_2->i_del_streams + 1) * sizeof(ogg_stream_t *) );
            VAR_2->pp_del_streams[VAR_2->i_del_streams++] = VAR_3;
        }
        else
        {

            FUNC_0( VAR_3->p_oggds_header );
            FUNC_0( VAR_3 );
            VAR_2->i_add_streams--;
        }
    }

    VAR_1->p_sys = ((void*)0);
}
