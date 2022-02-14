
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {TYPE_4__* sys; } ;
typedef TYPE_3__ audio_output_t ;
struct TYPE_19__ {int i_write_type; int b_error; int i_samples_written; } ;
typedef TYPE_4__ aout_sys_t ;
struct TYPE_17__ {int ERROR_INVALID_OPERATION; int ERROR_BAD_VALUE; } ;
struct TYPE_16__ {int ERROR_DEAD_OBJECT; scalar_t__ has_ERROR_DEAD_OBJECT; } ;
struct TYPE_20__ {TYPE_2__ AudioTrack; TYPE_1__ AudioManager; } ;
typedef int JNIEnv ;


 int FUNC_0 (int *,TYPE_3__*,size_t,size_t,int) ;
 int FUNC_1 (int *,TYPE_3__*,size_t,size_t) ;
 int FUNC_2 (int *,TYPE_3__*,size_t,size_t) ;
 int FUNC_3 (int *,TYPE_3__*,size_t,size_t) ;
 int FUNC_4 (int *,TYPE_3__*,size_t,size_t) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;





 TYPE_7__ VAR_0 ;
 int FUNC_10 (TYPE_3__*,char*,char const*) ;
 int FUNC_11 (TYPE_3__*,char*) ;
 int VAR_1 ;
 int FUNC_12 () ;

__attribute__((used)) static int
FUNC_13( JNIEnv *VAR_2, audio_output_t *VAR_3, size_t VAR_4,
                 size_t VAR_5, bool VAR_6 )
{
    aout_sys_t *VAR_7 = VAR_3->sys;
    int VAR_8;

    switch( VAR_7->i_write_type )
    {
    case 131:
        VAR_8 = FUNC_1( VAR_2, VAR_3, VAR_4,
                                             VAR_5 );
        break;
    case 130:
        VAR_8 = FUNC_2( VAR_2, VAR_3, VAR_4,
                                           VAR_5 );
        break;
    case 128:
        VAR_8 = FUNC_4( VAR_2, VAR_3, VAR_4,
                                              VAR_5 );
        break;
    case 132:
        VAR_8 = FUNC_0( VAR_2, VAR_3, VAR_4,
                                          VAR_5, VAR_6 );
        break;
    case 129:
        VAR_8 = FUNC_3( VAR_2, VAR_3, VAR_4,
                                           VAR_5 );
        break;
    default:
        FUNC_12();
    }

    if( VAR_8 < 0 ) {
        if( VAR_0.AudioManager.has_ERROR_DEAD_OBJECT
            && VAR_8 == VAR_0.AudioManager.ERROR_DEAD_OBJECT )
        {
            FUNC_11( VAR_3, "ERROR_DEAD_OBJECT: "
                              "try recreating AudioTrack" );
            if( ( VAR_8 = FUNC_5( VAR_2, VAR_3 ) ) == 0 )
            {
                FUNC_6( VAR_2, VAR_3 );
                FUNC_9( VAR_1 );
                FUNC_8( "play" );
            }
        } else
        {
            const char *VAR_9;
            if( VAR_8 == VAR_0.AudioTrack.ERROR_INVALID_OPERATION )
                VAR_9 = "ERROR_INVALID_OPERATION";
            else if( VAR_8 == VAR_0.AudioTrack.ERROR_BAD_VALUE )
                VAR_9 = "ERROR_BAD_VALUE";
            else
                VAR_9 = "ERROR";
            FUNC_10( VAR_3, "Write failed: %s", VAR_9 );
            VAR_7->b_error = 1;
        }
    } else
        VAR_7->i_samples_written += FUNC_7( VAR_8 );
    return VAR_8;
}
