
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int p_chans_out ;
struct TYPE_16__ {TYPE_5__* sys; } ;
typedef TYPE_4__ audio_output_t ;
struct TYPE_19__ {int i_format; int i_physical_channels; int i_rate; } ;
struct TYPE_17__ {TYPE_8__ fmt; int p_chan_table; int i_chans_to_reorder; } ;
typedef TYPE_5__ aout_sys_t ;
struct TYPE_15__ {int ENCODING_PCM_8BIT; int ENCODING_PCM_16BIT; int ENCODING_PCM_FLOAT; scalar_t__ has_CHANNEL_OUT_SIDE; int has_ENCODING_PCM_FLOAT; } ;
struct TYPE_14__ {int STREAM_MUSIC; } ;
struct TYPE_13__ {scalar_t__ getNativeOutputSampleRate; } ;
struct TYPE_18__ {TYPE_3__ AudioFormat; TYPE_2__ AudioManager; TYPE_1__ AudioTrack; } ;
typedef int JNIEnv ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int *,TYPE_4__*,int ,int,int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int) ;



 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (int *,int *,int,int ) ;
 unsigned int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_8__*) ;
 int VAR_7 ;
 TYPE_7__ VAR_8 ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (TYPE_4__*,char*) ;

__attribute__((used)) static int
FUNC_11( JNIEnv *VAR_9, audio_output_t *VAR_10, unsigned VAR_11 )
{
    aout_sys_t *VAR_12 = VAR_10->sys;
    unsigned VAR_13;
    int VAR_14, VAR_15;

    if (VAR_8.AudioTrack.getNativeOutputSampleRate)
        VAR_12->fmt.i_rate =
            FUNC_3( VAR_7,
                                    VAR_8.AudioManager.STREAM_MUSIC );
    else
        VAR_12->fmt.i_rate = FUNC_4( VAR_12->fmt.i_rate, 4000, 48000 );

    do
    {

        switch( VAR_12->fmt.i_format )
        {
        case 128:
            VAR_14 = VAR_8.AudioFormat.ENCODING_PCM_8BIT;
            break;
        case 129:
            VAR_14 = VAR_8.AudioFormat.ENCODING_PCM_16BIT;
            break;
        case 130:
            if( VAR_8.AudioFormat.has_ENCODING_PCM_FLOAT )
                VAR_14 = VAR_8.AudioFormat.ENCODING_PCM_FLOAT;
            else
            {
                VAR_12->fmt.i_format = 129;
                VAR_14 = VAR_8.AudioFormat.ENCODING_PCM_16BIT;
            }
            break;
        default:
            VAR_12->fmt.i_format = 129;
            VAR_14 = VAR_8.AudioFormat.ENCODING_PCM_16BIT;
            break;
        }





        VAR_13 = FUNC_7( &VAR_12->fmt );
        if( VAR_13 == 0 )
            return VAR_5;
        if( FUNC_0( &VAR_12->fmt ) )
            VAR_13 = FUNC_5( VAR_11, VAR_13 );
        if( VAR_13 > 5 )
        {
            if( VAR_13 > 7 && VAR_8.AudioFormat.has_CHANNEL_OUT_SIDE )
                VAR_12->fmt.i_physical_channels = VAR_1;
            else
                VAR_12->fmt.i_physical_channels = VAR_0;
        } else
        {
            if( VAR_13 == 1 )
                VAR_12->fmt.i_physical_channels = VAR_3;
            else
                VAR_12->fmt.i_physical_channels = VAR_2;
        }





        VAR_15 = FUNC_1( VAR_9, VAR_10, VAR_12->fmt.i_rate, VAR_14,
                                   VAR_12->fmt.i_physical_channels );
        if( VAR_15 != 0 )
        {
            if( VAR_12->fmt.i_format == 130 )
            {
                FUNC_10( VAR_10, "FL32 configuration failed, "
                                  "fallback to S16N PCM" );
                VAR_12->fmt.i_format = 129;
            }
            else if( VAR_12->fmt.i_physical_channels & VAR_0 )
            {
                FUNC_10( VAR_10, "5.1 or 7.1 configuration failed, "
                                  "fallback to Stereo" );
                VAR_12->fmt.i_physical_channels = VAR_2;
            }
            else
                break;
        }
    } while( VAR_15 != 0 );

    if( VAR_15 != VAR_6 )
        return VAR_15;

    uint32_t VAR_16[VAR_4];
    FUNC_9( VAR_16, 0, sizeof(VAR_16) );
    FUNC_2( VAR_12->fmt.i_physical_channels, VAR_16 );
    VAR_12->i_chans_to_reorder =
        FUNC_6( ((void*)0), VAR_16,
                                  VAR_12->fmt.i_physical_channels,
                                  VAR_12->p_chan_table );
    FUNC_8( &VAR_12->fmt );
    return VAR_6;
}
