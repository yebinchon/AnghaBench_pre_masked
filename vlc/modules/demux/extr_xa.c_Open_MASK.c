
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int iSize; int const wBitsPerSample; int const nChannels; int nSamplesPerSec; } ;
typedef TYPE_2__ xa_header_t ;
typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_11__ {int i_rate; int i_bytes_per_frame; int i_frame_length; int i_channels; int i_blockalign; int i_bitspersample; } ;
struct TYPE_13__ {int i_bitrate; TYPE_1__ audio; int i_codec; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_14__ {TYPE_5__* p_sys; int pf_control; int pf_demux; int out; int s; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_15__ {int i_data_size; int i_block_frames; int i_frame_size; int i_bitrate; int pts; int * p_es; } ;
typedef TYPE_5__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int * FUNC_5 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_6 (int const*,char*,int) ;
 int FUNC_7 (TYPE_4__*,char*,...) ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_5__* FUNC_9 (int *,int) ;
 int FUNC_10 (int ,int const**,int) ;
 scalar_t__ FUNC_11 (int ,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_12( vlc_object_t * VAR_10 )
{
    demux_t *VAR_11 = (demux_t*)VAR_10;
    const uint8_t *VAR_12;


    if( FUNC_10( VAR_11->s, &VAR_12, 10 ) < 10 )
        return VAR_6;
    if( FUNC_6( VAR_12, "XAI", 4 ) && FUNC_6( VAR_12, "XAJ", 4 ) &&
            FUNC_6( VAR_12, "XA\0", 4 ) )
        return VAR_6;
    if( FUNC_1( VAR_12 + 8 ) != 1 )
        return VAR_6;

    demux_sys_t *VAR_13 = FUNC_9( VAR_10, sizeof (*VAR_13) );
    if( FUNC_8( VAR_13 == ((void*)0) ) )
        return VAR_7;


    xa_header_t VAR_14;

    if( FUNC_11( VAR_11->s, &VAR_14, VAR_4 ) < VAR_4 )
        return VAR_6;

    es_format_t VAR_15;
    FUNC_4( &VAR_15, VAR_0, VAR_5 );

    FUNC_7( VAR_11, "assuming EA ADPCM audio codec" );
    VAR_15.audio.i_rate = FUNC_0( &VAR_14.nSamplesPerSec );
    VAR_15.audio.i_bytes_per_frame = 15 * FUNC_1( &VAR_14.nChannels );
    VAR_15.audio.i_frame_length = VAR_3;

    VAR_15.audio.i_channels = FUNC_1 ( &VAR_14.nChannels );
    VAR_15.audio.i_blockalign = VAR_15.audio.i_bytes_per_frame;
    VAR_15.audio.i_bitspersample = FUNC_1( &VAR_14.wBitsPerSample );
    VAR_15.i_bitrate = (VAR_15.audio.i_rate * VAR_15.audio.i_bytes_per_frame * 8)
                    / VAR_15.audio.i_frame_length;


    VAR_13->i_data_size = VAR_14.iSize * 15 / 56;

    VAR_13->i_block_frames = VAR_15.audio.i_rate / (VAR_3 * 20) + 1;
    VAR_13->i_frame_size = VAR_15.audio.i_bytes_per_frame;
    VAR_13->i_bitrate = VAR_15.i_bitrate;

    FUNC_7( VAR_11, "fourcc: %4.4s, channels: %d, "
             "freq: %d Hz, bitrate: %dKo/s, blockalign: %d",
             (char *)&VAR_15.i_codec, VAR_15.audio.i_channels, VAR_15.audio.i_rate,
             VAR_15.i_bitrate / 8192, VAR_15.audio.i_blockalign );

    if( VAR_15.audio.i_rate == 0 || VAR_15.audio.i_channels == 0
     || VAR_15.audio.i_bitspersample != 16 )
        return VAR_6;

    VAR_13->p_es = FUNC_5( VAR_11->out, &VAR_15 );
    if( FUNC_8(VAR_13->p_es == ((void*)0)) )
        return VAR_7;

    FUNC_2( &VAR_13->pts, VAR_15.audio.i_rate, 1 );
    FUNC_3( &VAR_13->pts, VAR_9 );

    VAR_11->pf_demux = VAR_2;
    VAR_11->pf_control = VAR_1;
    VAR_11->p_sys = VAR_13;
    return VAR_8;
}
