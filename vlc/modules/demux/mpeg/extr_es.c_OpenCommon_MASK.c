
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;


typedef int uint64_t ;
struct TYPE_21__ {int* pb_gain; double* pf_gain; int* pb_peak; double* pf_peak; } ;
struct TYPE_22__ {TYPE_2__ audio_replay_gain; int i_original_fourcc; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_23__ {int s; TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_25__ {int psz_name; int i_codec; scalar_t__ (* pf_init ) (TYPE_4__*) ;} ;
struct TYPE_20__ {int p_entry; int i_count; scalar_t__ i_current; } ;
struct TYPE_24__ {int b_start; int b_estimate_bitrate; int b_big_endian; double* rgf_replay_gain; double* rgf_replay_peak; int * p_packetized_data; TYPE_13__* p_packetizer; TYPE_6__ codec; int i_original; int i_stream_offset; TYPE_1__ chapters; int f_fps; scalar_t__ i_bitrate_avg; int * p_es; } ;
typedef TYPE_5__ demux_sys_t ;
typedef TYPE_6__ codec_t ;
struct TYPE_19__ {TYPE_3__ fmt_out; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_4__*,int **) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_13__* FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int ,int) ;
 int FUNC_7 (TYPE_4__*,char*,char const*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11( demux_t *VAR_3,
                       int VAR_4, const codec_t *VAR_5, uint64_t VAR_6 )
{
    demux_sys_t *VAR_7;

    es_format_t VAR_8;

    FUNC_0(); VAR_7 = VAR_3->p_sys;
    FUNC_6( VAR_7, 0, sizeof( demux_sys_t ) );
    VAR_7->codec = *VAR_5;
    VAR_7->p_es = ((void*)0);
    VAR_7->b_start = 1;
    VAR_7->i_stream_offset = VAR_6;
    VAR_7->b_estimate_bitrate = 1;
    VAR_7->i_bitrate_avg = 0;
    VAR_7->b_big_endian = 0;
    VAR_7->f_fps = FUNC_9( VAR_3, "es-fps" );
    VAR_7->p_packetized_data = ((void*)0);
    VAR_7->chapters.i_current = 0;
    FUNC_2(VAR_7->chapters.i_count, VAR_7->chapters.p_entry);

    if( FUNC_10( VAR_3->s, VAR_7->i_stream_offset ) )
    {
        FUNC_5( VAR_7 );
        return VAR_1;
    }

    if( VAR_7->codec.pf_init( VAR_3 ) )
    {
        FUNC_5( VAR_7 );
        return VAR_1;
    }

    FUNC_7( VAR_3, "detected format %4.4s", (const char*)&VAR_7->codec.i_codec );


    FUNC_4( &VAR_8, VAR_4, VAR_7->codec.i_codec );
    VAR_8.i_original_fourcc = VAR_7->i_original;
    VAR_7->p_packetizer = FUNC_3( VAR_3, &VAR_8, VAR_7->codec.psz_name );
    if( !VAR_7->p_packetizer )
    {
        FUNC_5( VAR_7 );
        return VAR_1;
    }

    es_format_t *VAR_9 = &VAR_7->p_packetizer->fmt_out;
    for( int VAR_10 = 0; VAR_10 < VAR_0; VAR_10++ )
    {
        if ( VAR_7->rgf_replay_gain[VAR_10] != 0.0 )
        {
            VAR_9->audio_replay_gain.pb_gain[VAR_10] = 1;
            VAR_9->audio_replay_gain.pf_gain[VAR_10] = VAR_7->rgf_replay_gain[VAR_10];
        }
        if ( VAR_7->rgf_replay_peak[VAR_10] != 0.0 )
        {
            VAR_9->audio_replay_gain.pb_peak[VAR_10] = 1;
            VAR_9->audio_replay_gain.pf_peak[VAR_10] = VAR_7->rgf_replay_peak[VAR_10];
        }
    }

    for( ;; )
    {
        if( FUNC_1( VAR_3, &VAR_7->p_packetized_data ) )
            break;
        if( VAR_7->p_packetized_data )
            break;
    }

    return VAR_2;
}
