
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


typedef int vlc_tick_t ;
struct TYPE_15__ {int i_last_dts; TYPE_8__* p_es; } ;
typedef TYPE_5__ ts_stream_t ;
struct TYPE_12__ {int i_size; TYPE_7__** p_elems; } ;
struct TYPE_11__ {int i_current; } ;
struct TYPE_16__ {TYPE_2__ e_streams; TYPE_1__ pcr; } ;
typedef TYPE_6__ ts_pmt_t ;
struct TYPE_14__ {TYPE_5__* p_stream; } ;
struct TYPE_17__ {int i_flags; scalar_t__ type; TYPE_4__ u; } ;
typedef TYPE_7__ ts_pid_t ;
struct TYPE_13__ {scalar_t__ i_cat; } ;
struct TYPE_18__ {TYPE_3__ fmt; } ;
typedef TYPE_8__ ts_es_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_7__ const*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static vlc_tick_t FUNC_2( const ts_pmt_t *VAR_4 )
{
    vlc_tick_t VAR_5 = VAR_4->pcr.i_current;
    const ts_stream_t *VAR_6 = ((void*)0);
    for( int VAR_7=0; VAR_7< VAR_4->e_streams.i_size; VAR_7++ )
    {
        const ts_pid_t *VAR_8 = VAR_4->e_streams.p_elems[VAR_7];
        if( (VAR_8->i_flags & VAR_1) && FUNC_0(VAR_8) &&
             VAR_8->type == VAR_2 &&
             VAR_8->u.p_stream->p_es &&
             FUNC_1(VAR_8->u.p_stream->i_last_dts) )
        {
            const ts_es_t *VAR_9 = VAR_8->u.p_stream->p_es;
            if( VAR_9->fmt.i_cat == VAR_3 || VAR_9->fmt.i_cat == VAR_0 )
            {
                if( !VAR_6 || (VAR_9->fmt.i_cat == VAR_3 &&
                                VAR_6->p_es->fmt.i_cat != VAR_3) )
                {
                    VAR_6 = VAR_8->u.p_stream;
                    VAR_5 = VAR_6->i_last_dts;
                }
            }
        }
    }
    return VAR_5;
}
