
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int i_rate; } ;
struct TYPE_17__ {TYPE_1__ audio; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_18__ {int out; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_19__ {size_t i_buffer; int* p_buffer; } ;
typedef TYPE_4__ block_t ;
struct TYPE_20__ {int i_dv_audio_rate; int * p_es_dv_audio; } ;
typedef TYPE_5__ avi_track_t ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*,int*) ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,TYPE_4__*) ;

__attribute__((used)) static void FUNC_7( demux_t *VAR_0, avi_track_t *VAR_1, block_t *VAR_2 )
{
    size_t VAR_3 = 80 * 6 + 80 * 16 * 3 + 3;
    if( VAR_2->i_buffer < VAR_3 + 5 )
        return;

    if( VAR_2->p_buffer[VAR_3] != 0x50 )
        return;

    es_format_t VAR_4;
    FUNC_2( &VAR_4, &VAR_2->p_buffer[VAR_3 + 1] );

    if( VAR_1->p_es_dv_audio && VAR_1->i_dv_audio_rate != (int)VAR_4.audio.i_rate )
    {
        FUNC_5( VAR_0->out, VAR_1->p_es_dv_audio );
        VAR_1->p_es_dv_audio = ((void*)0);
    }

    if( !VAR_1->p_es_dv_audio )
    {
        VAR_1->p_es_dv_audio = FUNC_4( VAR_0->out, &VAR_4 );
        VAR_1->i_dv_audio_rate = VAR_4.audio.i_rate;
    }

    FUNC_3( &VAR_4 );

    block_t *VAR_5 = FUNC_1( VAR_2 );
    if( VAR_5 )
    {
        if( VAR_1->p_es_dv_audio )
            FUNC_6( VAR_0->out, VAR_1->p_es_dv_audio, VAR_5 );
        else
            FUNC_0( VAR_5 );
    }
}
