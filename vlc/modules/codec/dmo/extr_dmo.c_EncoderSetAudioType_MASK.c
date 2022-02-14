
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_28__ {int i_bitspersample; scalar_t__ i_rate; scalar_t__ i_channels; } ;
struct TYPE_29__ {TYPE_1__ audio; int i_codec; } ;
struct TYPE_30__ {scalar_t__ i_rate; scalar_t__ i_channels; scalar_t__ i_bitspersample; scalar_t__ i_blockalign; } ;
struct TYPE_31__ {int i_bitrate; int i_extra; int * p_extra; TYPE_3__ audio; int i_codec; } ;
struct TYPE_33__ {TYPE_2__ fmt_in; TYPE_4__ fmt_out; } ;
typedef TYPE_6__ encoder_t ;
struct TYPE_34__ {scalar_t__ wFormatTag; scalar_t__ nSamplesPerSec; scalar_t__ nChannels; scalar_t__ wBitsPerSample; int nAvgBytesPerSec; int cbSize; scalar_t__ nBlockAlign; } ;
typedef TYPE_7__ WAVEFORMATEX ;
struct TYPE_36__ {scalar_t__ pbFormat; } ;
struct TYPE_35__ {TYPE_5__* vt; } ;
struct TYPE_32__ {int (* SetOutputType ) (TYPE_8__*,int ,TYPE_9__*,int ) ;int (* SetInputType ) (TYPE_8__*,int ,TYPE_9__*,int ) ;int (* GetInputType ) (TYPE_8__*,int ,int,TYPE_9__*) ;int (* GetOutputType ) (TYPE_8__*,int ,int,TYPE_9__*) ;} ;
typedef TYPE_8__ IMediaObject ;
typedef TYPE_9__ DMO_MEDIA_TYPE ;


 int FUNC_0 (TYPE_9__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,scalar_t__*) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,TYPE_7__*,int) ;
 int FUNC_4 (TYPE_6__*,char*,...) ;
 int FUNC_5 (TYPE_6__*,char*,...) ;
 int FUNC_6 (TYPE_8__*,int ,int,TYPE_9__*) ;
 int FUNC_7 (TYPE_8__*,int ,int,TYPE_9__*) ;
 int FUNC_8 (TYPE_8__*,int ,TYPE_9__*,int ) ;
 int FUNC_9 (TYPE_8__*,int ,int,TYPE_9__*) ;
 int FUNC_10 (TYPE_8__*,int ,int,TYPE_9__*) ;
 int FUNC_11 (TYPE_8__*,int ,TYPE_9__*,int ) ;

