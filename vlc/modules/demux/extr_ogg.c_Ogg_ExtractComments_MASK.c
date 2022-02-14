
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int psz_url ;
struct TYPE_10__ {int* pb_gain; float* pf_gain; int* pb_peak; float* pf_peak; } ;
struct TYPE_11__ {TYPE_1__ audio_replay_gain; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_12__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_13__ {int i_attachments; int i_seekpoints; int updates; int * p_meta; TYPE_6__** attachments; int pp_seekpoints; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_14__ {char* psz_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,int,float) ;
 int FUNC_1 (char*,int,char*,char*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (TYPE_2__*,int **,void const*,unsigned int,int*,TYPE_6__***,int*,int*,int*,int *,float**,float**) ;

__attribute__((used)) static void FUNC_4( demux_t *VAR_3, es_format_t *VAR_4,
                                 const void *VAR_5, unsigned VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_3->p_sys;
    int VAR_8 = 0;
    int VAR_9 = 0;
    float VAR_10[VAR_0];
    float VAR_11[VAR_0];
    for(int VAR_12=0; VAR_12< VAR_0; VAR_12++ )
    {
        VAR_10[VAR_12] = 0;
        VAR_11[VAR_12] = 0;
    }
    FUNC_3( VAR_4, &VAR_7->p_meta, VAR_5, VAR_6,
                         &VAR_7->i_attachments, &VAR_7->attachments,
                         &VAR_8, &VAR_9,
                         &VAR_7->i_seekpoints, &VAR_7->pp_seekpoints,
                         &VAR_10, &VAR_11 );
    if( VAR_7->p_meta != ((void*)0) && VAR_9 < VAR_7->i_attachments )
    {
        char VAR_13[128];
        FUNC_1( VAR_13, sizeof(VAR_13), "attachment://%s",
                  VAR_7->attachments[VAR_9]->psz_name );
        FUNC_2( VAR_7->p_meta, VAR_2, VAR_13 );
    }

    for ( int VAR_14=0; VAR_14<VAR_0;VAR_14++ )
    {
        if ( VAR_10[VAR_14] != 0 )
        {
            VAR_4->audio_replay_gain.pb_gain[VAR_14] = 1;
            VAR_4->audio_replay_gain.pf_gain[VAR_14] = VAR_10[VAR_14];
            FUNC_0( VAR_3, "setting replay gain %d to %f", VAR_14, VAR_10[VAR_14] );
        }
        if ( VAR_11[VAR_14] != 0 )
        {
            VAR_4->audio_replay_gain.pb_peak[VAR_14] = 1;
            VAR_4->audio_replay_gain.pf_peak[VAR_14] = VAR_11[VAR_14];
            FUNC_0( VAR_3, "setting replay peak %d to %f", VAR_14, VAR_10[VAR_14] );
        }
    }

    if( VAR_7->i_seekpoints > 1 )
    {
        VAR_7->updates |= VAR_1;
    }
}
