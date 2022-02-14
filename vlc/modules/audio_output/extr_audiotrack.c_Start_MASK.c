
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_57__ TYPE_9__ ;
typedef struct TYPE_56__ TYPE_8__ ;
typedef struct TYPE_55__ TYPE_7__ ;
typedef struct TYPE_54__ TYPE_6__ ;
typedef struct TYPE_53__ TYPE_5__ ;
typedef struct TYPE_52__ TYPE_4__ ;
typedef struct TYPE_51__ TYPE_3__ ;
typedef struct TYPE_50__ TYPE_30__ ;
typedef struct TYPE_49__ TYPE_2__ ;
typedef struct TYPE_48__ TYPE_1__ ;
typedef struct TYPE_47__ TYPE_12__ ;
typedef struct TYPE_46__ TYPE_11__ ;
typedef struct TYPE_45__ TYPE_10__ ;


typedef scalar_t__ jshortArray ;
typedef scalar_t__ jobject ;
typedef scalar_t__ jfloatArray ;
typedef scalar_t__ jbyteArray ;
struct TYPE_57__ {scalar_t__ channel_type; scalar_t__ i_format; int i_bytes_per_frame; int i_frame_length; scalar_t__ i_rate; int i_physical_channels; } ;
typedef TYPE_9__ audio_sample_format_t ;
struct TYPE_45__ {int (* mute_set ) (TYPE_10__*,int) ;int (* volume_set ) (TYPE_10__*,int ) ;TYPE_11__* sys; } ;
typedef TYPE_10__ audio_output_t ;
struct TYPE_48__ {int p_data; } ;
struct TYPE_55__ {TYPE_1__ bytebuffer; int p_floatarray; int p_shortarray; int p_bytearray; } ;
struct TYPE_56__ {int i_size; TYPE_7__ u; scalar_t__ i_write; scalar_t__ i_read; } ;
struct TYPE_52__ {int p_obj; } ;
struct TYPE_49__ {int i_size; } ;
struct TYPE_46__ {scalar_t__ at_dev; int i_write_type; int b_thread_running; int b_thread_paused; TYPE_9__ fmt; scalar_t__ mute; int volume; int thread; TYPE_8__ circular; TYPE_4__ timestamp; TYPE_2__ audiotrack_args; int i_max_audiotrack_samples; } ;
typedef TYPE_11__ aout_sys_t ;
struct TYPE_54__ {scalar_t__ writeBufferV21; scalar_t__ writeV23; } ;
struct TYPE_53__ {int has_ENCODING_IEC61937; } ;
struct TYPE_51__ {int ctor; scalar_t__ clazz; } ;
struct TYPE_50__ {TYPE_6__ AudioTrack; TYPE_5__ AudioFormat; TYPE_3__ AudioTimestamp; } ;
struct TYPE_47__ {int (* DeleteLocalRef ) (TYPE_12__**,scalar_t__) ;int (* NewGlobalRef ) (TYPE_12__**,scalar_t__) ;scalar_t__ (* NewFloatArray ) (TYPE_12__**,int) ;scalar_t__ (* NewShortArray ) (TYPE_12__**,int) ;scalar_t__ (* NewByteArray ) (TYPE_12__**,int) ;} ;
typedef TYPE_12__* JNIEnv ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_9__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_12__**,TYPE_10__*) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 TYPE_12__** FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int ) ;
 int VAR_8 ;
 int FUNC_7 (TYPE_12__**,TYPE_10__*,unsigned int) ;
 int FUNC_8 (TYPE_12__**,TYPE_10__*) ;
 int FUNC_9 (TYPE_10__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;





 int FUNC_10 (TYPE_9__*) ;
 int FUNC_11 (TYPE_10__*,char*,TYPE_9__*) ;
 int FUNC_12 (int ) ;
 TYPE_30__ VAR_14 ;
 int FUNC_13 (int) ;
 int FUNC_14 (TYPE_10__*,char*) ;
 int FUNC_15 (TYPE_10__*,char*) ;
 int VAR_15 ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (TYPE_12__**,scalar_t__) ;
 int FUNC_18 (TYPE_12__**,scalar_t__) ;
 int FUNC_19 (TYPE_12__**,scalar_t__) ;
 int FUNC_20 (TYPE_10__*,int ) ;
 int FUNC_21 (TYPE_10__*,int) ;
 int FUNC_22 (TYPE_12__**,scalar_t__) ;
 scalar_t__ FUNC_23 (TYPE_12__**,int) ;
 int FUNC_24 (TYPE_12__**,scalar_t__) ;
 int FUNC_25 (TYPE_12__**,scalar_t__) ;
 scalar_t__ FUNC_26 (TYPE_12__**,int) ;
 int FUNC_27 (TYPE_12__**,scalar_t__) ;
 int FUNC_28 (TYPE_12__**,scalar_t__) ;
 scalar_t__ FUNC_29 (TYPE_12__**,int) ;
 int FUNC_30 (TYPE_10__*,char*) ;
 scalar_t__ FUNC_31 (int *,int ,TYPE_10__*,int ) ;

__attribute__((used)) static int
FUNC_32( audio_output_t *VAR_16, audio_sample_format_t *restrict VAR_17 )
{
    aout_sys_t *VAR_18 = VAR_16->sys;
    JNIEnv *VAR_19;
    int VAR_20;
    bool VAR_21;
    unsigned VAR_22;

    if( VAR_18->at_dev == VAR_2 )
    {
        VAR_21 = 1;
        VAR_22 = VAR_3;
    }
    else
    {
        VAR_21 = FUNC_30( VAR_16, "spdif" );
        VAR_22 = VAR_18->at_dev == VAR_4 ? 2 : VAR_3;
    }

    if( !( VAR_19 = FUNC_4() ) )
        return VAR_11;

    VAR_18->fmt = *VAR_17;

    FUNC_11( VAR_16, "VLC is looking for:", &VAR_18->fmt );

    bool VAR_23 = 0;
    if (VAR_18->fmt.channel_type == VAR_5)
    {
        VAR_18->fmt.channel_type = VAR_6;


        VAR_18->fmt.i_physical_channels = VAR_0;
        FUNC_10(&VAR_18->fmt);
        VAR_23 = 1;
    }

    if( FUNC_0( &VAR_18->fmt ) )
        VAR_20 = FUNC_7( VAR_19, VAR_16, VAR_22 );
    else if( VAR_21 )
        VAR_20 = FUNC_8( VAR_19, VAR_16 );
    else
        return VAR_11;

    if( VAR_20 != 0 )
        return VAR_11;

    VAR_18->i_max_audiotrack_samples = FUNC_2( VAR_18->audiotrack_args.i_size );
    FUNC_1( VAR_19, VAR_16 );

    if( VAR_18->fmt.i_format == VAR_9 )
    {
        FUNC_14( VAR_16, "using WRITE_FLOATARRAY");
        VAR_18->i_write_type = 129;
    }
    else if( VAR_18->fmt.i_format == VAR_10 )
    {
        FUNC_12( VAR_14.AudioFormat.has_ENCODING_IEC61937 );
        FUNC_14( VAR_16, "using WRITE_SHORTARRAYV23");
        VAR_18->i_write_type = 128;
    }
    else if( VAR_14.AudioTrack.writeV23 )
    {
        FUNC_14( VAR_16, "using WRITE_BYTEARRAYV23");
        VAR_18->i_write_type = 131;
    }
    else if( VAR_14.AudioTrack.writeBufferV21 )
    {
        FUNC_14( VAR_16, "using WRITE_BYTEBUFFER");
        VAR_18->i_write_type = 130;
    }
    else
    {
        FUNC_14( VAR_16, "using WRITE_BYTEARRAY");
        VAR_18->i_write_type = 132;
    }

    VAR_18->circular.i_read = VAR_18->circular.i_write = 0;
    VAR_18->circular.i_size = (int)VAR_18->fmt.i_rate
                           * VAR_18->fmt.i_bytes_per_frame
                           / VAR_18->fmt.i_frame_length;
    if (VAR_23)
    {

        VAR_18->circular.i_size = VAR_18->circular.i_size / 25;
    }
    else
    {

        VAR_18->circular.i_size = FUNC_16(VAR_1, VAR_18->circular.i_size);
    }


    switch( VAR_18->i_write_type )
    {
        case 132:
        case 131:
        {
            jbyteArray VAR_24;

            VAR_24 = (*VAR_19)->NewByteArray( VAR_19, VAR_18->circular.i_size );
            if( VAR_24 )
            {
                VAR_18->circular.u.p_bytearray = (*VAR_19)->NewGlobalRef( VAR_19, VAR_24 );
                (*VAR_19)->DeleteLocalRef( VAR_19, VAR_24 );
            }

            if( !VAR_18->circular.u.p_bytearray )
            {
                FUNC_15(VAR_16, "byte array allocation failed");
                goto error;
            }
            break;
        }
        case 128:
        {
            jshortArray VAR_25;

            VAR_25 = (*VAR_19)->NewShortArray( VAR_19,
                                                  VAR_18->circular.i_size / 2 );
            if( VAR_25 )
            {
                VAR_18->circular.u.p_shortarray = (*VAR_19)->NewGlobalRef( VAR_19, VAR_25 );
                (*VAR_19)->DeleteLocalRef( VAR_19, VAR_25 );
            }
            if( !VAR_18->circular.u.p_shortarray )
            {
                FUNC_15(VAR_16, "short array allocation failed");
                goto error;
            }
            break;
        }
        case 129:
        {
            jfloatArray VAR_26;

            VAR_26 = (*VAR_19)->NewFloatArray( VAR_19,
                                                  VAR_18->circular.i_size / 4 );
            if( VAR_26 )
            {
                VAR_18->circular.u.p_floatarray = (*VAR_19)->NewGlobalRef( VAR_19, VAR_26 );
                (*VAR_19)->DeleteLocalRef( VAR_19, VAR_26 );
            }
            if( !VAR_18->circular.u.p_floatarray )
            {
                FUNC_15(VAR_16, "float array allocation failed");
                goto error;
            }
            break;
        }
        case 130:
            VAR_18->circular.u.bytebuffer.p_data = FUNC_13( VAR_18->circular.i_size );
            if( !VAR_18->circular.u.bytebuffer.p_data )
            {
                FUNC_15(VAR_16, "bytebuffer allocation failed");
                goto error;
            }
            break;
    }


    VAR_18->b_thread_running = 1;
    VAR_18->b_thread_paused = 0;
    if ( FUNC_31( &VAR_18->thread, VAR_7, VAR_16,
                    VAR_13 ) )
    {
        FUNC_15(VAR_16, "vlc clone failed");
        goto error;
    }

    FUNC_5( VAR_15 );
    FUNC_3( "play" );

    *VAR_17 = VAR_18->fmt;

    VAR_16->volume_set(VAR_16, VAR_18->volume);
    if (VAR_18->mute)
        VAR_16->mute_set(VAR_16, 1);
    FUNC_11( VAR_16, "VLC will output:", &VAR_18->fmt );

    return VAR_12;

error:
    FUNC_9( VAR_16 );
    return VAR_11;
}