__attribute__((used)) static int FUNC_12( encoder_t *VAR_4, IMediaObject *VAR_5 )
{
    int VAR_6, VAR_7, VAR_8;
    unsigned int VAR_9;
    uint16_t VAR_10;
    DMO_MEDIA_TYPE VAR_11;
    WAVEFORMATEX *VAR_12;


    FUNC_1( VAR_4->fmt_out.i_codec, &VAR_10 );
    if( VAR_10 == 0 ) return VAR_1;

    VAR_4->fmt_in.i_codec = VAR_0;
    VAR_4->fmt_in.audio.i_bitspersample = 16;



    VAR_6 = 0; VAR_7 = -1; VAR_9 = 0;
    while( !VAR_5->vt->GetOutputType( VAR_5, 0, VAR_6++, &VAR_11 ) )
    {
        VAR_12 = (WAVEFORMATEX *)VAR_11.pbFormat;
        FUNC_4( VAR_4, "available format :%i, sample rate: %i, channels: %i, "
                 "bits per sample: %i, bitrate: %i, blockalign: %i",
                 (int) VAR_12->wFormatTag, (int)VAR_12->nSamplesPerSec,
                 (int)VAR_12->nChannels, (int)VAR_12->wBitsPerSample,
                 (int)VAR_12->nAvgBytesPerSec * 8, (int)VAR_12->nBlockAlign );

        if( VAR_12->wFormatTag == VAR_10 &&
            VAR_12->nSamplesPerSec == VAR_4->fmt_in.audio.i_rate &&
            VAR_12->nChannels == VAR_4->fmt_in.audio.i_channels &&
            VAR_12->wBitsPerSample == VAR_4->fmt_in.audio.i_bitspersample )
        {
            if( VAR_12->nAvgBytesPerSec <
                VAR_4->fmt_out.i_bitrate * 110 / 800 &&
                VAR_12->nAvgBytesPerSec > VAR_9 )
            {
                VAR_7 = VAR_6 - 1;
                VAR_9 = VAR_12->nAvgBytesPerSec;
                FUNC_4( VAR_4, "selected entry %i (bitrate: %i)",
                         VAR_7, VAR_12->nAvgBytesPerSec * 8 );
            }
        }

        FUNC_0( &VAR_11 );
    }

    if( VAR_7 < 0 )
    {
        FUNC_5( VAR_4, "couldn't find a matching output" );
        return VAR_1;
    }

    VAR_5->vt->GetOutputType( VAR_5, 0, VAR_7, &VAR_11 );
    VAR_12 = (WAVEFORMATEX *)VAR_11.pbFormat;

    FUNC_4( VAR_4, "selected format: %i, sample rate:%i, "
             "channels: %i, bits per sample: %i, bitrate: %i, blockalign: %i",
             (int)VAR_12->wFormatTag, (int)VAR_12->nSamplesPerSec,
             (int)VAR_12->nChannels, (int)VAR_12->wBitsPerSample,
             (int)VAR_12->nAvgBytesPerSec * 8, (int)VAR_12->nBlockAlign );

    VAR_4->fmt_out.audio.i_rate = VAR_12->nSamplesPerSec;
    VAR_4->fmt_out.audio.i_channels = VAR_12->nChannels;
    VAR_4->fmt_out.audio.i_bitspersample = VAR_12->wBitsPerSample;
    VAR_4->fmt_out.audio.i_blockalign = VAR_12->nBlockAlign;
    VAR_4->fmt_out.i_bitrate = VAR_12->nAvgBytesPerSec * 8;

    if( VAR_12->cbSize )
    {
        FUNC_4( VAR_4, "found cbSize: %i", VAR_12->cbSize );
        VAR_4->fmt_out.i_extra = VAR_12->cbSize;
        VAR_4->fmt_out.p_extra = FUNC_2( VAR_4->fmt_out.i_extra );
        if( VAR_4->fmt_out.p_extra == ((void*)0))
            return VAR_1;

        FUNC_3( VAR_4->fmt_out.p_extra, &VAR_12[1], VAR_4->fmt_out.i_extra );
    }

    VAR_8 = VAR_5->vt->SetOutputType( VAR_5, 0, &VAR_11, 0 );
    FUNC_0( &VAR_11 );

    if( VAR_8 )
    {
        FUNC_5( VAR_4, "can't set DMO output type: %i", VAR_8 );
        return VAR_1;
    }

    FUNC_4( VAR_4, "successfully set output type" );


    VAR_6 = 0; VAR_7 = -1;
    while( !VAR_5->vt->GetInputType( VAR_5, 0, VAR_6++, &VAR_11 ) )
    {
        VAR_12 = (WAVEFORMATEX *)VAR_11.pbFormat;
        FUNC_4( VAR_4, "available format :%i, sample rate: %i, channels: %i, "
                 "bits per sample: %i, bitrate: %i, blockalign: %i",
                 (int) VAR_12->wFormatTag, (int)VAR_12->nSamplesPerSec,
                 (int)VAR_12->nChannels, (int)VAR_12->wBitsPerSample,
                 (int)VAR_12->nAvgBytesPerSec * 8, (int)VAR_12->nBlockAlign );

        if( VAR_12->wFormatTag == VAR_3 &&
            VAR_12->nSamplesPerSec == VAR_4->fmt_in.audio.i_rate &&
            VAR_12->nChannels == VAR_4->fmt_in.audio.i_channels &&
            VAR_12->wBitsPerSample == VAR_4->fmt_in.audio.i_bitspersample )
        {
            VAR_7 = VAR_6 - 1;
        }

        FUNC_0( &VAR_11 );
    }

    if( VAR_7 < 0 )
    {
        FUNC_5( VAR_4, "couldn't find a matching input" );
        return VAR_1;
    }

    VAR_5->vt->GetInputType( VAR_5, 0, VAR_7, &VAR_11 );
    VAR_8 = VAR_5->vt->SetInputType( VAR_5, 0, &VAR_11, 0 );
    FUNC_0( &VAR_11 );
    if( VAR_8 )
    {
        FUNC_5( VAR_4, "can't set DMO input type: 0x%x", VAR_8 );
        return VAR_1;
    }
    FUNC_4( VAR_4, "successfully set input type" );

    return VAR_2;
}
