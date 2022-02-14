
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_14__ {int i_format; int i_rate; int i_bytes_per_frame; int i_frame_length; int i_channels; void* i_physical_channels; } ;
struct TYPE_12__ {int b_passthrough; scalar_t__ i_chans_to_reorder; TYPE_6__ fmt; } ;
typedef TYPE_3__ aout_sys_t ;
struct TYPE_10__ {int ENCODING_IEC61937; int ENCODING_AC3; int ENCODING_E_AC3; int ENCODING_DTS; int has_ENCODING_DTS; int has_ENCODING_E_AC3; int has_ENCODING_AC3; scalar_t__ has_ENCODING_IEC61937; } ;
struct TYPE_13__ {TYPE_1__ AudioFormat; } ;
typedef int JNIEnv ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int,int,void*) ;
 int FUNC_1 (TYPE_2__*,int) ;





 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_5__ VAR_6 ;
 int FUNC_3 (TYPE_2__*,char*) ;

__attribute__((used)) static int
FUNC_4( JNIEnv *VAR_7, audio_output_t *VAR_8 )
{
    aout_sys_t *VAR_9 = VAR_8->sys;
    int VAR_10;

    if( !FUNC_1( VAR_8, VAR_9->fmt.i_format ) )
        return VAR_4;

    if( VAR_6.AudioFormat.has_ENCODING_IEC61937 )
    {
        VAR_10 = VAR_6.AudioFormat.ENCODING_IEC61937;
        switch( VAR_9->fmt.i_format )
        {
            case 128:
            case 129:
                VAR_9->fmt.i_rate = 192000;
                VAR_9->fmt.i_bytes_per_frame = 16;




                VAR_9->fmt.i_physical_channels = VAR_0;
                break;
            case 132:
                VAR_9->fmt.i_bytes_per_frame = 4;
                VAR_9->fmt.i_physical_channels = VAR_1;
                break;
            case 131:
                VAR_9->fmt.i_bytes_per_frame = 4;
                VAR_9->fmt.i_physical_channels = VAR_1;
                VAR_9->fmt.i_rate = 192000;
                VAR_9->fmt.i_bytes_per_frame = 16;
                break;
            case 130:
                VAR_9->fmt.i_rate = 192000;
            case 133:
                VAR_9->fmt.i_physical_channels = VAR_1;
                VAR_9->fmt.i_bytes_per_frame = 4;
                break;
            default:
                return VAR_4;
        }
        VAR_9->fmt.i_frame_length = 1;
        VAR_9->fmt.i_channels = FUNC_2( &VAR_9->fmt );
        VAR_9->fmt.i_format = VAR_3;
    }
    else
    {
        switch( VAR_9->fmt.i_format )
        {
            case 133:
                if( !VAR_6.AudioFormat.has_ENCODING_AC3 )
                    return VAR_4;
                VAR_10 = VAR_6.AudioFormat.ENCODING_AC3;
                break;
            case 130:
                if( !VAR_6.AudioFormat.has_ENCODING_E_AC3 )
                    return VAR_4;
                VAR_10 = VAR_6.AudioFormat.ENCODING_E_AC3;
                break;
            case 132:
                if( !VAR_6.AudioFormat.has_ENCODING_DTS )
                    return VAR_4;
                VAR_10 = VAR_6.AudioFormat.ENCODING_DTS;
                break;
            default:
                return VAR_4;
        }
        VAR_9->fmt.i_bytes_per_frame = 4;
        VAR_9->fmt.i_frame_length = 1;
        VAR_9->fmt.i_physical_channels = VAR_1;
        VAR_9->fmt.i_channels = 2;
        VAR_9->fmt.i_format = VAR_2;
    }

    int VAR_11 = FUNC_0( VAR_7, VAR_8, VAR_9->fmt.i_rate, VAR_10,
                                   VAR_9->fmt.i_physical_channels );
    if( VAR_11 != VAR_5 )
        FUNC_3( VAR_8, "SPDIF configuration failed" );
    else
    {
        VAR_9->b_passthrough = 1;
        VAR_9->i_chans_to_reorder = 0;
    }

    return VAR_11;
}
