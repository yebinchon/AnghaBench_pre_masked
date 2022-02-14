
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_5__ {scalar_t__ i_wrap_count; scalar_t__ i_last; } ;
struct TYPE_7__ {TYPE_1__ headpos; } ;
typedef TYPE_3__ aout_sys_t ;
typedef int JNIEnv ;



__attribute__((used)) static void
FUNC_0( JNIEnv *VAR_0, audio_output_t *VAR_1 )
{
    (void) VAR_0;
    aout_sys_t *VAR_2 = VAR_1->sys;

    VAR_2->headpos.i_last = 0;
    VAR_2->headpos.i_wrap_count = 0;
}
