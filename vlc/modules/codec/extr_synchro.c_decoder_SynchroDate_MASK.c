
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_3__ {int current_pts; } ;
typedef TYPE_1__ decoder_synchro_t ;



vlc_tick_t FUNC_0( decoder_synchro_t * VAR_0 )
{

    return VAR_0->current_pts;
}
