
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_14__ {int bytes; scalar_t__ packet; } ;
typedef TYPE_3__ ogg_packet ;
struct TYPE_12__ {int i_channels; int i_rate; int channel_type; int i_physical_channels; } ;
struct TYPE_13__ {TYPE_1__ audio; } ;
struct TYPE_15__ {TYPE_2__ fmt_out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_17__ {int channels; int channel_mapping; unsigned char* stream_map; int gain; int nb_coupled; int nb_streams; } ;
struct TYPE_16__ {int end_date; int p_st; TYPE_6__ header; } ;
typedef TYPE_5__ decoder_sys_t ;
typedef TYPE_6__ OpusHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int const*,int *,int ,size_t*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,char*,int) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (unsigned char*,int ,TYPE_6__*) ;
 int FUNC_7 (int,int,int ,int ,unsigned char*,int*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;






 int * VAR_5 ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11( decoder_t *VAR_6, ogg_packet *VAR_7 )
{
    int VAR_8;
    unsigned char* VAR_9;
    unsigned char VAR_10[8];
    decoder_sys_t *VAR_11 = VAR_6->p_sys;

    OpusHeader *VAR_12 = &VAR_11->header;

    if( !FUNC_6((unsigned char *)VAR_7->packet,VAR_7->bytes,VAR_12) )
    {
        FUNC_5( VAR_6, "cannot read Opus header" );
        return VAR_3;
    }
    FUNC_4( VAR_6, "Opus audio with %d channels", VAR_12->channels);

    if((VAR_12->channels>2 && VAR_12->channel_mapping==0) ||
        (VAR_12->channels>8 && VAR_12->channel_mapping==1) ||
        (VAR_12->channels>18 && VAR_12->channel_mapping==2) ||
        VAR_12->channel_mapping>2)
    {
        FUNC_5( VAR_6, "Unsupported channel mapping" );
        return VAR_3;
    }
    if (VAR_12->channel_mapping == 2)
    {
        int VAR_13 = FUNC_3(FUNC_10(VAR_12->channels));
        int VAR_14 = VAR_12->channels - VAR_13 * VAR_13;
        if (VAR_14 != 0 && VAR_14 != 2)
        {
            FUNC_5( VAR_6, "Unsupported ambisonic channel mapping" );
            return VAR_3;
        }
    }


    VAR_6->fmt_out.audio.i_channels = VAR_12->channels;
    VAR_6->fmt_out.audio.i_rate = 48000;

    if (VAR_12->channel_mapping <= 1)
    {
        VAR_6->fmt_out.audio.i_physical_channels =
            VAR_5[VAR_12->channels];

        if( VAR_12->channels>2 )
        {
            static const uint32_t *VAR_15[6] = { 133, 132,
                                                131, 130,
                                                129, 128 };
            uint8_t VAR_16[VAR_0];

            FUNC_1( VAR_15[VAR_12->channels-3], ((void*)0),
                                      VAR_6->fmt_out.audio.i_physical_channels,
                                      VAR_16 );
            for(int VAR_17=0;VAR_17<VAR_12->channels;VAR_17++)
                VAR_10[VAR_16[VAR_17]]=VAR_12->stream_map[VAR_17];

            VAR_9 = VAR_10;
        }
        else
            VAR_9 = VAR_12->stream_map;
    }
    else
    {
        VAR_6->fmt_out.audio.channel_type = VAR_1;
        VAR_9 = VAR_12->stream_map;
    }


    VAR_11->p_st = FUNC_7( 48000, VAR_12->channels,
                    VAR_12->nb_streams, VAR_12->nb_coupled,
                    VAR_9,
                    &VAR_8 );
    if( !VAR_11->p_st || VAR_8!=VAR_2 )
    {
        FUNC_5( VAR_6, "decoder initialization failed" );
        return VAR_3;
    }
    FUNC_2( &VAR_11->end_date, 48000, 1 );

    return VAR_4;
}
