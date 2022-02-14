
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ i_stop; scalar_t__ i_start; int * psz_text; } ;
typedef TYPE_5__ webvtt_cue_t ;
struct index_entry_s {int dummy; } ;
struct callback_ctx {int b_ordered; TYPE_1__* p_demux; } ;
struct TYPE_14__ {int i_alloc; int i_count; TYPE_9__* p_array; } ;
struct TYPE_13__ {int i_count; TYPE_2__* p_array; } ;
struct TYPE_16__ {scalar_t__ i_length; TYPE_4__ index; TYPE_3__ cues; } ;
typedef TYPE_6__ demux_sys_t ;
struct TYPE_17__ {int active; scalar_t__ time; } ;
struct TYPE_12__ {scalar_t__ i_start; } ;
struct TYPE_11__ {TYPE_6__* p_sys; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_9__*,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_3( void *VAR_2, webvtt_cue_t *VAR_3 )
{
    struct callback_ctx *VAR_4 = (struct callback_ctx *) VAR_2;
    demux_sys_t *VAR_5 = VAR_4->p_demux->p_sys;
    if( VAR_3->psz_text == ((void*)0) )
    {
        FUNC_1( VAR_3 );
        FUNC_2( VAR_3 );
        return;
    }
    if( VAR_3->i_stop > VAR_5->i_length )
        VAR_5->i_length = VAR_3->i_stop;
    if( VAR_5->cues.i_count > 0 &&
        VAR_5->cues.p_array[VAR_5->cues.i_count - 1].i_start != VAR_3->i_start )
        VAR_4->b_ordered = 0;


    if( VAR_5->index.i_alloc <= VAR_5->index.i_count &&
       (VAR_0 / sizeof(struct index_entry_s)) - VAR_1 * 2 > VAR_5->index.i_alloc )
    {
        void *VAR_6 = FUNC_0( VAR_5->index.p_array,
                                   sizeof(struct index_entry_s) *
                                   ( VAR_5->index.i_alloc + VAR_1 * 2 ) );
        if( VAR_6 )
        {
            VAR_5->index.p_array = VAR_6;
            VAR_5->index.i_alloc += VAR_1 * 2;
        }
    }
    if( VAR_5->index.i_alloc > VAR_5->index.i_count )
    {
        VAR_5->index.p_array[VAR_5->index.i_count].active = 1;
        VAR_5->index.p_array[VAR_5->index.i_count++].time = VAR_3->i_start;
        VAR_5->index.p_array[VAR_5->index.i_count].active = 0;
        VAR_5->index.p_array[VAR_5->index.i_count++].time = VAR_3->i_stop;
    }
}
