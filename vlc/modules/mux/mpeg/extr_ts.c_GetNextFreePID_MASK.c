
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int i_nb_inputs; TYPE_1__** pp_inputs; TYPE_5__* p_sys; } ;
typedef TYPE_4__ sout_mux_t ;
struct TYPE_12__ {unsigned int i_num_pmt; TYPE_3__* pmt; } ;
typedef TYPE_5__ sout_mux_sys_t ;
struct TYPE_9__ {int i_pid; } ;
struct TYPE_13__ {TYPE_2__ ts; } ;
typedef TYPE_6__ sout_input_sys_t ;
struct TYPE_10__ {int i_pid; } ;
struct TYPE_8__ {scalar_t__ p_sys; } ;



__attribute__((used)) static int FUNC_0( sout_mux_t *VAR_0, int VAR_1 )
{
    sout_mux_sys_t *VAR_2 = VAR_0->p_sys;

    restart:
    for(unsigned VAR_3=VAR_1; VAR_3<VAR_2->i_num_pmt; VAR_3++)
    {
        if(VAR_2->pmt[VAR_3].i_pid == VAR_1)
        {
            VAR_1++;
            goto restart;
        }
    }

    for(int VAR_4=0; VAR_4<VAR_0->i_nb_inputs; VAR_4++)
    {
        sout_input_sys_t *VAR_5 = (sout_input_sys_t*)VAR_0->pp_inputs[VAR_4]->p_sys;
        if(VAR_5->ts.i_pid == VAR_1)
        {
            VAR_1++;
            goto restart;
        }
    }

    if( VAR_1 > 8190 )
    {
        VAR_1 = 32;
        goto restart;
    }

    return VAR_1;
}
