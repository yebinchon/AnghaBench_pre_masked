
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_12__ {int i_bytes_per_sample; int format; int i_rate; int i_channel_mask; int * p_notify; int * p_dsbuffer; int chans_to_reorder; int chan_table; int p_dsobject; } ;
typedef TYPE_3__ aout_stream_sys_t ;
struct TYPE_11__ {int wBitsPerSample; int nChannels; int nSamplesPerSec; int nBlockAlign; int nAvgBytesPerSec; int cbSize; int wFormatTag; } ;
struct TYPE_10__ {int wValidBitsPerSample; } ;
struct TYPE_13__ {int dwChannelMask; TYPE_2__ Format; int SubFormat; TYPE_1__ Samples; } ;
typedef TYPE_4__ WAVEFORMATEXTENSIBLE ;
typedef int WAVEFORMATEX ;
struct TYPE_14__ {int dwSize; int dwFlags; int * lpwfxFormat; int dwBufferBytes; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_5__ DSBUFFERDESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,TYPE_3__*,int *) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_5__*,int **,int *) ;
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
 int FUNC_5 (int*,int ,int,int ) ;
 int FUNC_6 (TYPE_5__*,int ,int) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int* VAR_17 ;
 int VAR_18 ;
 int* VAR_19 ;

__attribute__((used)) static HRESULT FUNC_9( vlc_object_t *VAR_20, aout_stream_sys_t *VAR_21,
                               int VAR_22, int VAR_23, int VAR_24,
                               int VAR_25, bool VAR_26 )
{
    WAVEFORMATEXTENSIBLE VAR_27;
    DSBUFFERDESC VAR_28;
    HRESULT VAR_29;


    VAR_27.dwChannelMask = 0;
    for( unsigned VAR_30 = 0; VAR_19[VAR_30]; VAR_30++ )
        if( VAR_23 & VAR_19[VAR_30] )
            VAR_27.dwChannelMask |= VAR_17[VAR_30];

    switch( VAR_22 )
    {
    case 128:
        VAR_24 = 2;

        VAR_27.dwChannelMask = VAR_8 | VAR_9;
        VAR_27.Format.wBitsPerSample = 16;
        VAR_27.Samples.wValidBitsPerSample =
            VAR_27.Format.wBitsPerSample;
        VAR_27.Format.wFormatTag = VAR_10;
        VAR_27.SubFormat = VAR_14;
        break;

    case 130:
        VAR_27.Format.wBitsPerSample = sizeof(float) * 8;
        VAR_27.Samples.wValidBitsPerSample =
            VAR_27.Format.wBitsPerSample;
        VAR_27.Format.wFormatTag = VAR_12;
        VAR_27.SubFormat = VAR_15;
        break;

    case 129:
        VAR_27.Format.wBitsPerSample = 16;
        VAR_27.Samples.wValidBitsPerSample =
            VAR_27.Format.wBitsPerSample;
        VAR_27.Format.wFormatTag = VAR_13;
        VAR_27.SubFormat = VAR_16;
        break;
    }

    VAR_27.Format.nChannels = VAR_24;
    VAR_27.Format.nSamplesPerSec = VAR_25;
    VAR_27.Format.nBlockAlign =
        VAR_27.Format.wBitsPerSample / 8 * VAR_24;
    VAR_27.Format.nAvgBytesPerSec =
        VAR_27.Format.nSamplesPerSec * VAR_27.Format.nBlockAlign;

    VAR_21->i_bytes_per_sample = VAR_27.Format.nBlockAlign;
    VAR_21->format = VAR_22;


    FUNC_6(&VAR_28, 0, sizeof(DSBUFFERDESC));
    VAR_28.dwSize = sizeof(DSBUFFERDESC);
    VAR_28.dwFlags = VAR_2
                    | VAR_3
                    | VAR_1
                    | VAR_0;


    if( VAR_24 <= 2 )
    {
        VAR_27.Format.cbSize = 0;
    }
    else
    {
        VAR_27.Format.wFormatTag = VAR_11;
        VAR_27.Format.cbSize =
            sizeof(WAVEFORMATEXTENSIBLE) - sizeof(WAVEFORMATEX);


        VAR_28.dwFlags |= VAR_4;
    }

    VAR_28.dwBufferBytes = VAR_5;
    VAR_28.lpwfxFormat = (WAVEFORMATEX *)&VAR_27;


    if ( VAR_22 == 128 )
        VAR_28.dwFlags &= ~VAR_1;

    VAR_29 = FUNC_4( VAR_21->p_dsobject, &VAR_28,
                                         &VAR_21->p_dsbuffer, ((void*)0) );
    if( FUNC_0(VAR_29) )
    {
        if( !(VAR_28.dwFlags & VAR_4) )
            return VAR_29;


        VAR_28.dwFlags &= ~VAR_4;
        VAR_29 = FUNC_4( VAR_21->p_dsobject, &VAR_28,
                                             &VAR_21->p_dsbuffer, ((void*)0) );
        if( FUNC_0(VAR_29) )
            return VAR_29;
        if( !VAR_26 )
            FUNC_7( VAR_20, "couldn't use hardware sound buffer" );
    }


    if( VAR_26 )
    {
        FUNC_3( VAR_21->p_dsbuffer );
        VAR_21->p_dsbuffer = ((void*)0);
        return VAR_6;
    }

    VAR_21->i_rate = VAR_25;
    VAR_21->i_channel_mask = VAR_27.dwChannelMask;
    VAR_21->chans_to_reorder =
        FUNC_5( VAR_17, VAR_18,
                                  VAR_27.dwChannelMask, VAR_21->chan_table );
    if( VAR_21->chans_to_reorder )
        FUNC_7( VAR_20, "channel reordering needed" );

    VAR_29 = FUNC_2( VAR_21->p_dsbuffer,
                                            &VAR_7,
                                            (void **) &VAR_21->p_notify );
    if( VAR_29 != VAR_6 )
    {
        FUNC_8( VAR_20, "Couldn't query IDirectSoundNotify" );
        VAR_21->p_notify = ((void*)0);
    }

    FUNC_1( VAR_20, VAR_21, ((void*)0) );
    return VAR_6;
}
