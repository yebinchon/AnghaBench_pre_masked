
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef float uint8_t ;
typedef int psz_url ;
typedef int es_format_t ;
struct TYPE_11__ {int force; } ;
struct TYPE_12__ {int out; TYPE_3__* p_sys; int pf_control; int pf_demux; TYPE_1__ obj; int s; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_13__ {int b_start; int b_stream_info; scalar_t__ i_seekpoint; scalar_t__ i_attachments; scalar_t__ i_title_seekpoints; scalar_t__ i_cover_idx; int * p_es; TYPE_6__* p_packetizer; int * p_meta; TYPE_9__** attachments; scalar_t__ i_cover_score; TYPE_9__** pp_title_seekpoints; TYPE_9__** seekpoint; int * p_current_block; int i_pts; scalar_t__ i_length; scalar_t__ i_next_block_flags; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_15__ {char* psz_name; } ;
struct TYPE_14__ {int fmt_in; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (scalar_t__,TYPE_9__**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*,char*) ;
 TYPE_6__* FUNC_4 (TYPE_2__*,int *,char*) ;
 int FUNC_5 (int *,int ,int ) ;
 int * FUNC_6 (int ,int *) ;
 TYPE_3__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (char*,int,char*,char*) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_8 ;
 int * FUNC_11 () ;
 int FUNC_12 (int *,int ,char*) ;
 int FUNC_13 (int ,float const**,int) ;

__attribute__((used)) static int FUNC_14( vlc_object_t * VAR_9 )
{
    demux_t *VAR_10 = (demux_t*)VAR_9;
    demux_sys_t *VAR_11;
    const uint8_t *VAR_12;
    es_format_t VAR_13;


    if( FUNC_13( VAR_10->s, &VAR_12, 4 ) < 4 ) return VAR_4;

    if( VAR_12[0]!='f' || VAR_12[1]!='L' || VAR_12[2]!='a' || VAR_12[3]!='C' )
    {
        if( !VAR_10->obj.force
         && !FUNC_3( VAR_10, "audio/flac" ) )
            return VAR_4;


        FUNC_8( VAR_10, "this doesn't look like a flac stream, "
                 "continuing anyway" );
    }

    VAR_11 = FUNC_7( sizeof( demux_sys_t ) );
    if( FUNC_10(VAR_11 == ((void*)0)) )
        return VAR_5;

    VAR_10->pf_demux = VAR_2;
    VAR_10->pf_control = VAR_1;
    VAR_10->p_sys = VAR_11;
    VAR_11->b_start = 1;
    VAR_11->i_next_block_flags = 0;
    VAR_11->p_packetizer = ((void*)0);
    VAR_11->p_meta = ((void*)0);
    VAR_11->i_length = 0;
    VAR_11->i_pts = VAR_7;
    VAR_11->b_stream_info = 0;
    VAR_11->p_es = ((void*)0);
    VAR_11->p_current_block = ((void*)0);
    FUNC_2( VAR_11->i_seekpoint, VAR_11->seekpoint );
    FUNC_2( VAR_11->i_attachments, VAR_11->attachments);
    FUNC_2( VAR_11->i_title_seekpoints, VAR_11->pp_title_seekpoints );
    VAR_11->i_cover_idx = 0;
    VAR_11->i_cover_score = 0;

    FUNC_5( &VAR_13, VAR_0, VAR_3 );


    if( FUNC_1( VAR_10, &VAR_13 ) )
        goto error;


    VAR_11->p_packetizer = FUNC_4( VAR_10, &VAR_13, "flac" );
    if( !VAR_11->p_packetizer )
        goto error;

    if( VAR_11->i_cover_idx < VAR_11->i_attachments )
    {
        char VAR_14[128];
        if( !VAR_11->p_meta )
            VAR_11->p_meta = FUNC_11();
        FUNC_9( VAR_14, sizeof(VAR_14), "attachment://%s",
                  VAR_11->attachments[VAR_11->i_cover_idx]->psz_name );
        FUNC_12( VAR_11->p_meta, VAR_8, VAR_14 );
    }

    VAR_11->p_es = FUNC_6( VAR_10->out, &VAR_11->p_packetizer->fmt_in );
    if( !VAR_11->p_es )
        goto error;

    return VAR_6;
error:
    FUNC_0( VAR_9 );
    return VAR_4;
}
