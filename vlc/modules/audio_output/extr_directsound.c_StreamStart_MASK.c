
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int params ;
typedef int audio_sample_format_t ;
struct TYPE_15__ {int stop; int flush; int pause; int play; int time_get; TYPE_3__* sys; } ;
typedef TYPE_2__ aout_stream_t ;
struct TYPE_16__ {void* p_dsobject; } ;
typedef TYPE_3__ aout_stream_sys_t ;
struct TYPE_18__ {int cbDirectXAudioActivationParams; int dwAudioStreamFlags; int const guidAudioSession; } ;
struct TYPE_14__ {int cbSize; int * pBlobData; } ;
struct TYPE_17__ {TYPE_1__ blob; int vt; } ;
typedef TYPE_4__ PROPVARIANT ;
typedef int HRESULT ;
typedef int GUID ;
typedef TYPE_5__ DIRECTX_AUDIO_ACTIVATION_PARAMS ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_2 (int ,TYPE_3__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_4 (TYPE_2__*,int *,TYPE_4__*,void**) ;
 TYPE_3__* FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static HRESULT FUNC_8( aout_stream_t *VAR_9,
                            audio_sample_format_t *restrict VAR_10,
                            const GUID *VAR_11 )
{
    aout_stream_sys_t *VAR_12 = FUNC_5( 1, sizeof( *VAR_12 ) );
    if( FUNC_7(VAR_12 == ((void*)0)) )
        return VAR_0;

    void *VAR_13;
    HRESULT VAR_14;
    if( VAR_11 )
    {
        DIRECTX_AUDIO_ACTIVATION_PARAMS VAR_15 = {
            .cbDirectXAudioActivationParams = sizeof( VAR_15 ),
            .guidAudioSession = *VAR_11,
            .dwAudioStreamFlags = 0,
        };
        PROPVARIANT VAR_16;

        FUNC_1( &VAR_16 );
        VAR_16.vt = VAR_8;
        VAR_16.blob.cbSize = sizeof( VAR_15 );
        VAR_16.blob.pBlobData = (BYTE *)&VAR_15;

        VAR_14 = FUNC_4( VAR_9, &VAR_1, &VAR_16, &VAR_13 );
    }
    else
        VAR_14 = FUNC_4( VAR_9, &VAR_1, ((void*)0), &VAR_13 );
    if( FUNC_0(VAR_14) )
        goto error;

    VAR_12->p_dsobject = VAR_13;

    VAR_14 = FUNC_2( FUNC_3(VAR_9), VAR_12, VAR_10 );
    if( FUNC_0(VAR_14) )
        goto error;

    VAR_9->sys = VAR_12;
    VAR_9->time_get = VAR_7;
    VAR_9->play = VAR_5;
    VAR_9->pause = VAR_4;
    VAR_9->flush = VAR_3;
    VAR_9->stop = VAR_6;
    return VAR_2;
error:
    FUNC_6( VAR_12 );
    return VAR_14;
}
