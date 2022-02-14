
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int jobject ;
typedef int jint ;
typedef int audio_output_t ;
struct TYPE_5__ {int MODE_STREAM; } ;
struct TYPE_4__ {int STREAM_MUSIC; } ;
struct TYPE_6__ {TYPE_2__ AudioTrack; TYPE_1__ AudioManager; } ;
typedef int JNIEnv ;


 int FUNC_0 (int ,unsigned int,int,int,int,int ,int ) ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static jobject
FUNC_2( JNIEnv *VAR_1, audio_output_t *VAR_2, unsigned int VAR_3,
                      int VAR_4, int VAR_5, int VAR_6,
                      jint VAR_7 )
{
    FUNC_1( VAR_2 );
    return FUNC_0( VAR_0.AudioManager.STREAM_MUSIC, VAR_3,
                       VAR_4, VAR_5, VAR_6,
                       VAR_0.AudioTrack.MODE_STREAM, VAR_7 );
}
