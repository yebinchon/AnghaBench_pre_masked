
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_8__ {unsigned int i_rate; int i_channels; int i_bytes_per_frame; int i_frame_length; int i_bitspersample; int i_blockalign; } ;
struct TYPE_11__ {scalar_t__ i_codec; int i_bitrate; TYPE_1__ audio; } ;
struct TYPE_10__ {int i_max_frames; TYPE_6__ fmt; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 double VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (char,char,char,char) ;
 int VAR_10 ;
 int FUNC_4 (TYPE_6__*,int ,int ) ;
 scalar_t__ FUNC_5 (double) ;
 int FUNC_6 (TYPE_2__*,char*,...) ;
 int FUNC_7 (TYPE_2__*,char*,int) ;
 double FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (int ,int const**,int) ;

__attribute__((used)) static int FUNC_11( demux_t *VAR_11 )
{
    demux_sys_t *VAR_12 = VAR_11->p_sys;

    const uint8_t *VAR_13;

    if ( FUNC_10( VAR_11->s, &VAR_13, 8 + 6 * 4 ) < ( 8 + 6 * 4 ))
    {
        return VAR_9;
    }

    vlc_fourcc_t VAR_14 = FUNC_2( VAR_13 + 8 );
    uint32_t VAR_15 = FUNC_1( VAR_13 + 12 );

    uint32_t VAR_16 = FUNC_1( VAR_13 + 28 );
    uint32_t VAR_17 = FUNC_1( VAR_13 + 16 );
    uint32_t VAR_18 = FUNC_1( VAR_13 + 20 );
    uint32_t VAR_19 = FUNC_1( VAR_13 + 24 );

    if( VAR_14 == VAR_2 )
    {
        if( !VAR_18 || !VAR_19 )
        {
            FUNC_6( VAR_11, "Absurd LPCM parameters (frames_per_packet: %u, channels_per_frame: %u).", VAR_18, VAR_19 );
            return VAR_9;
        }

        uint32_t VAR_20 = ( VAR_17 / VAR_18 / VAR_19 ) * 8;

        bool VAR_21 = !!( VAR_15 & ( 1 << 0 ) );
        bool VAR_22 = !( VAR_15 & ( 1 << 1 ) );

        vlc_fourcc_t VAR_23 = 0;

        if( !VAR_21 )
        {
            VAR_23 = VAR_22 ? FUNC_3( 't', 'w', 'o', 's' ) : FUNC_3( 's', 'o', 'w', 't' );
            FUNC_4( &VAR_12->fmt, VAR_0, FUNC_9( VAR_23, VAR_20 ));
        }
        else
        {
            if( VAR_16 == 32 )
                VAR_23 = VAR_22 ? VAR_3 : VAR_4;
            else if( VAR_16 == 64 )
                VAR_23 = VAR_22 ? VAR_5 : VAR_6;

            if( VAR_23 )
                FUNC_4( &VAR_12->fmt, VAR_0, FUNC_9( VAR_23, VAR_16 ));
        }
    }
    else if( VAR_14 == FUNC_3( 'a', 'a', 'c', ' ' ))
    {
        const uint32_t VAR_24 = 2;

        if( VAR_15 != VAR_24 )
        {
            FUNC_7( VAR_11, "The only documented format flag for aac is 2 (kMP4Audio_AAC_LC_ObjectType), but is %i. Continuing anyways.", VAR_15 );
        }

        FUNC_4( &VAR_12->fmt, VAR_0, FUNC_9( VAR_7, 0 ));

    }
    else
    {
        FUNC_4( &VAR_12->fmt, VAR_0, FUNC_9( VAR_14, 0 ));
    }

    if( !VAR_12->fmt.i_codec )
    {
        FUNC_6( VAR_11, "could not determine codec" );
        return VAR_9;
    }

    double VAR_25 = FUNC_8( FUNC_0( VAR_13 ));

    if( VAR_25 <= 0 || VAR_25 > VAR_1 )
        return VAR_9;

    VAR_12->fmt.audio.i_rate = (unsigned int)FUNC_5( VAR_25 );
    if( !VAR_12->fmt.audio.i_rate )
    {
        FUNC_6( VAR_11, "Sample rate must be non-zero" );
        return VAR_9;
    }
    VAR_12->fmt.audio.i_channels = VAR_19;
    VAR_12->fmt.audio.i_bytes_per_frame = VAR_17;
    VAR_12->fmt.audio.i_frame_length = VAR_18;
    VAR_12->fmt.audio.i_bitspersample = VAR_16;
    VAR_12->fmt.audio.i_blockalign = VAR_17;
    VAR_12->fmt.i_bitrate = VAR_16 * VAR_12->fmt.audio.i_rate * VAR_19;

    if( VAR_12->fmt.i_codec == VAR_8 )
    {
        VAR_12->i_max_frames = 1;
    }
    else VAR_12->i_max_frames = VAR_1;

    return VAR_10;
}
