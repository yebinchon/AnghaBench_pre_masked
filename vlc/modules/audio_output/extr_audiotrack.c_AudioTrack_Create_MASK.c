
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_11__ {TYPE_4__* sys; } ;
typedef TYPE_3__ audio_output_t ;
struct TYPE_10__ {unsigned int i_rate; int i_channel_config; int i_format; int i_size; } ;
struct TYPE_12__ {TYPE_2__ audiotrack_args; } ;
typedef TYPE_4__ aout_sys_t ;
struct TYPE_9__ {int CHANNEL_OUT_5POINT1; int CHANNEL_OUT_SIDE_LEFT; int CHANNEL_OUT_SIDE_RIGHT; int CHANNEL_OUT_MONO; int CHANNEL_OUT_STEREO; } ;
struct TYPE_13__ {TYPE_1__ AudioFormat; } ;
typedef int JNIEnv ;






 scalar_t__ FUNC_0 (int *,TYPE_3__*,unsigned int,int,int,int) ;
 int FUNC_1 (int ,unsigned int,int,int) ;
 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4( JNIEnv *VAR_2, audio_output_t *VAR_3,
                   unsigned int VAR_4,
                   int VAR_5,
                   uint16_t VAR_6 )
{
    aout_sys_t *VAR_7 = VAR_3->sys;
    int VAR_8, VAR_9, VAR_10;

    switch( VAR_6 )
    {
        case 130:


            VAR_10 = VAR_1.AudioFormat.CHANNEL_OUT_5POINT1 |
                               VAR_1.AudioFormat.CHANNEL_OUT_SIDE_LEFT |
                               VAR_1.AudioFormat.CHANNEL_OUT_SIDE_RIGHT;
            break;
        case 131:
            VAR_10 = VAR_1.AudioFormat.CHANNEL_OUT_5POINT1;
            break;
        case 128:
            VAR_10 = VAR_1.AudioFormat.CHANNEL_OUT_MONO;
            break;
        case 129:
            VAR_10 = VAR_1.AudioFormat.CHANNEL_OUT_STEREO;
            break;
        default:
            FUNC_3();
    }

    VAR_9 = FUNC_1( VAR_0, VAR_4,
                                                VAR_10, VAR_5 );
    if( VAR_9 <= 0 )
    {
        FUNC_2( VAR_3, "getMinBufferSize returned an invalid size" ) ;
        return -1;
    }
    VAR_8 = VAR_9 * 2;


    if( FUNC_0( VAR_2, VAR_3, VAR_4, VAR_10,
                        VAR_5 , VAR_8 ) != 0 )
        return -1;

    VAR_7->audiotrack_args.i_rate = VAR_4;
    VAR_7->audiotrack_args.i_channel_config = VAR_10;
    VAR_7->audiotrack_args.i_format = VAR_5;
    VAR_7->audiotrack_args.i_size = VAR_8;

    return 0;
}
