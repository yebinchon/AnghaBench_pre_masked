
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_5__* sys; } ;
typedef TYPE_4__ audio_output_t ;
struct TYPE_8__ {int p_floatarray; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
struct TYPE_12__ {TYPE_2__ circular; } ;
typedef TYPE_5__ aout_sys_t ;
struct TYPE_10__ {int WRITE_NON_BLOCKING; } ;
struct TYPE_13__ {TYPE_3__ AudioTrack; } ;
typedef int JNIEnv ;


 int FUNC_0 (int ,int ,size_t,size_t,int ) ;
 TYPE_6__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1( JNIEnv *VAR_2, audio_output_t *VAR_3,
                           size_t VAR_4, size_t VAR_5 )
{
    aout_sys_t *VAR_6 = VAR_3->sys;
    int VAR_7;

    VAR_7 = FUNC_0( VAR_1, VAR_6->circular.u.p_floatarray,
                             VAR_5 / 4, VAR_4 / 4,
                             VAR_0.AudioTrack.WRITE_NON_BLOCKING );
    if( VAR_7 < 0 )
        return VAR_7;
    else
        return VAR_7 * 4;
}
