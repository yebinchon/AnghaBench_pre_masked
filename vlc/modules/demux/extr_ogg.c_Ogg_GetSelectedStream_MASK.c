
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ i_cat; } ;
struct TYPE_8__ {TYPE_1__ fmt; int p_es; } ;
typedef TYPE_2__ logical_stream_t ;
struct TYPE_9__ {int out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_10__ {int i_streams; TYPE_2__** pp_stream; } ;
typedef TYPE_4__ demux_sys_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int*) ;

__attribute__((used)) static logical_stream_t * FUNC_1( demux_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;
    logical_stream_t *VAR_5 = ((void*)0);
    for( int VAR_6=0; VAR_6<VAR_4->i_streams; VAR_6++ )
    {
        logical_stream_t *VAR_7 = VAR_4->pp_stream[VAR_6];
        if ( !VAR_7->p_es ) continue;

        bool VAR_8 = 0;
        FUNC_0( VAR_3->out, VAR_1,
                        VAR_7->p_es, &VAR_8 );
        if ( !VAR_8 ) continue;

        if ( !VAR_5 && VAR_7->fmt.i_cat == VAR_0 )
        {
            VAR_5 = VAR_7;
            continue;
        }

        if ( VAR_7->fmt.i_cat == VAR_2 )
        {
            VAR_5 = VAR_7;
            break;
        }
    }
    return VAR_5;
}
