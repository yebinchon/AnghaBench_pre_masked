
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ i_start; scalar_t__ i_stop; } ;
typedef TYPE_3__ webvtt_cue_t ;
typedef scalar_t__ vlc_tick_t ;
struct TYPE_16__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_14__ {scalar_t__ i_current; } ;
struct TYPE_13__ {size_t i_count; TYPE_3__* p_array; } ;
struct TYPE_17__ {TYPE_2__ index; TYPE_1__ cues; } ;
typedef TYPE_5__ demux_sys_t ;
struct TYPE_18__ {struct TYPE_18__* p_next; } ;
typedef TYPE_6__ block_t ;


 TYPE_6__* FUNC_0 (TYPE_3__ const*,int) ;
 TYPE_6__* FUNC_1 (TYPE_6__*) ;

__attribute__((used)) static block_t *FUNC_2( demux_t *VAR_0, vlc_tick_t VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_0->p_sys;

    block_t *VAR_3 = ((void*)0);
    block_t **VAR_4 = &VAR_3;
    for( size_t VAR_5=0; VAR_5<VAR_2->cues.i_count; VAR_5++ )
    {
        const webvtt_cue_t *VAR_6 = &VAR_2->cues.p_array[VAR_5];
        if( VAR_6->i_start > VAR_1 )
        {
            break;
        }
        else if( VAR_6->i_start <= VAR_1 && VAR_6->i_stop > VAR_1 )
        {
            *VAR_4 = FUNC_0( VAR_6, VAR_2->index.i_current > 0 );
            if( *VAR_4 )
                VAR_4 = &((*VAR_4)->p_next);
        }
    }

    return ( VAR_3 ) ? FUNC_1( VAR_3 ) : ((void*)0);
}
