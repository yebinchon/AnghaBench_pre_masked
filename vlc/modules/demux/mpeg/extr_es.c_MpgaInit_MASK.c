
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {char* psz_version; int i_lowpass; } ;
typedef TYPE_2__ lame_extra_t ;
struct TYPE_10__ {int s; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_8__ {scalar_t__ i_frames; scalar_t__ i_bytes; int b_lame; TYPE_2__ lame; int i_frame_samples; void* i_bitrate_avg; } ;
struct TYPE_11__ {int i_packet_size; float* rgf_replay_peak; float* rgf_replay_gain; TYPE_1__ xing; } ;
typedef TYPE_4__ demux_sys_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const) ;
 void* FUNC_6 (int const**,int*,int ) ;
 int FUNC_7 (int const**,int*,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int const**,int*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (int const*,char*,int) ;
 int FUNC_12 (char*,int const*,int) ;
 int FUNC_13 (TYPE_3__*,char*,scalar_t__,...) ;
 int FUNC_14 (int ,int const**,int) ;

__attribute__((used)) static int FUNC_15( demux_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_4->p_sys;

    const uint8_t *VAR_6;
    int VAR_7;


    VAR_5->i_packet_size = 1024;

    FUNC_1( VAR_4, VAR_2 );


    VAR_7 = FUNC_14( VAR_4->s, &VAR_6, 4 + 1024 );
    if( VAR_7 < 4 + 21 )
        return VAR_3;

    const uint32_t VAR_8 = FUNC_0( VAR_6 );
    if( !FUNC_4( VAR_6 ) )
        return VAR_3;


    const uint8_t *VAR_9 = VAR_6;
    int VAR_10 = VAR_7;
    int VAR_11;

    if( FUNC_3( VAR_8 ) == 0 )
        VAR_11 = FUNC_2( VAR_8 ) != 3 ? 36 : 21;
    else
        VAR_11 = FUNC_2( VAR_8 ) != 3 ? 21 : 13;

    if( VAR_11 + 8 >= VAR_10 || FUNC_11( &VAR_9[VAR_11], "Xing", 4 ) )
        return VAR_3;

    const uint32_t VAR_12 = FUNC_0( &VAR_9[VAR_11+4] );

    FUNC_10( &VAR_9, &VAR_10, VAR_11 + 8 );

    if( VAR_12&0x01 )
        VAR_5->xing.i_frames = FUNC_6( &VAR_9, &VAR_10, 0 );
    if( VAR_12&0x02 )
        VAR_5->xing.i_bytes = FUNC_6( &VAR_9, &VAR_10, 0 );
    if( VAR_12&0x04 )
        FUNC_10( &VAR_9, &VAR_10, 100 );
    if( VAR_12&0x08 )
    {


        VAR_5->xing.i_bitrate_avg = FUNC_6( &VAR_9, &VAR_10, 0 );
        FUNC_13( VAR_4, "xing vbr value present (%d)",
                 VAR_5->xing.i_bitrate_avg );
    }

    if( VAR_5->xing.i_frames > 0 && VAR_5->xing.i_bytes > 0 )
    {
        VAR_5->xing.i_frame_samples = FUNC_5( VAR_8 );
        FUNC_13( VAR_4, "xing frames&bytes value present "
                 "(%d bytes, %d frames, %d samples/frame)",
                 VAR_5->xing.i_bytes, VAR_5->xing.i_frames,
                 VAR_5->xing.i_frame_samples );
    }

    if( VAR_10 >= 20 && FUNC_11( VAR_9, "LAME", 4 ) == 0)
    {
        VAR_5->xing.b_lame = 1;
        lame_extra_t *VAR_13 = &VAR_5->xing.lame;

        FUNC_12( VAR_13->psz_version, VAR_9, 9 );
        VAR_13->psz_version[9] = '\0';

        FUNC_10( &VAR_9, &VAR_10, 9 );
        FUNC_10( &VAR_9, &VAR_10, 1 );

        VAR_13->i_lowpass = (*VAR_9) * 100;
        FUNC_10( &VAR_9, &VAR_10, 1 );

        uint32_t VAR_14 = FUNC_6( &VAR_9, &VAR_10, 0 );
        uint16_t VAR_15 = FUNC_7( &VAR_9, &VAR_10, 0 );
        uint16_t VAR_16 = FUNC_7( &VAR_9, &VAR_10, 0 );

        VAR_5->rgf_replay_peak[VAR_1] = (float) FUNC_9( VAR_14 );
        VAR_5->rgf_replay_gain[VAR_1] = (float) FUNC_8( VAR_15 );
        VAR_5->rgf_replay_gain[VAR_0] = (float) FUNC_8( VAR_16 );

        FUNC_10( &VAR_9, &VAR_10, 1 );
    }

    return VAR_3;
}
