
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int i_id; scalar_t__ i_group; } ;
struct TYPE_10__ {struct TYPE_10__* p_extraes; TYPE_5__ fmt; scalar_t__ id; TYPE_1__* p_program; struct TYPE_10__* p_next; } ;
typedef TYPE_2__ ts_es_t ;
struct TYPE_11__ {int out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_12__ {int i_pmt_es; int i_next_extraid; scalar_t__ b_es_id_pid; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_9__ {scalar_t__ i_number; } ;


 scalar_t__ FUNC_0 (int ,TYPE_5__*) ;

__attribute__((used)) static void FUNC_1( demux_t *VAR_0, ts_es_t *VAR_1, const ts_es_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_0->p_sys;

    for( ; VAR_1 ; VAR_1 = VAR_1->p_next )
    {
        if( !VAR_1->id )
        {
            if( !VAR_1->fmt.i_group )
                VAR_1->fmt.i_group = VAR_1->p_program->i_number;
            VAR_1->id = FUNC_0( VAR_0->out, &VAR_1->fmt );
            if( VAR_2 )
            {
                if ( VAR_3->b_es_id_pid )
                    VAR_1->fmt.i_id = (VAR_3->i_next_extraid++ << 13) | VAR_2->fmt.i_id;
                VAR_1->fmt.i_group = VAR_2->fmt.i_group;
            }
            VAR_3->i_pmt_es++;
        }
        FUNC_1( VAR_0, VAR_1->p_extraes, VAR_1 );
    }
}
