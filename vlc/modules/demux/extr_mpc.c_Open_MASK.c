
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_19__ {int* pb_peak; float* pf_peak; int* pb_gain; float* pf_gain; } ;
struct TYPE_18__ {int i_channels; int i_blockalign; int i_bitspersample; int i_rate; } ;
struct TYPE_20__ {int i_bitrate; TYPE_3__ audio_replay_gain; TYPE_2__ audio; } ;
typedef TYPE_4__ es_format_t ;
struct TYPE_17__ {int force; } ;
struct TYPE_21__ {int out; TYPE_6__* p_sys; int pf_control; int pf_demux; TYPE_1__ obj; int s; } ;
typedef TYPE_5__ demux_t ;
struct TYPE_23__ {int channels; scalar_t__ peak_title; scalar_t__ peak_album; int gain_album; int gain_title; int sample_freq; } ;
struct TYPE_24__ {TYPE_5__* data; int canseek; int get_size; int tell; int seek; int read; } ;
struct TYPE_22__ {int p_es; TYPE_7__ info; int decoder; TYPE_8__ reader; scalar_t__ i_position; } ;
typedef TYPE_6__ demux_sys_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_6__* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_5__*,char*) ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ FUNC_8 (int const*,char*,int) ;
 int FUNC_9 (int *,TYPE_7__*) ;
 int FUNC_10 (int *,TYPE_8__*) ;
 int FUNC_11 (TYPE_7__*) ;
 scalar_t__ FUNC_12 (TYPE_7__*,TYPE_8__*) ;
 int FUNC_13 (int ,int const**,int) ;

__attribute__((used)) static int FUNC_14( vlc_object_t * VAR_17 )
{
    demux_t *VAR_18 = (demux_t*)VAR_17;
    demux_sys_t *VAR_19;
    es_format_t VAR_20;
    const uint8_t *VAR_21;

    if( FUNC_13( VAR_18->s, &VAR_21, 4 ) < 4 )
        return VAR_14;

    if( FUNC_8( VAR_21, "MP+", 3 ) )
    {

        const int VAR_22 = (FUNC_2( VAR_21 ) >> 11)&0x3ff;

        if( VAR_22 < 4 || VAR_22 > 6 )
            return VAR_14;

        if( !VAR_18->obj.force )
        {

            if( !FUNC_4( VAR_18, ".mpc" ) &&
                !FUNC_4( VAR_18, ".mp+" ) &&
                !FUNC_4( VAR_18, ".mpp" ) )
                return VAR_14;
        }
    }


    VAR_19 = FUNC_3( 1, sizeof( *VAR_19 ) );
    if( !VAR_19 )
        return VAR_15;

    VAR_19->i_position = 0;

    VAR_19->reader.read = VAR_8;
    VAR_19->reader.seek = VAR_9;
    VAR_19->reader.tell = VAR_10;
    VAR_19->reader.get_size = VAR_7;
    VAR_19->reader.canseek = VAR_6;
    VAR_19->reader.data = VAR_18;


    FUNC_11( &VAR_19->info );
    if( FUNC_12( &VAR_19->info, &VAR_19->reader ) != VAR_5 )
        goto error;


    FUNC_10( &VAR_19->decoder, &VAR_19->reader );
    if( !FUNC_9( &VAR_19->decoder, &VAR_19->info ) )
        goto error;


    VAR_18->pf_demux = VAR_4;
    VAR_18->pf_control = VAR_3;
    VAR_18->p_sys = VAR_19;



    FUNC_5( &VAR_20, VAR_0, VAR_11 );







    VAR_20.audio.i_channels = VAR_19->info.channels;
    VAR_20.audio.i_rate = VAR_19->info.sample_freq;
    VAR_20.audio.i_blockalign = 4*VAR_20.audio.i_channels;
    VAR_20.audio.i_bitspersample = 32;
    VAR_20.i_bitrate = VAR_20.i_bitrate * VAR_20.audio.i_channels *
                    VAR_20.audio.i_bitspersample;
    if( VAR_19->info.peak_title > 0 )
    {
        VAR_20.audio_replay_gain.pb_peak[VAR_2] = 1;
        VAR_20.audio_replay_gain.pf_peak[VAR_2] = (float) ((VAR_19->info.peak_title) / 32767.0);
        VAR_20.audio_replay_gain.pb_gain[VAR_2] = 1;
        VAR_20.audio_replay_gain.pf_gain[VAR_2] = (float) ((VAR_19->info.gain_title) / 100.0);
    }
    if( VAR_19->info.peak_album > 0 )
    {
        VAR_20.audio_replay_gain.pb_peak[VAR_1] = 1;
        VAR_20.audio_replay_gain.pf_peak[VAR_1] = (float) ((VAR_19->info.peak_album) / 32767.0);
        VAR_20.audio_replay_gain.pb_gain[VAR_1] = 1;
        VAR_20.audio_replay_gain.pf_gain[VAR_1] = (float) ((VAR_19->info.gain_album) / 100.0);
    }




    VAR_19->p_es = FUNC_6( VAR_18->out, &VAR_20 );
    if( !VAR_19->p_es )
        goto error;

    return VAR_16;

error:
    FUNC_7( VAR_19 );
    return VAR_14;
}
