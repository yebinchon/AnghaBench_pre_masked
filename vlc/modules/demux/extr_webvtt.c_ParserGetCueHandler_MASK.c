
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * psz_text; } ;
typedef TYPE_3__ webvtt_cue_t ;
struct callback_ctx {TYPE_1__* p_demux; } ;
struct TYPE_9__ {int i_count; int i_alloc; TYPE_3__* p_array; } ;
struct TYPE_11__ {TYPE_2__ cues; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_8__ {TYPE_4__* p_sys; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static webvtt_cue_t * FUNC_1( void *VAR_2 )
{
    struct callback_ctx *VAR_3 = (struct callback_ctx *) VAR_2;
    demux_sys_t *VAR_4 = VAR_3->p_demux->p_sys;

    if( VAR_4->cues.i_count &&
        VAR_4->cues.p_array[VAR_4->cues.i_count - 1].psz_text == ((void*)0) )
    {
        return &VAR_4->cues.p_array[VAR_4->cues.i_count - 1];
    }

    if( VAR_4->cues.i_alloc <= VAR_4->cues.i_count &&
       (VAR_0 / sizeof(webvtt_cue_t)) - VAR_1 > VAR_4->cues.i_alloc )
    {
        webvtt_cue_t *VAR_5 = FUNC_0( VAR_4->cues.p_array,
                sizeof(webvtt_cue_t) * ( VAR_4->cues.i_alloc + VAR_1 ) );
        if( VAR_5 )
        {
            VAR_4->cues.p_array = VAR_5;
            VAR_4->cues.i_alloc += VAR_1;
        }
    }

    if( VAR_4->cues.i_alloc > VAR_4->cues.i_count )
        return &VAR_4->cues.p_array[VAR_4->cues.i_count++];

    return ((void*)0);
}
