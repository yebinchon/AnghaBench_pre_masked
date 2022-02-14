
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int s; } ;
typedef TYPE_2__ aout_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1( audio_output_t *VAR_1, vlc_tick_t *VAR_2 )
{
    aout_sys_t *VAR_3 = VAR_1->sys;
    return (FUNC_0( &VAR_3->s, VAR_2 ) == VAR_0) ? 0 : -1;
}
