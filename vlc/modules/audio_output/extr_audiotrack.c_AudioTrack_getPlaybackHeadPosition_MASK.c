
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_5__ {int i_last; scalar_t__ i_wrap_count; } ;
struct TYPE_7__ {TYPE_1__ headpos; } ;
typedef TYPE_3__ aout_sys_t ;
typedef int JNIEnv ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static uint64_t
FUNC_1( JNIEnv *VAR_1, audio_output_t *VAR_2 )
{
    aout_sys_t *VAR_3 = VAR_2->sys;
    uint32_t VAR_4;


    VAR_4 = 0xFFFFFFFFL & FUNC_0( VAR_0 );


    if( VAR_3->headpos.i_last > VAR_4 )
        VAR_3->headpos.i_wrap_count++;
    VAR_3->headpos.i_last = VAR_4;
    return VAR_3->headpos.i_last + ((uint64_t)VAR_3->headpos.i_wrap_count << 32);
}
