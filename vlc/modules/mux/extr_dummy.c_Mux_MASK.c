
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int i_nb_inputs; int p_access; TYPE_2__** pp_inputs; TYPE_4__* p_sys; } ;
typedef TYPE_3__ sout_mux_t ;
struct TYPE_14__ {int b_header; } ;
typedef TYPE_4__ sout_mux_sys_t ;
struct TYPE_15__ {int i_flags; int p_buffer; } ;
typedef TYPE_5__ block_t ;
typedef int block_fifo_t ;
struct TYPE_12__ {int * p_fifo; TYPE_1__* p_fmt; } ;
struct TYPE_11__ {scalar_t__ i_extra; int p_extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (int ,TYPE_5__*) ;

__attribute__((used)) static int FUNC_6( sout_mux_t *VAR_2 )
{
    sout_mux_sys_t *VAR_3 = VAR_2->p_sys;
    int VAR_4;

    for( VAR_4 = 0; VAR_4 < VAR_2->i_nb_inputs; VAR_4++ )
    {
        block_fifo_t *VAR_5;
        int VAR_6;

        if( VAR_3->b_header && VAR_2->pp_inputs[VAR_4]->p_fmt->i_extra )
        {

            block_t *VAR_7;
            VAR_7 = FUNC_0( VAR_2->pp_inputs[VAR_4]->p_fmt->i_extra );

            FUNC_3( VAR_7->p_buffer, VAR_2->pp_inputs[VAR_4]->p_fmt->p_extra,
                    VAR_2->pp_inputs[VAR_4]->p_fmt->i_extra );

            VAR_7->i_flags |= VAR_0;

            FUNC_4( VAR_2, "writing header data" );
            FUNC_5( VAR_2->p_access, VAR_7 );
        }

        VAR_5 = VAR_2->pp_inputs[VAR_4]->p_fifo;
        VAR_6 = FUNC_1( VAR_5 );
        while( VAR_6 > 0 )
        {
            block_t *VAR_8 = FUNC_2( VAR_5 );

            FUNC_5( VAR_2->p_access, VAR_8 );

            VAR_6--;
        }
    }
    VAR_3->b_header = 0;

    return VAR_1;
}
