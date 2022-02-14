
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_11__ {int channel_type; int i_rate; void* i_physical_channels; int i_format; int i_frame_length; int i_bytes_per_frame; } ;
typedef TYPE_1__ audio_sample_format_t ;
struct TYPE_12__ {int b_playing; int * p_dsobject; int * p_dsbuffer; int * p_notify; int lock; int cond; scalar_t__ i_data; scalar_t__ i_last_read; scalar_t__ i_write; int eraser_thread; } ;
typedef TYPE_2__ aout_stream_sys_t ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*,int ,void*,int,int ,int) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*,int *,void*,int ,int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;




 int FUNC_4 (int) ;




 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *,char*,...) ;
 int FUNC_16 (int *,char*,...) ;
 int FUNC_17 (int *,char*) ;
 char** VAR_18 ;
 int FUNC_18 (char const* const) ;
 int FUNC_19 (char const* const,char*,int ) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (int *,char*,int) ;
 char* FUNC_22 (int *,char*) ;
 scalar_t__ FUNC_23 (int *,char*) ;
 int FUNC_24 (int *,int ,void*,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static HRESULT FUNC_29( vlc_object_t *VAR_19, aout_stream_sys_t *VAR_20,
                      audio_sample_format_t *restrict VAR_21 )
{
    if( FUNC_12( VAR_21 ) == 0 )
        return VAR_12;
    if( FUNC_11( VAR_20->p_dsobject, FUNC_6(),
                                          VAR_9) )
        FUNC_17( VAR_19, "cannot set direct sound cooperative level" );


    if( FUNC_0( VAR_21 ) )
        return VAR_12;

    audio_sample_format_t VAR_22 = *VAR_21;
    const char *const *VAR_23 = VAR_18;
    char *VAR_24;
    int VAR_25 = 0;
    HRESULT VAR_26 = VAR_8;


    FUNC_21( VAR_19, "directx-audio-float32",
                VAR_16 | VAR_17 );
    VAR_24 = FUNC_22( VAR_19, "directx-audio-speaker" );

    while ( *VAR_23 != ((void*)0) )
    {
        if ( !FUNC_19( *VAR_23, VAR_24, FUNC_18(*VAR_23) ) )
        {
            break;
        }
        VAR_23++; VAR_25++;
    }

    if ( *VAR_23 == ((void*)0) )
    {
        FUNC_16( VAR_19, "(%s) isn't valid speaker setup option", VAR_24 );
        FUNC_16( VAR_19, "Defaulting to Windows default speaker config");
        VAR_25 = 0;
    }
    FUNC_14( VAR_24 );

    FUNC_28(&VAR_20->lock);
    FUNC_26(&VAR_20->cond);

    if( FUNC_1( &VAR_22 ) )
    {
        if( FUNC_23( VAR_19, "spdif" ) )
            VAR_26 = FUNC_2( VAR_19, VAR_20, VAR_14,
                                 VAR_22.i_physical_channels,
                                 FUNC_12(&VAR_22), VAR_22.i_rate, 0 );

        if( VAR_26 == VAR_10 )
        {
            FUNC_15( VAR_19, "using A/52 pass-through over S/PDIF" );
            VAR_22.i_format = VAR_14;


            VAR_22.i_bytes_per_frame = VAR_6;
            VAR_22.i_frame_length = VAR_0;
        }
        else
        {
            FUNC_27(&VAR_20->lock);
            FUNC_25(&VAR_20->cond);
            return VAR_12;
        }
    }

    if( VAR_26 != VAR_10 )
    {
        if( VAR_25 == 0 )
        {
            DWORD VAR_27;
            int VAR_28 = 2;
            int VAR_29 = FUNC_12( &VAR_22 );



            VAR_26 = FUNC_9( VAR_20->p_dsobject,
                                                &VAR_27 );
            if( FUNC_5(VAR_26) )
            {
                VAR_27 = 129;
                FUNC_15( VAR_19, "GetSpeakerConfig failed" );
            }

            const char *VAR_30 = "Unknown";
            switch( FUNC_4(VAR_27) )
            {
                case 133:
                case 132:
                    VAR_30 = "7.1";
                    VAR_28 = 8;
                    break;
                case 135:
                case 134:
                    VAR_30 = "5.1";
                    VAR_28 = 6;
                    break;
                case 130:
                    VAR_30 = "Quad";
                    VAR_28 = 4;
                    break;







                case 128:
                    VAR_30 = "Surround";
                    VAR_28 = 4;
                    break;
                case 129:
                    VAR_30 = "Stereo";
                    VAR_28 = 2;
                    break;
            }

            if( VAR_28 >= VAR_29 )
                VAR_28 = VAR_29;

            FUNC_15( VAR_19, "%s speaker config: %s and stream has "
                     "%d channels, using %d channels", "Windows", VAR_30,
                     VAR_29, VAR_28 );

            switch( VAR_28 )
            {
                case 8:
                    VAR_22.i_physical_channels = VAR_4;
                    break;
                case 7:
                case 6:
                    VAR_22.i_physical_channels = VAR_3;
                    break;
                case 5:
                case 4:
                    VAR_22.i_physical_channels = VAR_2;
                    break;
                default:
                    VAR_22.i_physical_channels = VAR_1;
                    break;
            }
        }
        else
        {
            const char *VAR_31 = "Non-existant";
            switch( VAR_25 )
            {
                case 1:
                    VAR_31 = "Mono";
                    VAR_22.i_physical_channels = VAR_5;
                    break;
                case 2:
                    VAR_31 = "Stereo";
                    VAR_22.i_physical_channels = VAR_1;
                    break;
                case 3:
                    VAR_31 = "Quad";
                    VAR_22.i_physical_channels = VAR_2;
                    break;
                case 4:
                    VAR_31 = "5.1";
                    VAR_22.i_physical_channels = VAR_3;
                    break;
                case 5:
                    VAR_31 = "7.1";
                    VAR_22.i_physical_channels = VAR_4;
                    break;
            }
            FUNC_15( VAR_19, "%s speaker config: %s", "VLC", VAR_31 );
        }


        FUNC_13( &VAR_22 );

        VAR_26 = FUNC_3( VAR_19, VAR_20, &VAR_22.i_format,
                                VAR_22.i_physical_channels, VAR_22.i_rate, 0 );
        if( VAR_26 != VAR_10 )
        {
            FUNC_16( VAR_19, "cannot open directx audio device" );
            goto error;
        }
    }

    int VAR_32 = FUNC_24(&VAR_20->eraser_thread, VAR_13, (void*) VAR_19,
                        VAR_15);
    if( FUNC_20( VAR_32 ) )
    {
        if( VAR_32 != VAR_11 )
            FUNC_16( VAR_19, "Couldn't start eraser thread" );

        VAR_26 = VAR_12;
        goto error;
    }

    VAR_22.channel_type = VAR_7;

    *VAR_21 = VAR_22;
    VAR_20->b_playing = 0;
    VAR_20->i_write = 0;
    VAR_20->i_last_read = 0;
    VAR_20->i_data = 0;

    return VAR_10;

error:
    FUNC_25(&VAR_20->cond);
    FUNC_27(&VAR_20->lock);

    if( VAR_20->p_notify != ((void*)0) )
    {
        FUNC_8( VAR_20->p_notify );
        VAR_20->p_notify = ((void*)0);
    }
    if( VAR_20->p_dsbuffer != ((void*)0) )
    {
        FUNC_7( VAR_20->p_dsbuffer );
        VAR_20->p_dsbuffer = ((void*)0);
    }
    FUNC_10( VAR_20->p_dsobject );
    VAR_20->p_dsobject = ((void*)0);
    return VAR_26;
}
