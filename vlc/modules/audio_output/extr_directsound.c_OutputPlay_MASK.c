
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int block_t ;
struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int s; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2( audio_output_t *VAR_0, block_t *VAR_1, vlc_tick_t VAR_2 )
{
    aout_sys_t *VAR_3 = VAR_0->sys;
    FUNC_0( FUNC_1(VAR_0), &VAR_3->s, VAR_1 );
    (void) VAR_2;
}
