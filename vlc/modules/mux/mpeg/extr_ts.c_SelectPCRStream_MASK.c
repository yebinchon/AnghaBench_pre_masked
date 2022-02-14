
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int i_nb_inputs; TYPE_5__** pp_inputs; TYPE_4__* p_sys; } ;
typedef TYPE_3__ sout_mux_t ;
struct TYPE_13__ {TYPE_5__* p_pcr_input; } ;
typedef TYPE_4__ sout_mux_sys_t ;
struct TYPE_14__ {scalar_t__ p_sys; TYPE_1__* p_fmt; } ;
typedef TYPE_5__ sout_input_t ;
struct TYPE_11__ {int i_pid; } ;
struct TYPE_15__ {TYPE_2__ ts; } ;
typedef TYPE_6__ sout_input_sys_t ;
struct TYPE_10__ {scalar_t__ i_cat; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,int ) ;

__attribute__((used)) static void FUNC_1( sout_mux_t *VAR_2, sout_input_t *VAR_3 )
{
    sout_mux_sys_t *VAR_4 = VAR_2->p_sys;


    if( VAR_3 != ((void*)0) )
        VAR_4->p_pcr_input = ((void*)0);

    for ( int VAR_5 = 0; VAR_5 < VAR_2->i_nb_inputs; VAR_5++ )
    {
        sout_input_t *VAR_6 = VAR_2->pp_inputs[VAR_5];
        if( VAR_6 == VAR_3 )
            continue;

        if( VAR_6->p_fmt->i_cat == VAR_1 &&
           (VAR_4->p_pcr_input == ((void*)0) ||
            VAR_4->p_pcr_input->p_fmt->i_cat != VAR_1) )
        {
            VAR_4->p_pcr_input = VAR_6;
            break;
        }
        else if( VAR_6->p_fmt->i_cat != VAR_0 &&
                 VAR_4->p_pcr_input == ((void*)0) )
        {
            VAR_4->p_pcr_input = VAR_6;
        }
    }

    if( VAR_4->p_pcr_input )
    {


        FUNC_0( VAR_2, "new PCR PID is %d",
                 ((sout_input_sys_t *)VAR_4->p_pcr_input->p_sys)->ts.i_pid );
    }

}
