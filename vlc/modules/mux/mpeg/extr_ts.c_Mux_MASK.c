
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int i_nb_inputs; TYPE_1__** pp_inputs; TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_mux_t ;
struct TYPE_9__ {int * p_pcr_input; } ;
typedef TYPE_3__ sout_mux_sys_t ;
struct TYPE_7__ {int p_fifo; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_3( sout_mux_t *VAR_1 )
{
    sout_mux_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->p_pcr_input == ((void*)0) )
    {
        for (int VAR_3 = 0; VAR_3 < VAR_1->i_nb_inputs; VAR_3++ )
        {
            FUNC_1( VAR_1->pp_inputs[VAR_3]->p_fifo );
        }
        FUNC_2( VAR_1, "waiting for PCR streams" );
        return VAR_0;
    }

    while (!FUNC_0(VAR_1))
        ;
    return VAR_0;
}
