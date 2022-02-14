
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_17__ {scalar_t__ i_byte_offset; scalar_t__ i_time_offset; } ;
typedef TYPE_2__ flac_seekpoint_t ;
struct TYPE_16__ {scalar_t__ i_rate; int i_bitspersample; int i_channels; } ;
struct TYPE_18__ {int* p_extra; int i_extra; TYPE_1__ audio; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_19__ {int s; TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_15__ {scalar_t__ sample_rate; int total_samples; int bits_per_sample; int channels; } ;
struct TYPE_20__ {int b_stream_info; int i_data_pos; TYPE_14__ stream_info; int i_length; int seekpoint; int i_seekpoint; } ;
typedef TYPE_5__ demux_sys_t ;


 int FUNC_0 (int*,TYPE_14__*) ;
 int VAR_0 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_4__*,int const*,int) ;
 int FUNC_4 (TYPE_4__*,int const*,int) ;
 int FUNC_5 (TYPE_4__*,int const*,int,scalar_t__) ;
 int FUNC_6 (int ,int ,TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int*,char*,int) ;
 int FUNC_9 (TYPE_4__*,char*,...) ;
 int FUNC_10 (int ,int const**,int) ;
 int FUNC_11 (int ,int*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,scalar_t__) ;
 TYPE_2__* FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15( demux_t *VAR_7, es_format_t *VAR_8 )
{
    demux_sys_t *VAR_9 = VAR_7->p_sys;
    ssize_t VAR_10;
    const uint8_t *VAR_11;
    bool VAR_12;


    flac_seekpoint_t *VAR_13 = FUNC_14( sizeof (*VAR_13) );
    VAR_13->i_time_offset = 0;
    VAR_13->i_byte_offset = 0;
    FUNC_6( VAR_9->i_seekpoint, VAR_9->seekpoint, VAR_13 );

    uint8_t VAR_14[4];
    if( FUNC_11( VAR_7->s, VAR_14, 4) < 4)
        return VAR_5;

    if (FUNC_8(VAR_14, "fLaC", 4))
        return VAR_5;

    VAR_12 = 0;
    while( !VAR_12 )
    {
        int VAR_15;
        int VAR_16;

        VAR_10 = FUNC_10( VAR_7->s, &VAR_11, 4 );
        if( VAR_10 < 4 )
            break;
        VAR_12 = VAR_11[0]&0x80;
        VAR_16 = VAR_11[0]&0x7f;
        VAR_15 = FUNC_2( &VAR_11[1] );

        if( VAR_16 == VAR_4 && VAR_8->p_extra == ((void*)0) )
        {
            if( VAR_15 != VAR_0 ) {
                FUNC_9( VAR_7, "invalid size %d for a STREAMINFO metadata block", VAR_15 );
                return VAR_5;
            }

            VAR_8->p_extra = FUNC_7( VAR_0 );
            if( VAR_8->p_extra == ((void*)0) )
                return VAR_5;

            if( FUNC_11( VAR_7->s, ((void*)0), 4) < 4)
            {
                FUNC_1( VAR_8->p_extra );
                return VAR_5;
            }
            if( FUNC_11( VAR_7->s, VAR_8->p_extra,
                                 VAR_0 ) != VAR_0 )
            {
                FUNC_9( VAR_7, "failed to read STREAMINFO metadata block" );
                FUNC_1( VAR_8->p_extra );
                return VAR_5;
            }
            VAR_8->i_extra = VAR_0;


            VAR_9->b_stream_info = 1;
            FUNC_0( (uint8_t *) VAR_8->p_extra, &VAR_9->stream_info );

            VAR_8->audio.i_rate = VAR_9->stream_info.sample_rate;
            VAR_8->audio.i_channels = VAR_9->stream_info.channels;
            VAR_8->audio.i_bitspersample = VAR_9->stream_info.bits_per_sample;
            if( VAR_9->stream_info.sample_rate > 0 )
                VAR_9->i_length = FUNC_13(VAR_9->stream_info.total_samples,
                                  VAR_9->stream_info.sample_rate);

            continue;
        }
        else if( VAR_16 == VAR_3 )
        {
            VAR_10 = FUNC_10( VAR_7->s, &VAR_11, 4+VAR_15 );
            if( VAR_10 == 4+VAR_15 )
                FUNC_5( VAR_7, VAR_11, VAR_10, VAR_8->audio.i_rate );
        }
        else if( VAR_16 == VAR_1 )
        {
            VAR_10 = FUNC_10( VAR_7->s, &VAR_11, 4+VAR_15 );
            if( VAR_10 == 4+VAR_15 )
                FUNC_3( VAR_7, VAR_11, VAR_10 );
        }
        else if( VAR_16 == VAR_2 )
        {
            VAR_10 = FUNC_10( VAR_7->s, &VAR_11, 4+VAR_15 );
            if( VAR_10 == 4+VAR_15 )
                FUNC_4( VAR_7, VAR_11, VAR_10 );
        }

        if( FUNC_11( VAR_7->s, ((void*)0), 4+VAR_15 ) < 4+VAR_15 )
            break;
    }


    VAR_9->i_data_pos = FUNC_12( VAR_7->s );

    if ( VAR_8->p_extra == ((void*)0) )
        return VAR_5;

    return VAR_6;
}
