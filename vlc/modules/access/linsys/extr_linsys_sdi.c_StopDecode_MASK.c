
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * p_buffer; int * p_es; scalar_t__ i_group; } ;
typedef TYPE_1__ sdi_audio_t ;
struct TYPE_6__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_7__ {scalar_t__ i_state; TYPE_1__* p_audios; int rd_telx; int * p_telx_buffer; int * p_es_telx; int rd_wss; int * p_wss_buffer; scalar_t__ b_vbi; int * p_es_video; int * p_current_picture; int * p_line_buffer; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( demux_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;

    if ( VAR_3->i_state != VAR_1 )
        return;

    FUNC_2( VAR_3->p_line_buffer );

    FUNC_0( VAR_3->p_current_picture );
    VAR_3->p_current_picture = ((void*)0);
    FUNC_1( VAR_2->out, VAR_3->p_es_video );

    if ( VAR_3->b_vbi )
    {
        FUNC_2( VAR_3->p_wss_buffer );
        VAR_3->p_wss_buffer = ((void*)0);
        FUNC_3( &VAR_3->rd_wss );

        if ( VAR_3->p_es_telx )
        {
            FUNC_1( VAR_2->out, VAR_3->p_es_telx );
            FUNC_2( VAR_3->p_telx_buffer );
            VAR_3->p_telx_buffer = ((void*)0);
            FUNC_3( &VAR_3->rd_telx );
        }
    }

    for ( int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ )
    {
        sdi_audio_t *VAR_5 = &VAR_3->p_audios[VAR_4];
        if ( VAR_5->i_group && VAR_5->p_es != ((void*)0) )
        {
            FUNC_1( VAR_2->out, VAR_5->p_es );
            VAR_5->p_es = ((void*)0);
            FUNC_2( VAR_5->p_buffer );
            VAR_5->p_buffer = ((void*)0);
        }
    }
}
