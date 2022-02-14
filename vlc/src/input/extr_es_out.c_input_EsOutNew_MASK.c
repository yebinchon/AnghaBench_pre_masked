
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_5__ {int * cbs; } ;
typedef TYPE_1__ es_out_t ;
struct TYPE_6__ {int b_active; int i_pause_date; float rate; int b_buffering; int i_preroll_end; int i_prev_stream_level; TYPE_1__ out; int i_master_source_cat; int i_group_id; int sub; int audio; int video; int es_slaves; int es; int programs; int i_mode; int * p_input; int lock; } ;
typedef TYPE_2__ es_out_sys_t ;
typedef enum vlc_clock_master_source { ____Placeholder_vlc_clock_master_source } vlc_clock_master_source ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int *,int ,char*,char*,char*,char*) ;
 int VAR_3 ;


 TYPE_2__* FUNC_1 (int,int) ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

es_out_t *FUNC_6( input_thread_t *VAR_5, float VAR_6 )
{
    es_out_sys_t *VAR_7 = FUNC_1( 1, sizeof( *VAR_7 ) );
    if( !VAR_7 )
        return ((void*)0);

    VAR_7->out.cbs = &VAR_4;

    FUNC_5( &VAR_7->lock );
    VAR_7->p_input = VAR_5;

    VAR_7->b_active = 0;
    VAR_7->i_mode = VAR_2;

    FUNC_4(&VAR_7->programs);
    FUNC_4(&VAR_7->es);
    FUNC_4(&VAR_7->es_slaves);


    FUNC_0( &VAR_7->video, 1, VAR_5, VAR_1,
                    "video-track-id", "video-track", ((void*)0), ((void*)0) );
    FUNC_0( &VAR_7->audio, 1, VAR_5, VAR_1,
                    "audio-track-id", "audio-track", "audio-language", "audio" );
    FUNC_0( &VAR_7->sub, 0, VAR_5, VAR_1,
                    "sub-track-id", "sub-track", "sub-language", "sub" );

    VAR_7->i_group_id = FUNC_2( VAR_5, "program" );

    enum vlc_clock_master_source VAR_8 =
        FUNC_3( VAR_5, "clock-master" );
    switch( VAR_8 )
    {
        case 129:
            VAR_7->i_master_source_cat = VAR_0;
            break;
        case 128:
        default:
            VAR_7->i_master_source_cat = VAR_3;
            break;
    }

    VAR_7->i_pause_date = -1;

    VAR_7->rate = VAR_6;

    VAR_7->b_buffering = 1;
    VAR_7->i_preroll_end = -1;
    VAR_7->i_prev_stream_level = -1;

    return &VAR_7->out;
}
