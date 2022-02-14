
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_7__ {scalar_t__ i_samples_written; } ;
typedef TYPE_2__ aout_sys_t ;
typedef int JNIEnv ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2( JNIEnv *VAR_0, audio_output_t *VAR_1 )
{
    aout_sys_t *VAR_2 = VAR_1->sys;

    FUNC_1( VAR_0, VAR_1 );
    FUNC_0( VAR_0, VAR_1 );
    VAR_2->i_samples_written = 0;
}
