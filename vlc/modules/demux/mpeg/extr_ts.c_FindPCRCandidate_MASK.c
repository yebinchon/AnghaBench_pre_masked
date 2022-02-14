
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int i_size; TYPE_8__** p_elems; } ;
struct TYPE_17__ {int i_pid_pcr; TYPE_1__ e_streams; } ;
typedef TYPE_7__ ts_pmt_t ;
struct TYPE_16__ {TYPE_5__* p_stream; } ;
struct TYPE_12__ {scalar_t__ i_pcr_count; } ;
struct TYPE_18__ {int i_pid; TYPE_6__ u; TYPE_2__ probed; } ;
typedef TYPE_8__ ts_pid_t ;
struct TYPE_15__ {TYPE_4__* p_es; } ;
struct TYPE_13__ {scalar_t__ i_cat; } ;
struct TYPE_14__ {TYPE_3__ fmt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_8__*) ;
 scalar_t__ VAR_1 ;

int FUNC_1( ts_pmt_t *VAR_2 )
{
    ts_pid_t *VAR_3 = ((void*)0);
    int VAR_4 = VAR_2->i_pid_pcr;

    for( int VAR_5=0; VAR_5<VAR_2->e_streams.i_size; VAR_5++ )
    {
        ts_pid_t *VAR_6 = VAR_2->e_streams.p_elems[VAR_5];
        if( FUNC_0(VAR_6) && VAR_6->i_pid != VAR_4 )
        {
            if( VAR_6->probed.i_pcr_count )
            {
                if( !VAR_3 || VAR_6->probed.i_pcr_count > VAR_3->probed.i_pcr_count )
                {
                    VAR_3 = VAR_6;
                    continue;
                }
            }

            if( VAR_6->u.p_stream->p_es->fmt.i_cat == VAR_0 )
            {
                if( !VAR_3 )
                    VAR_3 = VAR_6;
            }
            else if ( VAR_6->u.p_stream->p_es->fmt.i_cat == VAR_1 )
            {
                if( !VAR_3 || VAR_3->u.p_stream->p_es->fmt.i_cat == VAR_0 )
                    VAR_3 = VAR_6;
            }
        }
    }

    if( VAR_3 )
        return VAR_3->i_pid;
    else
        return 0x1FFF;
}
