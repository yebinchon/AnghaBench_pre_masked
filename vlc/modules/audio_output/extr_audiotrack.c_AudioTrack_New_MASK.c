
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


typedef int jobject ;
typedef int jint ;
struct TYPE_20__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_21__ {int p_audiotrack; } ;
typedef TYPE_3__ aout_sys_t ;
struct TYPE_22__ {int (* DeleteLocalRef ) (TYPE_4__**,int ) ;int (* NewGlobalRef ) (TYPE_4__**,int ) ;} ;
struct TYPE_19__ {scalar_t__ STATE_INITIALIZED; int release; int getState; scalar_t__ has_ctor_21; } ;
struct TYPE_18__ {TYPE_1__ AudioTrack; } ;
typedef TYPE_4__* JNIEnv ;


 int FUNC_0 (TYPE_4__**,TYPE_2__*,unsigned int,int,int,int,int ) ;
 int FUNC_1 (TYPE_4__**,TYPE_2__*,unsigned int,int,int,int,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_11__ VAR_0 ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_4__**,int ) ;
 int FUNC_8 (TYPE_4__**,int ) ;
 int FUNC_9 (TYPE_4__**,int ) ;
 int FUNC_10 (TYPE_2__*,char*) ;

__attribute__((used)) static int
FUNC_11( JNIEnv *VAR_1, audio_output_t *VAR_2, unsigned int VAR_3,
                int VAR_4, int VAR_5, int VAR_6 )
{
    aout_sys_t *VAR_7 = VAR_2->sys;
    jint VAR_8 = FUNC_10( VAR_2, "audiotrack-session-id" );

    jobject VAR_9;
    if( VAR_0.AudioTrack.has_ctor_21 )
        VAR_9 = FUNC_0( VAR_1, VAR_2, VAR_3, VAR_4,
                                         VAR_5, VAR_6, VAR_8 );
    else
        VAR_9 = FUNC_1( VAR_1, VAR_2, VAR_3,
                                             VAR_4, VAR_5, VAR_6,
                                             VAR_8 );
    if( FUNC_2( "AudioTrack<init>" ) || !VAR_9 )
    {
        FUNC_6( VAR_2, "AudioTrack Init failed" );
        return -1;
    }
    if( FUNC_3( VAR_9, VAR_0.AudioTrack.getState )
        != VAR_0.AudioTrack.STATE_INITIALIZED )
    {
        FUNC_4( VAR_9, VAR_0.AudioTrack.release );
        (*VAR_1)->DeleteLocalRef( VAR_1, VAR_9 );
        FUNC_5( VAR_2, "AudioTrack getState failed" );
        return -1;
    }

    VAR_7->p_audiotrack = (*VAR_1)->NewGlobalRef( VAR_1, VAR_9 );
    (*VAR_1)->DeleteLocalRef( VAR_1, VAR_9 );
    if( !VAR_7->p_audiotrack )
        return -1;

    return 0;
}
