
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;


typedef int * jobject ;
typedef int jint ;
typedef int audio_output_t ;
struct TYPE_24__ {int (* DeleteLocalRef ) (TYPE_5__**,int *) ;} ;
struct TYPE_23__ {int MODE_STREAM; } ;
struct TYPE_22__ {int build; int setSampleRate; int setEncoding; int setChannelMask; int ctor; int clazz; } ;
struct TYPE_21__ {int build; int setLegacyStreamType; int ctor; int clazz; } ;
struct TYPE_20__ {int STREAM_MUSIC; } ;
struct TYPE_19__ {TYPE_4__ AudioTrack; TYPE_3__ AudioFormat_Builder; TYPE_2__ AudioAttributes_Builder; TYPE_1__ AudioManager; } ;
typedef TYPE_5__* JNIEnv ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int * FUNC_1 (int *,int *,int,int ,int ) ;
 int * FUNC_2 (int ,int ,int ) ;
 int * FUNC_3 (int *,int ,...) ;
 int VAR_0 ;
 TYPE_17__ VAR_1 ;
 int FUNC_4 (TYPE_5__**,int *) ;
 int FUNC_5 (TYPE_5__**,int *) ;
 int FUNC_6 (TYPE_5__**,int *) ;
 int FUNC_7 (TYPE_5__**,int *) ;
 int FUNC_8 (TYPE_5__**,int *) ;
 int FUNC_9 (TYPE_5__**,int *) ;
 int FUNC_10 (TYPE_5__**,int *) ;
 int FUNC_11 (TYPE_5__**,int *) ;
 int FUNC_12 (TYPE_5__**,int *) ;
 int FUNC_13 (TYPE_5__**,int *) ;
 int FUNC_14 (TYPE_5__**,int *) ;

__attribute__((used)) static jobject
FUNC_15( JNIEnv *VAR_2, audio_output_t *VAR_3, unsigned int VAR_4,
                  int VAR_5, int VAR_6, int VAR_7,
                  jint VAR_8 )
{
    jobject VAR_9 = ((void*)0);
    jobject VAR_10 = ((void*)0);
    jobject VAR_11 = ((void*)0);
    jobject VAR_12 = ((void*)0);
    jobject VAR_13 = ((void*)0);
    jobject VAR_14;

    VAR_10 =
        FUNC_2( VAR_0,
                  VAR_1.AudioAttributes_Builder.clazz,
                  VAR_1.AudioAttributes_Builder.ctor );
    if( !VAR_10 )
        return ((void*)0);

    VAR_14 = FUNC_3( VAR_10,
                           VAR_1.AudioAttributes_Builder.setLegacyStreamType,
                           VAR_1.AudioManager.STREAM_MUSIC );
    (*VAR_2)->DeleteLocalRef( VAR_2, VAR_14 );

    VAR_11 =
        FUNC_3( VAR_10,
                         VAR_1.AudioAttributes_Builder.build );
    if( !VAR_11 )
        goto del_local_refs;

    VAR_12 = FUNC_2( VAR_0,
                               VAR_1.AudioFormat_Builder.clazz,
                               VAR_1.AudioFormat_Builder.ctor );
    if( !VAR_12 )
        goto del_local_refs;

    VAR_14 = FUNC_3( VAR_12,
                           VAR_1.AudioFormat_Builder.setChannelMask,
                           VAR_5 );
    if( FUNC_0( "AudioFormat.Builder", "setChannelMask" ) )
    {
        (*VAR_2)->DeleteLocalRef( VAR_2, VAR_14 );
        goto del_local_refs;
    }
    (*VAR_2)->DeleteLocalRef( VAR_2, VAR_14 );

    VAR_14 = FUNC_3( VAR_12,
                           VAR_1.AudioFormat_Builder.setEncoding,
                           VAR_6 );
    if( FUNC_0( "AudioFormat.Builder", "setEncoding" ) )
    {
        (*VAR_2)->DeleteLocalRef( VAR_2, VAR_14 );
        goto del_local_refs;
    }
    (*VAR_2)->DeleteLocalRef( VAR_2, VAR_14 );

    VAR_14 = FUNC_3( VAR_12,
                           VAR_1.AudioFormat_Builder.setSampleRate,
                           VAR_4 );
    if( FUNC_0( "AudioFormat.Builder", "setSampleRate" ) )
    {
        (*VAR_2)->DeleteLocalRef( VAR_2, VAR_14 );
        goto del_local_refs;
    }
    (*VAR_2)->DeleteLocalRef( VAR_2, VAR_14 );

    VAR_13 = FUNC_3( VAR_12,
                                      VAR_1.AudioFormat_Builder.build );
    if(!VAR_13)
        goto del_local_refs;

    VAR_9 = FUNC_1( VAR_11, VAR_13, VAR_7,
                               VAR_1.AudioTrack.MODE_STREAM, VAR_8 );

del_local_refs:
    (*VAR_2)->DeleteLocalRef( VAR_2, VAR_10 );
    (*VAR_2)->DeleteLocalRef( VAR_2, VAR_11 );
    (*VAR_2)->DeleteLocalRef( VAR_2, VAR_12 );
    (*VAR_2)->DeleteLocalRef( VAR_2, VAR_13 );
    return VAR_9;
}
